#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

char toChar(int x){
	char res;
	if (x >= 0 && x <= 9){
		return x + '0';
	}
	else if (x == 10){
		res = 'A';
	}
	else if (x == 11){
		res = 'B';
	}
	else if (x == 12){
		res = 'C';
	}
	else if (x == 13){
		res = 'D';
	}
	else if (x == 14){
		res = 'E';
	}
	else if (x == 15){
		res = 'F';
	}
	else if (x == 16){
		res = 'G';
	}
	else if (x == 17){
		res = 'H';
	}
	else if (x == 18){
		res = 'I';
	}
	else if (x == 19){
		res = 'J';
	}
	else if (x == 20){
		res = 'K';
	}
	else if (x == 21){
		res = 'L';
	}
	else if (x == 22){
		res = 'M';
	}
	else if (x == 23){
		res = 'N';
	}
	else if (x == 24){
		res = 'O';
	}
	else if (x == 25){
		res = 'P';
	}
	else if (x == 26){
		res = 'Q';
	}
	else if (x == 27){
		res = 'R';
	}
	else if (x == 28){
		res = 'S';
	}
	else if (x == 29){
		res = 'T';
	}
	else if (x == 30){
		res = 'U';
	}
	else if (x == 31){
		res = 'V';
	}
	else if (x == 32){
		res = 'W';
	}
	else if (x == 33){
		res = 'X';
	}
	else if (x == 34){
		res = 'Y';
	}
	else if (x == 35){
		res = 'Z';
	}
	else{
		printf("Invalid input!");
		res = ' ';
	}
return res;	
}

void dectobase(int value, int base)
{
	int i = 0;
	char result[100];
	 while(value!=0){
        
      result[i++]= toChar(value % base);
      value = value / base;
  }
  
  for(int j = i - 1 ;j >= 0; j--)
      printf("%c",result[j]);
    
}

int receivedInput(char x){
	int res = 0;
	if (x >= '0' && x <= '9'){
		return x - '0';
	}
	else if (x == 'A' || x == 'a'){
		res = 10;
	}
	else if (x == 'B' || x == 'b'){
		res = 11;
	}
	else if (x == 'C' || x == 'c'){
		res = 12;
	}
	else if (x == 'D' || x == 'd'){
		res = 13;
	}
	else if (x == 'E' || x == 'e'){
		res = 14;
	}
	else if (x == 'F' || x == 'f'){
		res = 15;
	}
	else if (x == 'G' || x == 'g'){
		res = 16;
	}
	else if (x == 'H' || x == 'h'){
		res = 17;
	}
	else if (x == 'I' || x == 'i'){
		res = 18;
	}
	else if (x == 'J' || x == 'j'){
		res = 19;
	}
	else if (x == 'K' || x == 'k'){
		res = 20;
	}
	else if (x == 'L' || x == 'l'){
		res = 21;
	}
	else if (x == 'M' || x == 'm'){
		res = 22;
	}
	else if (x == 'N' || x == 'n'){
		res = 23;
	}
	else if (x == 'O' || x == 'o'){
		res = 24;
	}
	else if (x == 'P' || x == 'p'){
		res = 25;
	}
	else if (x == 'Q' || x == 'q'){
		res = 26;
	}
	else if (x == 'R' || x == 'r'){
		res = 27;
	}
	else if (x == 'S' || x == 's'){
		res = 28;
	}
	else if (x == 'T' || x == 't'){
		res = 29;
	}
	else if (x == 'U' || x == 'u'){
		res = 30;
	}
	else if (x == 'V' || x == 'v'){
		res = 31;
	}
	else if (x == 'W' || x == 'w'){
		res = 32;
	}
	else if (x == 'X' || x == 'x'){
		res = 33;
	}
	else if (x == 'Y' || x == 'y'){
		res = 34;
	}
	else if (x == 'Z' || x == 'z'){
		res = 35;
	}
	else{
		res = -1;
	}
	return res;
}

