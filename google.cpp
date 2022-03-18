#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main(int argc, char *argv[]){
	if( argc < 2 ){
	cout<<" use => google -help for more information."<<endl;
		return 1;
	}
	string opp(argv[1]),option;
	string text="";
	int i = 1;
	if(strcasecmp(opp.c_str(),"-p")==0){
		option = option + "--private-window";
		i = 2;
	}
	else{
		option = option + "--new-tab";
		i = 1;
	}
	for(; i<argc; i++){
		string str(argv[i]);
		text = text + str;
		if(i != argc-1){
			text = text + "+";
		}
	}
	string url = "firefox "+ option +" https://www.google.com/search\\?q\\="+text+"\\&client\\=firefox-b-d\\&sxsrf\\=APq-WBuKjuTExOm0Fp1eGVPJRN4SSKE0bQ%3A1647469060698\\&ei\\=BGIyYtaMKta45OUP6YSrOA\\&ved\\=0ahUKEwjWnpDB1Mv2AhVWHLkGHWnCCgcQ4dUDCA4\\&uact\\=5\\&oq\\="+text+"\\&gs_lcp\\=Cgdnd3Mtd2l6EAMyBggAEBYQHjIGCAAQFhAeMgYIABAWEB4yBggAEBYQHjIGCAAQFhAeMgYIABAWEB4yBggAEBYQHjIGCAAQFhAeMgYIABAWEB4yBggAEBYQHjoHCCMQsAMQJzoHCAAQRxCwAzoJCCMQJxBGEP8BOgQILhAnOgQIIxAnOg4ILhCABBCxAxDHARDRAzoLCAAQgAQQsQMQgwE6CwguEIAEEMcBENEDOhEILhCABBCxAxCDARDHARDRAzoLCC4QgAQQsQMQgwE6CAgAEIAEELEDOgQIABBDOgsILhCABBCxAxDUAjoICC4QgAQQsQM6CAgAELEDEIMBOgcILhDUAhBDOgQILhBDOgUIABCABDoGCAAQChBDOgUILhCABDoICC4QgAQQ1AI6CggAEIAEEEYQ_wFKBAhBGABKBAhGGABQmhBY0TFgtjRoBHABeAGAAdYCiAGOG5IBCDAuMTIuMy4ymAEAoAEByAEJwAEB\\&sclient\\=gws-wiz";
	const char *cstr = url.c_str();
	system(cstr);
	return 0; 
}
