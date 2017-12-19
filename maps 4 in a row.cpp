#include <iostream>
using namespace std;

main() {
	char Maps[12][22]=
	{
	"[===^===^===^===^===]",
	"|   |   |   |   |   |",
	"<===#===#===#===#===>",
	"|   |   |   |   |   |",
	"<===#===#===#===#===>",
	"|   |   |   |   |   |",
	"<===#===#===#===#===>",
	"|   |   |   |   |   |",
	"<===#===#===#===#===>",
	"|   |   |   |   |   |",
	"(===%===%===%===%===)",

	};
	for(int i=0; i<12; i++){
		for(int j=0; j<22; j++){
			char t=Maps[i][j];
		if(t == '=')
		cout<<char(205);
	else if(t == '|')
		cout<<char(186);
	else if(t == '#')
		cout<<char(206);
	else if(t == '^')
		cout<<char(203);
	else if(t == '<')
		cout<<char(204);
	else if(t == '>')
		cout<<char(185);
	else if(t == '%')
		cout<<char(202);
	else if(t == '[')
		cout<<char(201);
	else if(t == ']')
		cout<<char(187);
	else if(t == '(')
		cout<<char(200);
	else if(t == ')')
		cout<<char(188);

	else
		cout<<t;
 
		}
		cout<< endl;
	}	
}
