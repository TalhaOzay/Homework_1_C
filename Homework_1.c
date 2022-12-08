#include <stdio.h>
#include <math.h>

/*
//1. Örnek
int main(){
	printf("1. ve 2. numarayi giriniz : ");
	int First,Second;
	scanf("%d",&First);
	scanf("%d",&Second);
	int Sum=First+Second;
	printf("Sum of these number : %d",Sum);
return 0;
}
*/

/*
// 2. Örnek
int main(){
	int r;
	printf("Enter radius : ");
	scanf("%d",&r);
	float Area;
	Area=(3.14)*(pow(r,2));
	printf("Area of the circle is %f",Area);
return 0;
}
*/

/*
// 3. Örnek
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if (num%2==0){
		printf("%d is even number.",num);
	}else{
		printf("%d is odd number.",num);
	}
return 0;
}
*/

/*
// 4. Örnek
int main(){
	int Temp;
	scanf("%d",&Temp);
	if (0<Temp){
		printf("Above the freezing point.");
	}else if(Temp<0){
		printf("Below the freezing point.");
	}else{
		printf("At the freezing point.");
	}
return 0;
}
*/

/*
// 5. Örnek
int main(){
	double F,C;
	printf("Enter Fahrenheit : ");
	scanf("%lf",&F);
	C=(F-32)*5/9;
	printf("%.2lf Fahrenheit equal %.2lf Celsius.",F,C);
return 0;
}
*/

/*
// 6. Örnek
int main(){
	double feet;
	printf("Enter the lengty as a feet : ");
	scanf("%lf",&feet);
	printf("%.2lf feet equat to %.2lf cm.",feet,feet*(30.48));
return 0;	
}
*/

/*
// 7. Örnek
int main(){
	int a,b;
	for (a=1;a<=10;a++){
		b=pow(a,2);
		printf("Square of %d is %d.\n",a,b);
	}
return 0;
}
*/

/*
// 8. Örnek
int main(){
	int low,high,sum;
	printf("Firstly enter Low number then Enter High number :\n");
	scanf("%d",&low);
	scanf("%d",&high);
	high--;
	sum=(low+high)*(high-low+1)/2;
	printf("Sum of all number between %d to %d is %d",low,high,sum);
return 0;
}
*/

/*
// 9. Örnek
void main(){
	int low,high,num;
	printf("Firstly enter Low number then Enter High number :\n");
	scanf("%d",&low);
	scanf("%d",&high);
	printf("Enter diviser number : ");
	scanf("%d",&num);
	low++;
	for (low;low<high;low++){
		if (low%num==0){
			printf("%d number is deviseble.\n",low);
		}else{
			continue;
		}
	}	
}
*/

/*
// 10. Örnek
void main(){
	int num,S;
	printf("Enter number : ");
	scanf("%d",&num);
	int large=num;
	for (S=0;S<2;S++){
		printf("Enter number : ");
		scanf("%d",&num);
		if (large<num){
			large = num;
		}
	}
	printf("Largerst number of 3 number is %d",large);
}
*/

/*
// 11. Örnek
void main(){
	int sum=0;
	double product=1;
	int num,s;
	printf("Enter 10 number :\n");
	for (s=0;s<10;s++){
		scanf("%d",&num);
		sum+=num;
		product*=num;
	}
	printf("Sum of the numbers = %d \n Produnt of the numbers = %.2lf",sum,product);
}
*/

/*
// 12. Örnek
void main(){
	int low,high,step;
	printf("Firstly enter LOW number then HIGH number lastly STEP :\n");
	scanf("%d,",&low);
	scanf("%d,",&high);
	scanf("%d,",&step);
	printf("All numbers between these two numbers :\n");
	for (low;low<high;low+=step){
		printf("%d \n",low);
	}
}
*/

/*
// 13. Örnek
void main(){
	int x;
	for (x=1;x<=10;x++){
		printf("6 * %d = %d \n",x,x*6);
	}
}
*/

/*
// 14. Örnek
void main(){
	int num,temp;
	double factor=1;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	for (num;0<num;num--){
		factor*=num;
	}
	printf("Factorial of %d number is %.2lf .",temp,factor);
}
*/

/*
// 15. Örnek
void main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	for (num;1<num;num--){
		printf("%d \n",num);
	}
}
*/

