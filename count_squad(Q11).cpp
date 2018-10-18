#include <iostream>

//using namespace std;

int count_squad(int N, int K)
{
	int count = 0;
	if(N<K && N!=0){
		count = 0;
	}
	else if(N==0){
		count = 1;
	}
	else{
	    count = count_squad(N-K,K) + count_squad(N,K+1);
	}
	return count;
}
int main()
{
    char ch='y';
    int N;
    int K;
    int num=0;

    do{
        std::cout<<"\nEnter total no of people: ";
        std::cin >>N;
        std::cout<<"\nEnter minimum no of people required in each group: ";
        std::cin >>K;
        num=count_squad(N,K);
        std::cout<<"\n The numner of ways in which we can form the groups is: ";
        std::cout<<num;
        std::cout<<"\nDo you want to continue: ";
        std::cin >>ch;
    }
    while(ch=='y'||ch=='Y');
    return 0;
}


