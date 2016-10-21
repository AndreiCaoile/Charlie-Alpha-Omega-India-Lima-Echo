#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;

void menu();
void name();
int Problem1(int a);//return value w arg
int Problem2(int a);
int Problem3(int a);
int Problem4(int a);
int Problem5(int a);//up to here
void Problem6();
void Problem7();
void Problem8();
void Problem9();
void Problem10();

main (){
	int choice,n;
	do{
		name();
		menu();
		cout<<"Enter your Choice:\n";
		cin>>choice;
		if(choice<=5&&choice>=1){
			cout<<"Enter n:\n";
			cin>>n;
			cout<<"Writing to file ";
			Sleep(400);
			cout<<". ";
			Sleep(400);
			cout<<". ";
			Sleep(400);
			cout<<". ";
			Sleep(400);
			cout<<". \n";
			system("pause");
		}
		switch(choice){
			case 1:{
				Problem1(n);
				break;
			}
			case 2:{
				Problem2(n);
				break;
			}
			case 3:{
				Problem3(n);
				break;
			}
			case 4:{
				Problem4(n);
				break;
			}
			case 5:{
				Problem5(n);
				break;
			}
			case 6:{
				Problem6();
				break;
			}
			case 7:{
				Problem7();
				break;
			}
			case 8:{
				Problem8();
				break;
			}
			case 9:{
				Problem9();
				break;
			}
			case 10:{
				Problem10();
				break;
			}case 11:{
				exit(1);
				break;
			}
			default:{
				cout<<"Invalid Input\n";
				system("pause");
				break;
			}
		}
		system ("cls");
	}while(choice!=11)
;}

void name(){
	cout<<"Name: Paul Andrei R. Caoile\nSection: E21\nFinal Hands-On Quiz 1\nDate: 10.19.2016\n\n";
}
void menu(){
	cout<<"Menu"<<endl;
	cout<<"Write to file\n";
	cout<<"[1] Problem 1\n";
	cout<<"[2] Problem 2\n";
	cout<<"[3] Problem 3\n";
	cout<<"[4] Problem 4\n";
	cout<<"[5] Problem 5\n";
	cout<<"Write to file\n";
	cout<<"[6] Problem 1\n";
	cout<<"[7] Problem 2\n";
	cout<<"[8] Problem 3\n";
	cout<<"[9] Problem 4\n";
	cout<<"[10] Problem 5\n";
	cout<<"[11] Exit\n";
}

int Problem1(int a){
	int counter(1);
	FILE *fp;
	fp=fopen("CAOILE_PAUL ANDREI1.txt","w");
	if(!fp)
	{
	cout << "Cannot open file.\n";
	system("pause");
	}
	
	cout<<
	fputs("Name: Paul Andrei R. Caoile\nSection: E21\n Final Hands-On\nDate: 10.19.2016\n\n\n",fp);
	do{
	fprintf(fp,"%5d",counter);
	counter+=1;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=2;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=4;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=3;
	}while (counter<a);
	fclose(fp);
}

int Problem2(int a){
	int counter(1);
	FILE *fp;
	fp=fopen("CAOILE_PAUL ANDREI2.txt","w");
	if(!fp)
	{
	cout << "Cannot open file.\n";
	system("pause");
	}
	
	fputs("Name: Paul Andrei R. Caoile\nSection: E21\n Final Hands-On\nDate: 10.19.2016\n\n\n",fp);
	do{
	fprintf(fp,"%5d",counter);
	counter+=1;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=2;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=4;
	}while (counter<a);
	fclose(fp);
}

int Problem3(int a){
	int counter(1);
	FILE *fp;
	fp=fopen("CAOILE_PAUL ANDREI3.txt","w");
	if(!fp)
	{
	cout << "Cannot open file.\n";
	system("pause");
	}
	
	fputs("Name: Paul Andrei R. Caoile\nSection: E21\n Final Hands-On\nDate: 10.19.2016\n\n\n",fp);
	do{
	fprintf(fp,"%5d",counter);
	counter+=2;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=6;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=7;
	if(counter<a)
	fprintf(fp,"%5d",counter);
	counter+=5;
	}while (counter<a);
	fclose(fp);
}

int Problem4(int a){
	int counter(1),secounter(2);
	FILE *fp;
	fp=fopen("CAOILE_PAUL ANDREI4.txt","w");
	if(!fp)
	{
	cout << "Cannot open file.\n";
	system("pause");
	}
	
	fputs("Name: Paul Andrei R. Caoile\nSection: E21\n Final Hands-On\nDate: 10.19.2016\n\n\n",fp);
	do{
	fprintf(fp,"%5d",secounter);
	fprintf(fp,"%5d",counter);
	secounter=secounter+counter;
	counter++;
	counter++;
	}while (counter<a);
	fclose(fp);
}

int Problem5(int a){
	int counter(100);
	FILE *fp;
	fp=fopen("CAOILE_PAUL ANDREI5.txt","w");
	if(!fp)
	{
	cout << "Cannot open file.\n";
	system("pause");
	}
	
	fputs("Name: Paul Andrei R. Caoile\nSection: E21\n Final Hands-On\nDate: 10.19.2016\n\n\n",fp);
	do{
	fprintf(fp,"%7d",counter);
	counter+=11;
	}while (counter<a);
	fclose(fp);
}

void Problem6(){
	FILE *fp;
	char buff[10000];
	fp=fopen("CAOILE_PAUL ANDREI1.txt","r");
	if(!fp){
		cout << "Cannot open file.\n";
		system("pause");
	}
	
	while(fgets(buff,10000,fp)!=NULL)
	cout << buff;
	
	fclose(fp);
	system("pause>0");
}

void Problem7(){
	FILE *fp;
	char buff[10000];
	fp=fopen("CAOILE_PAUL ANDREI2.txt","r");
	if(!fp){
		cout << "Cannot open file.\n";
		system("pause");
	}
	
	while(fgets(buff,10000,fp)!=NULL)
	cout << buff;
	
	fclose(fp);
	system("pause>0");
}

void Problem8(){
	FILE *fp;
	char buff[10000];
	fp=fopen("CAOILE_PAUL ANDREI3.txt","r");
	if(!fp){
		cout << "Cannot open file.\n";
		system("pause");
	}
	
	while(fgets(buff,10000,fp)!=NULL)
	cout << buff;
	
	fclose(fp);
	system("pause>0");
}

void Problem9(){
	FILE *fp;
	char buff[10000];
	fp=fopen("CAOILE_PAUL ANDREI4.txt","r");
	if(!fp){
		cout << "Cannot open file.\n";
		system("pause");
	}
	
	while(fgets(buff,10000,fp)!=NULL)
	cout << buff;
	
	fclose(fp);
	system("pause>0");
}

void Problem10(){
	FILE *fp;
	char buff[10000];
	fp=fopen("CAOILE_PAUL ANDREI5.txt","r");
	if(!fp){
		cout << "Cannot open file.\n";
		system("pause");
	}
	
	while(fgets(buff,10000,fp)!=NULL)
	cout << buff;
	
	fclose(fp);
	system("pause>0");
}