/*
// 16. Örnek
void main(){
	int num;
	printf("All even number between 1000 and 2000 :\n");
	for (num=1001;num<2000;num++){
		if (num%2==0){
			printf("%d\n",num);
		}
	}
}
*/


// 17. Örnek
void main(){
	int num,x;
	printf("Enter number : ");
	scanf("%d",&num);
	float sum;
	sum=(1/num);
	for (x=2;x<num;x+=2){                   //---------------------------------------------//
		sum=sum+(1/x);                     // Kod doğru olmasına rağmen sonucu 0 veriyor. //
	}                                     //---------------------------------------------//
	printf("Answer of the question = %f",sum);
}


/*
// 18. Örnek
  //-----------------------------------------// 
 //Hoca sadece Algoritma yazmamızı istemişti//
//-----------------------------------------//
*/

/*
// 19. Örnek
void main(){
	int num,x;
	printf("Enter number : ");
	scanf("%d",&num);
	for (x=1;x<=10;x++){
		printf("%d * %d = %d \n",num,x,x*num);
	}
}
*/

/*
// 20. Örnek
void main(){
	int num,temp;
	int s=0;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	while (0<num){
		num=num/10;
		s++;
	}
	printf("%d number have %d digit.",temp,s);
}
*/

/*
// 21. Örnek
void main(){
	int num,last,first,temp;
	printf("Enter number : ");
	scanf("%d",&num);
	last=num%10;
	temp=num;
	while(0<num){
		first=num%10;
		num=num/10;
	}
	printf("First and Last digit of %d number are %d and %d",temp,first,last);
}
*/

/*
// 22. Örnek
void main(){
	int num,last,first,temp,temp2,s;
	printf("Enter number : ");
	scanf("%d",&num);
	last=num%10;
	temp=num;
	temp2=num;
	while (0<num){
		first=num%10;
		num=num/10;
	}
	while (0<temp){
		temp=temp/10;
		s++;
	}
	printf("First and Last digit of %d number are %d and %d \n",temp2,first,last);
	s--;
	temp2=((temp2-last)+first);
	temp2=temp2-(first*(pow(10,s)))+(last*(pow(10,s)));
	printf("Answer of the question = %d",temp2);
}
*/

/*
// 23. Örnek
void main(){
	int num,rem,temp;
	int sum=0;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	while (0<num){
		rem=num%10;
		num=num/10;
		sum=sum*10+rem;
	}
	if (temp==sum){
		printf("%d is palindrome number.",temp);
	}else{
		printf("%d is not palindrome number.",temp);
	}
}*/

/*
// 24. Örnek
void main(){
	int s0=0;
	int s4=0;
	int s3=0;
	int s2=0;
	int s1=0;
	int s5=0;
	int s6,s7,s8,s9=0;
	int num,temp,rem;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	while(0<num){
		rem=num%10;
		num=num/10;
		if (rem==0){
			s0++;
		}else if (rem==1){
			s1++;
		}else if (rem==2){
			s2++;
		}else if (rem==3){
			s3++;
		}else if (rem==4){
			s4++;
		}else if (rem==5){
			s5++;
		}else if (rem==6){
			s6++;
		}else if (rem==7){
			s7++;
		}else if (rem==8){
			s8++;
		}else if (rem==9){
			s9++;
		}
	}
	printf("In %d number :\n",temp);
	printf("0 is found %d times \n",s0);
	printf("1 is found %d times \n",s1);
	printf("2 is found %d times \n",s2);
	printf("3 is found %d times \n",s3);
	printf("4 is found %d times \n",s4);
	printf("5 is found %d times \n",s5);
	printf("6 is found %d times \n",s6);
	printf("7 is found %d times \n",s7);
	printf("8 is found %d times \n",s8);
	printf("9 is found %d times \n",s9);
}
*/

/*
// 25. Örnek
void main(){
	int num1,num2,HCF,div;
	printf("Enter firstly small number : ");
	scanf("%d",&num1);
	printf("\nEnter secondly big number : ");
	scanf("%d",&num2);
	for (div=1;div<=num1;div++){
		if (num1%div==0){
			if (num2%div==0){
				HCF=div;
			}
		}
	}
	printf("HCF of %d and %d = %d",num1,num2,HCF);
}*/
