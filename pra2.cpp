int main()
{
std::cout
<< "EXIT_SUCCESS: "s << EXIT_SUCCESS << "\n"s
<< "EXIT_FAILURE: "s   << EXIT_FAILURE << "\n"s; 



if( 2 < 1 )
{
std::cout << "sentence 1.\n" ; // 文1
    std::cout << "sentence 2.\n" ; // 文2
}


std::cout << std::boolalpha ;
std::cout << true << "\n"s << false << "\n"s ;
//true false
std::cout << std::noboolalpha ;
std::cout << true << "\n"s << false << "\n"s ;
}
