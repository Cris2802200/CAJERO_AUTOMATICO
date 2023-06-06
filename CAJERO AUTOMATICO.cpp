#include<stdio.h>
#include<stdlib.h>

//CAJERO AUTOMATICO

int main(){


int a;
int saldoactual=0,saldoinicial=5000,r,b;
int salir=1;



do{

    
printf("\n-----------------------\n");
printf("BANCA DIGITAL WAPO SRL.");
printf("\n-----------------------\n");

printf("1.CONSULTAR SALDO\n2.RETIRO\n3.ABONO\n4.SALIR\n");
scanf("%d",&a);

switch(a){
	
	case 1:
		printf("SALDO ACTUAL:%d",saldoinicial);
		break;
	case 2:
		printf("INGRESE EL MONTO QUE VA RETIRAR\n");
		scanf("%d",&r);
		if(r>saldoinicial){
			printf("MONTO REQUERIDO INSUFICIENTE\n");
		}else{
		
			saldoactual=saldoinicial-r;
			printf("MONTO RETIRADO CON EXITO:%d\n",r);
			printf("SU SALDO ACTUAL ES DE:%d\n",saldoactual);
	}
		break;
	case 3:
		printf("INGRESE EL MONTO QUE VA ABONAR\n");
		scanf("%d",&b);
		saldoactual=saldoinicial+b;
		printf("MONTO ABONADO CON EXITO:%d\n",b);
		printf("SU SALDO ACTUAL ES DE:%d",saldoactual);
		break;
	case 4:
		salir=0;		
			
printf("\nGRACIAS POR USAR EL PROGRAMA\n");
printf("Programa realizado por: CRISTIAN FERNANDO CASTELLON MERCADO. COCHABAMBA.BOLIVIA.2023");
	break;
}

}while(salir);


return 0;
}
