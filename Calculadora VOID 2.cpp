#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

void suma(){
	system("cls");
	float numero=0;
	int conta=0;
	float suma=0;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a sumar:"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta=conta++;
		suma=suma+numero;
	}
	cout<<"El resultado de la suma es:"<<endl;
	cout<<suma<<endl;
	system("pause");
}

void resta(){
	system("cls");
	float numero=0;
	int conta=0;
	float resta=0;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a restar:"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta=conta++;
		resta=resta-numero;
	}
	cout<<"El resultado de la resta es:"<<endl;
	cout<<resta<<endl;
	system("pause");

}

void multiplicacion(){
	system("cls");
	float numero=0;
	int conta=0;
	float mult=1;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a multiplicar:"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta=conta++;
		mult=mult*numero;
	}
	cout<<"El resultado de la multiplicacion es:"<<endl;
	cout<<mult<<endl;
	system("pause");
}

void division(){
	system("cls");
	float numero=0;
	int conta=0;
	float div=1;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a dividir:"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta=conta++;
		div=div/numero;
	}
	cout<<"El resultado de la division es:"<<endl;
	cout<<div<<endl;
	system("pause");
}

void potencia(){
	system("cls");
	int expo;
	int base;
	cout<<"Ingrese la base:"<<endl;
	cin>>base;
	cout<<"Ingrese el exponente:"<<endl;
	cin>>expo;
    base=pow(base,expo);
	cout<<"El resultado es:"<<endl;
	cout<<base<<endl;
	system("pause");

}

void logaritmo(){
	system("cls");
	float num=0;
	float result=0;
	cout<<"ingrese un numero:"<<endl;
	cin>>num;
	result=(log(num));
	cout<<"El logaritmo natural es:"<<endl;
	cout<<result<<endl;
	system("pause");

}

void exponencial(){
	system("cls");
	float num=0;
	float result=0;
	cout<<"ingrese un numero:"<<endl;
	cin>>num;
	result=(exp(num));
	cout<<"El exponencial es:"<<endl;
	cout<<result<<endl;
	system("pause");

}

void factorial(){
	system("cls");
	float conta=1;
	float num=0;
	float result=1;
	cout<<"Ingrese el numero a calcular:"<<endl;
	cin>>num;
	while(conta<=num){
		result=result*conta;
		conta=conta++;
	}
	cout<<"El resultado del factorial es:"<<endl;
	cout<<result<<endl;
	system("pause");
	return ;
	
}

void base_10(){
	system("cls");
	float num=0;
	float result=0;
	cout<<"ingrese un numero:"<<endl;
	cin>>num;
	result=(log10(num));
	cout<<"La base 10 es"<<endl;
	cout<<result<<endl;
	system("pause");
  
}

void raiz_cuadrada(){
	system("cls");
	float num=0;
	float result=0;
	cout<<"ingrese un numero:"<<endl;
	cin>>num;
	result=(sqrt(num));
	cout<<"La raiz cuadrada es:"<<endl;
	cout<<result<<endl;
	system("pause");
		
} 

void raiz_cubica(){
	system("cls");
	float num=0;
	float result=0;
	cout<<"ingrese un numero:"<<endl;
	cin>>num;
	result=(cbrt(num));
	cout<<"La raiz cubica es:"<<endl;
	cout<<result<<endl;
	system("pause");
		
}

void seno(){
	system("cls");
	float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular:"<<endl;
	cin>>angulo;
	result=(sin(angulo*2*3.14159/360));
	cout<<"El seno del angulo es:"<<endl;
	cout<<result<<endl;
	system("pause");
	
}

void coseno(){
	system("cls");
	float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular:"<<endl;
	cin>>angulo;
	result=(cos(angulo*3.14159/180));
	cout<<"El coseno del angulo es:"<<endl;
	cout<<result<<endl;
	system("pause");
	
}

void tangente(){	
	system("cls");
    float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular:"<<endl;
	cin>>angulo;
	result=(tan(angulo*2.0*3.14159/360.0));
	cout<<"La tangente del angulo es:"<<endl;
	cout<<result<<endl;
	system("pause");
	
}


int main(){
	system("color 0a");
	int opcion;
	while(opcion!=15){
	    system("cls");
		cout<<"MENU PRINCIPAL:"<<endl;
		cout<<"1:  Suma"<<endl;
		cout<<"2:  Resta"<<endl;
		cout<<"3:  Multiplicacion"<<endl;
		cout<<"4:  Division"<<endl;
		cout<<"5:  Potencia"<<endl;
		cout<<"6:  Logaritmo"<<endl;
		cout<<"7:  Exponencial"<<endl;
		cout<<"8:  Factorial"<<endl;
		cout<<"9:  Base 10"<<endl;
		cout<<"10: Raiz Cuadrada"<<endl;
		cout<<"11: Raiz Cubica"<<endl;
		cout<<"12: Seno"<<endl;
		cout<<"13: Coseno"<<endl;
		cout<<"14: Tangente"<<endl;
		cout<<"15: SALIR"<<endl;
		cout<<"<<<Escoja una de las opciones disponibles>>>"<<endl;
		cin>>opcion;
		if(opcion==1){
			system("cls");
		    suma();
		}
		if(opcion==2){
			system("cls");
			resta();
		}
		if(opcion==3){
			system("cls");
			multiplicacion();
		}
		if(opcion==4){
			system("cls");
			division();
		}
		if(opcion==5){
			system("cls");
			potencia();
		}
		if(opcion==6){
			system("cls");
			logaritmo();
		}
		if(opcion==7){
			system("cls");
			exponencial();
		}
		if(opcion==8){
			system("cls");
			factorial();
		}
		if(opcion==9){
			system("cls");
			base_10();
		}
		if(opcion==10){
			system("cls");
			raiz_cuadrada();
		}
		if(opcion==11){
			system("cls");
			raiz_cubica();
		}
		if(opcion==12){
			system("cls");
			seno();
		}
		if(opcion==13){
			system("cls");
			coseno();
		}
		if(opcion==14){
			system("cls");
			tangente();
		}
	}
	
	return 0;
}
