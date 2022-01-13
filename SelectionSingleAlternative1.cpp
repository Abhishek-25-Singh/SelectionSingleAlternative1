// SelectionSingleAlternative1.cpp : This file contains the 'main' function. program


//Guess the magic number

#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <cmath>
int main() 

	//{
	//constexpr int MAGIC_NUMBER{ 56 };
	//std::cout << "guess the magic integer : ";
	//int my_guess{};
	//std::cin >> my_guess;
	//if (my_guess == MAGIC_NUMBER) {
	//    std::cout << "Yeah ! you got it right !! " << std::endl;
	//}
	//std::cout << "Bye bye\n";
	//std::this_thread::sleep_for(std::chrono::seconds(4));
	//return 0;
	//}

	/*
	Whitout using bracess for selectionsinglealternative
	*/


	//int main()
	//
	//{
	//    constexpr int MAGIC_NUMBER{ 56 };
	//    std::cout << "guess the magic integer : ";
	//    int my_guess{};
	//    std::cin >> my_guess;
	//    if (my_guess == MAGIC_NUMBER) 
	//        std::cout << "Yeah ! you got it right !! " << std::endl;
	//    std::cout << "Bye bye\n";
	//    std::this_thread::sleep_for(std::chrono::seconds(4));
	//    return 0;
	//}

	/*
	*Accept total sales  of a salesman and calculate the commission to be paid
	* comission is 5% total sales
	* Commission is paid only if the total sales >= Rs 100000
	*/


	//{
	//	constexpr unsigned SALES_TARGET{ 1'00'000 };
	//constexpr double COMMISSION_RATE{ 0.05 };
	//double commission{};
	//unsigned total_sales{};
	//std::cout << " please enter total sales in Rs: ";
	//std::cin >> total_sales;
	//if (total_sales >= SALES_TARGET) {
	//	commission = total_sales * COMMISSION_RATE;
	//}
	//std::cout << "The Commission payable is Rs : "
	//<< std::setprecision(2) << std::fixed
	//<< commission << std::endl;
	//return 0;
	//}

	/*
	* Duality (more than one expression )
	*SelectionDulityALternative
	*/

	//{
	//    constexpr int magic_number{ 56 };
	//    std::cout << "guess the magic integer : ";
	//    int my_guess{};
	//    std::cin >> my_guess;
	//    if (my_guess == magic_number) {
	//        std::cout << "yeah ! you got it right !! " << std::endl;
	//        std::cout << "you are a Winner! " << std::endl;
	//    }
	//    std::cout << "bye bye\n";
	//    std::this_thread::sleep_for(std::chrono::seconds(4));
	//    return 0;
	//}


	/*
	* Accept total sales  of a salesmanand calculate the commission to be paid
	* comission is 5 % total sales  is paid if the total sales >= Rs 100000
	* Commission of 1% of the total sales is paid if the total sales  < Rs 100000
	*/


	//{
	//constexpr unsigned SALES_TARGET{ 1'00'000 };
	//constexpr double MAX_COMMISSION_RATE{ 0.05 };
	//constexpr double MIN_COMMISSION_RATE{ 0.01 };
	//
	//double commission{};
	//unsigned total_sales{};
	//std::cout << " please enter total sales in Rs: ";
	//std::cin >> total_sales;
	//if (total_sales >= SALES_TARGET) {
	//	commission = total_sales * MAX_COMMISSION_RATE;
	//}
	//else {
	//	commission = total_sales * MIN_COMMISSION_RATE;
	//
	//}
	//std::cout << "The Commission payable is Rs : "
	//<< std::setprecision(2) << std::fixed
	//<< commission << std::endl;
	//return 0;
	//}


	//Check math Knowledge

	//{
	//int i1n{ 5 };
	//int i2n{ 7 };
	// 
	//int useranswer{ };
	//std::cout << i1n << " * " << i2n << " = ? : ";
	//std::cin >> useranswer;
	//if (i1n * i2n == useranswer) {
	//	std::cout << " Hola! You are Smart! \n";
	//}
	//else {
	//	std::cout << " Go back to school ! \n";
	//}
	//
	//
	//}

	//{
	//int d1num{ };
	//std::cout << " Please enter a number : ";
	//std::cin >> d1num;
	//double dUseranswer{};
	//std::cout << " What's the square root of " << d1num << " ? ";
	//std::cin >> dUseranswer;
	//
	//if (sqrt(d1num) == dUseranswer) // C++ 17 
	//{
	//	std::cout << " Hola! You are Smart! \n";
	//}
	//else {
	//	std::cout << " Go back to school ! \n";
	//}
	//return 0;
	//}



{
	int d1num{ };
	std::cout << " Please enter a number : ";
	std::cin >> d1num;
	double dUseranswer{};
	std::cout << " What's the square root of " << d1num << " ? ";
	std::cin >> dUseranswer;

	if (double dResult = sqrt(d1num); dResult == dUseranswer) // C++ 17 
	{
		std::cout << " Hola! You are Smart! \n";
	}
	else {
		std::cout << " Go back to school ! \n";
	}
}
