//MATH GAME
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	while(true)
	{
		int score=0;
		int i, a, b, oprator,  level, ans, total;
		srand(time(0));
		cout<<"1.Easy "<<endl;
		cout<<"2.Medium "<<endl;
		cout<<"3.Hard "<<endl;
		cout<<"4.Exit "<<endl;
		 cout<<"Enter the level number : : ";
		 cin>>level;
         if(level==4)
         break;
		     cout<<"1.Addition "<<endl;
		     cout<<"2.Substraction "<<endl;
		     cout<<"3.Multiplication "<<endl;
		     cout<<"4.Divide "<<endl;
		     cout<<"Enter the oprator name : : ";
		 cin>>oprator;
		 switch(level)
		 {
		 case 1:
		 {
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==1)
		  	{
		  		a=rand()%10;
		  		b=rand()%10;
		  		cout<<a<<" + "<<b<<" = ";
		  		cin>>ans;
		  		total=a+b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==2)
		  	{
		  		a=rand()%10;
		  		b=rand()%10;
		  		cout<<a<<" - "<<b<<" = ";
		  		cin>>ans;
		  		total=a-b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==3)
		  	{
		  		a=rand()%10;
		  		b=rand()%10;
		  		cout<<a<<" * "<<b<<" = ";
		  		cin>>ans;
		  		total=a*b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==4)
		  	{
		  		float ans;
		  		a=rand()%10;
		  		b=rand()%10;
		  		cout<<a<<" / "<<b<<" = ";
		  		cin>>ans;
		  		total=a/b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	break;
		  	
          case  2:
		 {
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==1)
		  	{
		  		a=rand()%100;
		  		b=rand()%100;
		  		cout<<a<<" + "<<b<<" = ";
		  		cin>>ans;
		  		total=a+b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==2)
		  	{
		  		a=rand()%100;
		  		b=rand()%100;
		  		cout<<a<<" - "<<b<<" = ";
		  		cin>>ans;
		  		total=a-b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==3)
		  	{
		  		a=rand()%100;
		  		b=rand()%100;
		  		cout<<a<<" * "<<b<<" = ";
		  		cin>>ans;
		  		total=a*b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	break;
			 case 3:
		 {
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==1)
		  	{
		  		a=rand()%1000;
		  		b=rand()%1000;
		  		cout<<a<<" + "<<b<<" = ";
		  		cin>>ans;
		  		total=a+b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==2)
		  	{
		  		a=rand()%1000;
		  		b=rand()%1000;
		  		cout<<a<<" - "<<b<<" = ";
		  		cin>>ans;
		  		total=a-b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	}
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==3)
		  	{
		  		a=rand()%1000;
		  		b=rand()%1000;
		  		cout<<a<<" * "<<b<<" = ";
		  		cin>>ans;
		  		total=a*b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==4)
		  	{
		  		float ans;
		  		a=rand()%1000;
		  		b=rand()%1000;
		  		cout<<a<<" / "<<b<<" = ";
		  		cin>>ans;
		  		total=a/b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  	
		  	for(i=1; i<=10; i++)
		  	{
		  	if(oprator==4)
		  	{
		  		float ans;
		  		a=rand()%100;
		  		b=rand()%100;
		  		cout<<a<<" / "<<b<<" = ";
		  		cin>>ans;
		  		total=a/b;
		  		if(total==ans)
		  		{
		  			score=score+1;
		  			}
		  		}
		  	}
		  		}
		  	cout<<"Your score is............"<<score<<endl;
    	char c;
		cout<<"Start the game again(y/n) : : ";
		cin>>c;
		if(c=='n')
		{
			break;
			}
		
		
		}
	return 0;
	} 