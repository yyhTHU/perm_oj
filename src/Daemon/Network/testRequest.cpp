#include<iostream>
#include"RequestHandler.hpp"
using namespace std;
using namespace Daemon;

int main(){
	RequestHandler *rh;
	rh=new RequestHandler();
	char* url="http://127.0.0.1/test/recv.php";
	char* path="./test_post_xml/post_xml.xml";
	rh->sendFile(path,url);
	rh->sendFile(path,url);
	return 0;
}
