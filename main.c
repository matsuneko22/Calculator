#include <stdio.h>

static int totalNum=0;

add(){}//←頑張って
sub(){}//←頑張って
mult(){}//←頑張って
divi(){}//←頑張って

int analysis(char[]);
void countNumber();

int main(){
	char formula[100];
	double ans;

	printf("数式を入力してください。\n");
	scanf("%s",&formula);

	int i;
	while(i<=100){
		switch(formula[i]){
			case '+':
				add();
				break;
			case '-':
				sub();
				break;
			case '*':
				mult();
				break;
			case '/':
				divi();
				break;
			case '(':

				break;
			case ')':

				break;
			case ' ':
				//空白を無視
				break;
		}
		i++;
	}
	ans = 0;
	printf("formula=%s,ans=%d\n",formula, ans);
	return 0;
}

int analysis(char a[]) /* 入力された式から数だけを抜き出す */
{
	for(int i=0;i<100;i++){
			case '+':
				continue;
			case '-':
				continue;
			case '*':
				continue;
			case '/':
				continue;
			case '(':
				continue;
			case ')':
				continu;;
			case ' ':
				//空白を無視
				continue;
			default:
				countNumber();//ここで引数として処理する数を数える。
				/*return a[i];*/
				continue;
	}
	
	void countNumber(){
	totalNum++;
	return;
	}
}