int basetodec(char* value, int base)
{
	int ans = 0;
	
	for(int i = strlen(value) - 1, j = 0; i >= 0; i--, j++)
	{
		int n = receivedInput(value[i]);
		int m = pow(base, j);
		ans = ans + (n * m);
				
	}
	
	return ans;
}

int checkNum(char* value, int base) {
  for(int i = 0; i < strlen(value); i++) {
    if(receivedInput(value[i]) >= base ) {
      return 0;
    }
  }
  return 1;
}

int main()
{
    int choice;
    int subchoice;
    int calculate;
    char val[100], val2[100];
    int base, base2, base3;
    int valdec, sum;

    do
    {
        printf("MENU\n\t1.) Converter\n\t2.) Calculator\n\t3.) Exit\n\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        	
        	system("cls");
            do
            {
                printf("Convert:\n\t1.) Base to decimal\n\t2.) Decimal to Base\n\t3.) Base to Base\n\t4.) Back to Main Menu\n\t");
                scanf("%d", &calculate);
            switch (calculate)
            {
            case 1:
            	system("cls");
                do{
				printf("\n\n\tInput base to be converted. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput value to be converted. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                printf("\n\n\t%s (Base of %d) converted to decimal is %d\n\n\t", val, base, basetodec(val, base));
                system("pause");
                system("cls");
                
                
                break;
            case 2:
            	system("cls");
            	printf("\n\n\tInput decimal value to convert\n\n\t");
            	scanf("%d", &valdec);
            	system("cls");
            	
            	do{
				printf("\n\n\tInput base to convert to. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                printf("\n\n\t%d converted to the base of %d is ", valdec, base);
                dectobase(valdec, base);
                printf("\n\n\t");
                system("pause");
                system("cls");
                
                
            	
                break;
            case 3:
            	system("cls");
            	do{
				printf("\n\n\tInput base to be converted. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput value to be converted. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                do{
				printf("\n\n\tInput base to convert value to. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base2);
                system("cls");
                if(base <= 1 || base2 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base2 <= 1 || base2 >= 37);
                
              
                printf("\n\n\t%s (base of %d) converted to the base of %d is: ", val, base, base2);
                dectobase(basetodec(val, base), base2);
                printf("\n\n\t");
                system("pause");
                system("cls");
                break;
                
                case 4:
                	system("cls");
                	break;
                
            default:
            	system("cls");
                printf("\n\n\tNot in the choices.\n\n\t");
                system("pause");
                system("cls");
                break;
            }
            }while(calculate != 4);
            break;
        case 2:
        	system("cls");
            do
            {
            printf("Calculate:\n\t1.) Add\n\t2.) Subtract\n\t3.) Multiply\n\t4.) Division\n\t5.) Back to Main Menu\n\t");
            scanf("%d", &subchoice);
            switch (subchoice)
            {
            case 1:
            	system("cls");
            	do{
				printf("\n\n\tInput base of first value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput first value. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                do{
				printf("\n\n\tInput base of second value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base2);
                system("cls");
                if(base <= 1 || base2 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base2 <= 1 || base2 >= 37);
                
                do{
				printf("\n\n\tInput second value. Base: %d \n\n\t", base);
                scanf("%s", &val2);
                system("cls");
                if(checkNum(val2, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val2, base) == 0);
                
                do{
				printf("\n\n\tInput base of sum. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base3);
                system("cls");
                if(base3 <= 1 || base3 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base3 <= 1 || base3 >= 37);
                
                printf("\n\n\tThe sum of %s (base of %d) and %s (base of %d)\n\n\t converted to the base of %d is ", val, base, val2, base2, base3);
                sum = basetodec(val, base) + basetodec(val2, base2);
                dectobase(sum, base3);
                printf("\n\n\t");
                system("pause");
                system("cls");
                	                                          	
                break;
            case 2:
            	system("cls");
            	do{
				printf("\n\n\tInput base of first value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput first value. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                do{
				printf("\n\n\tInput base of second value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base2);
                system("cls");
                if(base <= 1 || base2 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base2 <= 1 || base2 >= 37);
                
                do{
				printf("\n\n\tInput second value. Base: %d \n\n\t", base);
                scanf("%s", &val2);
                system("cls");
                if(checkNum(val2, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val2, base) == 0);
                
                do{
				printf("\n\n\tInput base of difference. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base3);
                system("cls");
                if(base3 <= 1 || base3 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base3 <= 1 || base3 >= 37);
                
                printf("\n\n\tThe difference of %s (base of %d) and %s (base of %d)\n\n\t converted to the base of %d is ", val, base, val2, base2, base3);
                sum = basetodec(val, base) - basetodec(val2, base2);
                dectobase(sum, base3);
                printf("\n\n\t");
                system("pause");
                system("cls");
                break;
            case 3:
            	system("cls");
            	do{
				printf("\n\n\tInput base of first value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput first value. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                do{
				printf("\n\n\tInput base of second value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base2);
                system("cls");
                if(base <= 1 || base2 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base2 <= 1 || base2 >= 37);
                
                do{
				printf("\n\n\tInput second value. Base: %d \n\n\t", base);
                scanf("%s", &val2);
                system("cls");
                if(checkNum(val2, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val2, base) == 0);
                
                do{
				printf("\n\n\tInput base of product. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base3);
                system("cls");
                if(base3 <= 1 || base3 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base3 <= 1 || base3 >= 37);
                
                printf("\n\n\tThe product of %s (base of %d) and %s (base of %d)\n\n\t converted to the base of %d is ", val, base, val2, base2, base3);
                sum = basetodec(val, base) * basetodec(val2, base2);
                dectobase(sum, base3);
                printf("\n\n\t");
                system("pause");
                system("cls");
                break;
            case 4:
            	system("cls");
            	do{
				printf("\n\n\tInput base of first value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base);
                system("cls");
                if(base <= 1 || base >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base <= 1 || base >= 37);
                
                do{
				printf("\n\n\tInput first value. Base: %d \n\n\t", base);
                scanf("%s", &val);
                system("cls");
                if(checkNum(val, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val, base) == 0);
                
                do{
				printf("\n\n\tInput base of second value. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base2);
                system("cls");
                if(base <= 1 || base2 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base2 <= 1 || base2 >= 37);
                
                do{
				printf("\n\n\tInput second value. Base: %d \n\n\t", base);
                scanf("%s", &val2);
                system("cls");
                if(checkNum(val2, base) == 0){				
                printf("\n\n\tInvalid Input. Input another value. Base: %d \n\n\t", base);
                system("pause");
                system("cls");}
                }while(checkNum(val2, base) == 0);
                
                do{
				printf("\n\n\tInput base of quotient. Base 2 - 36 only.\n\n\t");
                scanf("%d", &base3);
                system("cls");
                if(base3 <= 1 || base3 >= 37){				
                printf("\n\n\tInvalid Input. Input another base. Base 2 - 36 only.\n\n\t");
                system("pause");
                system("cls");}
                }while(base3 <= 1 || base3 >= 37);
                
                printf("\n\n\tThe quotient of %s (base of %d) and %s (base of %d)\n\n\t converted to the base of %d is ", val, base, val2, base2, base3);
                sum = basetodec(val, base) / basetodec(val2, base2);
                dectobase(sum, base3);
                if(basetodec(val, base) % basetodec(val2, base2) != 0)
                {
                	printf(" r. ");
                	dectobase(basetodec(val, base) % basetodec(val2, base2), base3);
				}
                printf("\n\n\t");
                system("pause");
                system("cls");
                break;
            case 5:
            	system("cls");
                break;
            default:
                printf("Not in the choices.\n");
                break;
            }
            }while(subchoice != 5);
            break;
        case 3:
            break;
        default:
        	system("cls");
            printf("\n\n\tNot in the choices.\n\n\t");
            system("pause");
            system("cls");
            break;
        }
    }while(choice != 3);

    return 0;
}

