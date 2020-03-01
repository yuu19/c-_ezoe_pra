

/*
int main() 
{
#無限ループするプログラム

loop :

 std::cout << "hello\n"s ;

goto loop ;

}
*/


/*入力された数値を合計し続けるプログラム
int input() 
{
    std::cout << ">"s ;
    int x {} ;
    std::cin >> x;
    return x;
}

int main() 
{
    int sum = 0;
loop : 
    sum = sum + input() ;
    std::cout << sum << "\n"s ;
    goto loop ;
}  */
/*指定された回数分"hello"を出力するプログラム
void hello_n(int n) ;

int main()
{

    int n {} ;
    std::cin >> n ;

    hello_n(n) ;
}

void hello_n(int n)
{

    if( n < 0) 

	return ;

    int i = 0 ;
loop :
    if (i != n)
    {
    std::cout << "hello\n"s ;
    i++ ;
    goto loop ;
    }

}  */

void hello_n( int n) ;

int main()
{

    int n {} ;
    std::cin >> n;
    hello_n(n) ;
}


void hello_n( int n )
{

    if( n < 0 )
	return;
    int i = 0;
    while( i != n)
    {
	std::cout << "hello\n"s ;
    
        ++i ;
    }


    int a = 1 ;
    while( a <= 9 ) 
    {

	int b = 1;
	while( b <= 9 )
        {
	
	    std::cout << a * b << "\t"s ;
            b++ ;
        }

        std:: cout << "\n"s ;
        a++;
    }

}










