#include <iostream>
#include <string>
#include <mysqlx/xdevapi.h>
#include <stdbool.h>
#include <ctime>
using namespace std;
using ::std::cout;
using ::std::cin;

const std::string msg = "QUERY_STRING";  //获取客户端发送的表单数据
char* value = getenv(msg.c_str());


int main()
{
    cout << "Content-type: text/html\r\n\r\n";  //报头

    string user("root");
    string passwd("baiweiliang1234");
    string database("suppliesmanager");
    unsigned port = 3306;
    //建立连接
    try
    {
       mysqlx::Session sess(port, user, passwd, database);
        cout << "连接成功" << endl;
    }
    catch (mysqlx::Error)
    {
        cout << "连接失败" << endl;
        return 0;
    }
    return 0;
}