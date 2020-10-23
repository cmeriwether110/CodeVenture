#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void WelcomeMessage () 
{
    std::cout << "\nWelcome young traveler! We have been waiting for you...\n";
    std::cout << "The princess is in need of urgent help! Our magesty was captured\n";
    std::cout <<"by an unknown being. We need your help more than ever!\n";
    std::cout << "Please young traveler, save the princess and our kingdom!" << std::endl;
    std::cout << "There will be 2 options presented in front of you." << std::endl;
    std::cout << "Simply type your answer by saying 'option 1' or 'option 2'" << std::endl;
    std::cout << "There will be a short description of the option so think carefully and choose the best answer." << std::endl;
    std::cout << "So... without further ado, let us begin your journey!" << std::endl << std::endl;
}


int main()
{

    WelcomeMessage();
    
    std::string Options1;
    std::string Options2;
    std::string Options3;

    

    std::cout << "\nChoose your options wisely young traveler; for they may come back to haunt you..." << std::endl;
    std::cout << "Option 1: Go to a high vantage point to look for the princess's location " << std::endl;
    std::cout << "OR " << std::endl;
    std::cout << "Option 2: Start your trek where a mysterious path leads " << std::endl; 

    std::cout << "Your option: " << std::endl;
    std::getline (std::cin,Options1);

    if(Options1 == "option 1") 
    {
        std::cout << "\nYou decide to go to a high vantage point but see nothing but trees as far as the eye can see..." << std::endl;
         std::cout << "\nNow onto your second set of options..." << std::endl;
        std::cout << "Option 1: Start walking north and see where it takes you" << std::endl;
        std::cout << "OR" << std::endl;
        std::cout << "Option 2: You see a hitchhiker walking and go to ask him where the princess is" << std::endl;

    }

     else if(Options1 == "option 2")
     {
        std::cout << "\nYou decide to go on the mysterious path and find a small cabin with smoke coming out the chimney..." << std::endl;
         std::cout << "\nNow onto your second set of options..." << std::endl;
         std::cout << "Option 1: You go into the cabin, and find a old witch who gives you strange directions to a cave that suppposedly hides the princess" << std::endl;
         std::cout << "OR" << std::endl;
         std::cout<< "Option 2: You decide to not enter in the cabin, and instead go to a stream nearby which could lead you somewhere" << std::endl;
    }   
    
    std::cout << "Your option: " << std::endl;
    std::getline (std::cin, Options2);
    
    if(Options2 == "option 1")
    {
        std::cout << "\nYou decide to take the old witch's directions to heart, and start the trek to the cave that might just have the princess inside" << std::endl;
        std::cout << "\nNow onto your 3rd set of options..." << std::endl;
        std::cout << "Option 1: "
        

    }
    else if(Options2 == "option 2")
    {
        std::cout << "\nYou go to the stream, and while walking the direction the stream is coming from, you get attacked by a bear and get severly injured" << std::endl;
    }





    

    
    return 0;
}

