


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>

using namespace std;

void input(char ip[]){
	
	strcpy(ip, "186.202.153.98");
	
}

int main(){
	
	char ip[16];
	char final[50];
	
	input(ip);
	
	strcpy(final, "ping ");
	
	strcat(final, ip);
	strcat(final, " -t -l 65500");
	
	cout << final << endl;
		
	system(final);
	
	return 0;
}
