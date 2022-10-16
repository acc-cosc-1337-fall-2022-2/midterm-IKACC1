#include <string>
//
bool test_config()
{
    return true;
}



//add function code here
bool is_palindrome (const std::string& string1)
{   
    bool result;
    int index=0;
    int counter = (string1.length())-1;
    std::string s_reverse(string1.length(),'i');
    while (counter >= 0)
    {
        s_reverse[index]=string1[counter];
        counter-=1;
        index++;
    }
if (s_reverse==string1)
    result=true;
else if (s_reverse!=string1)
    result=false;

return result;
}