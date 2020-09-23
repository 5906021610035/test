#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float radius);
float Area(const float weight,const float height);
float Area(float weight,int lenght,int height);
float Area(double based1,double base2,double height);
int main()
{	
	char choice;
	bool flag = true;
	do{ 
		DisplayMenu();
		cin>>choice;
		if(choice == '1'){
			float radius;
			cout<<"Enter radius : ";
			cin>>radius;
			cout<<"Area of circle ="<<fixed;
			cout<<setprecision(2)<<Area(radius)<<endl;
		}//1
		else if(choice == '2'){
			float weight,height;
			cout<<"Enter weight : ";
			cin>>weight;
			cout<<"Enter height : ";
			cin>>height;
			cout<<"Area of Rectangle ="<<fixed;
			cout<<setprecision(2)<<Area(weight,height)<<endl;
		}//2
		else if(choice == '3'){
			float weight;
			int height,length;
			cout<<"Enter weight : ";
			cin>>weight;
			cout<<"Enter lenght : ";
			cin>>length;
			cout<<"Enter height : ";
			cin>>height;
			cout<<"Area of Rectangle ="<<fixed;
			cout<<setprecision(2)<<Area(weight,length,height)<<endl;
		}//3
			else if(choice == '4'){
			double based1,based2,height;
			cout<<"Enter base1  : ";
			cin>>based1;
			cout<<"Enter based1 : ";
			cin>>based2;
			cout<<"Enter height : ";
			cin>>height;
			cout<<"Area of Rectangle ="<<fixed;
			cout<<setprecision(2)<<Area(based1,based2,height)<<endl;
		}//4
		else if(choice == '5'){
			flag = false;
		}//5.exit
		else{
			cout<<"\nYou choose out of range is ";
			cout<<"Not process.\n";
		}//else

	}while(flag);
	cout<<"\n...Exit Program...\n";
	return(0);
}
float Area(const float radius){
	return(3.14159F*radius*radius);
}
float Area(const float weight,const float height){
	return(weight * height);
}
float Area(float weight,int lenght,int height){
	return (weight*lenght*height);
}
float Area(double based1,double based2,double height){
	return (0.5*height*(based1+based2));
}
void DisplayMenu(){
	cout<<endl;
	cout<<" Progam Calculate Area \n";
	cout<<" 1.Circle\n";
	cout<<" 2.Registangle\n";
	cout<<" 3.Capacity\n";
	cout<<" 4.Trapezium\n";
	cout<<" 5.Exit\n";
	cout<<" Enter your choice number : ";
}

