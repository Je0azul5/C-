#include<iostream>
#include<stdio.h>
#include<string.h>
#include <cmath>
using namespace std;
int main(){
	int a=0;
	while(a<7)
	{
		cout<<" _____________Programa de conversiones_____________\n";
		cout<<"  Digite: \n";
		cout<<"            1 Decimal a binario\n";
		cout<<"            2 Decimal a octal\n";
		cout<<"            3 Decimal a Hexadecimal\n";
		cout<<"            4 Binario a decinaml\n";
		cout<<"            5 Octal a decimal\n";
		cout<<"            6 Hexadecimal a decimal\n";
		cout<<"            7 Salir\n";
		cin>>a;
			switch(a){
				case 1:
					{
    					 int r=0, i = 1,x=0,n=0,bin=0;
    					 	cout << "       Ingrese un numero decimal positivo" << endl;
						 	cin >> n;
						 	x=n;
    						while (n!=0)
    						{
        						r = n%2;
        						n /= 2;
        						bin += r*i;
        						i *= 10;
    						}
						 cout << "       El numero: "<<x<<" se escribe: " <<bin<<"\n";	
						 system("pause");
						 break;
					} 
				case 2:
					{
						 
						 int r=0, i = 1, oct = 0,x=0,d=0;
						 	cout << "       Ingrese un numero decimal positivo" << endl;
						 	cin >> d;
						 	x=d;
    							while (d != 0)
    							{
        							r = d % 8;
        							d /= 8;
        							oct += r * i;
        							i *= 10;
    							}
            			 cout << "       El numero: "<<x<<" se escribe: " << oct<<"\n";	
						 system("pause");
						 break;
					}
				case 3:
					{
					 	char hex[100];
					 	string z="";
					 	int i = 0,x=0,n=0;
					 		cout << "       Ingrese un numero decimal positivo" << endl;
					 		cin >> n;
					 		x=n;
							 while(n!=0) 
    					 	{    
        					 	int temp  = 0; 
          						temp = n % 16; 
     								if(temp < 10) 
        							{ 
            							 hex[i] = temp + 48; 
           								 i++; 
        						 	} 
        						 	else
         							{ 
            							 hex[i] = temp + 55; 
            							 i++; 
         							} 
        						n = n/16; 
    					 	}
    					 	for(int j=i-1; j>=0; j--) 
        							z+=hex[j]; 
					 	cout << "       El numero: "<<x<<" se escribe: " << z<<"\n";
					 	system("pause");
					 	break;
					}
				case 4:
					{
						 int dec = 0, i = 0, r=0,n=0,x=0;
    	
						 	cout << "       Ingrese un numero decimal positivo" << endl;
						 	cin >> n;
						 	x=n;
    							while (n!=0)
   							 	{
        							r = n%10;
        							n /= 10;
        							dec += r*pow(2,i);
        							++i;
    						 	}
						 cout << "       El numero: "<<x<<" se escribe: " <<dec<<"\n";	
						 system("pause");
						 break;
					}
				case 5:
					{	
						int dec = 0, i = 0, r=0,oct=0,x=0;
							cout << "       Ingrese un numero octal positivo" << endl;
							cin>>oct;
							x=oct;
    							while (oct != 0)
    							{
        							r= oct % 10;
        							oct /= 10;
        							dec += r * pow(8, i);
        							++i;
    							}
    					 cout << "       El numero: "<<x<<" se escribe: " << dec<<"\n";	
						 system("pause");
						 break;
					}
				case 6:
					{
					 	string hex = "";
					 	string x="";
      						cout << "       Ingrese un numero hexadecimal positivo" << endl;
      						cin>>hex;
      						x=hex;
      						int len = hex.length(),b = 1,dec = 0;
    							for (int i=len-1; i>=0; i--) 
    							{	    
       						 		if (hex.at(i)>='0' && hex.at(i)<='9') 
        					 		{ 
            							dec += (hex.at(i) - 48)*b;
            							b = b * 16; 
        					 		}else if (hex.at(i)>='A' && hex.at(i)<='F') 
        					 		{						
            							dec += (hex.at(i) - 55)*b; 
         								b = b*16; 
        							} 
    							} 
						 cout << "       El numero: "<<x<<" se escribe: " << dec<<"\n";	 
						 system("pause");
						 break;
					}
				case 7:
					{
						system("pause");					
						break;
						break;	
					}							
			}
			system("cls");
	}			
}
