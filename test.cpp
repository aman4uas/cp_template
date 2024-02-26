#include <bits/stdc++.h>
#include <random>
#include <chrono>
using namespace std;

#define MOD 1000000007
typedef long long ll;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void _print(long long int t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(long double t) {cout << t;}
void _print(double t) {cout << t;}
void _print(unsigned long long t) {cout << t;}
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.first); cout << ","; _print(p.second); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}


// Template function to compare two vectors of any type
template<typename X>
bool testSolution(const vector<X>& authorOutput, const vector<X>& solutionOutput) { if (authorOutput.size() != solutionOutput.size()) { return false; } for (size_t i = 0; i < authorOutput.size(); ++i) { if (authorOutput[i] != solutionOutput[i]) { return false; } } return true;}

// Template function to compare two values of any type
template<typename Z>
bool testSolution(const Z& authorOutput, const Z& solutionOutput) { return authorOutput == solutionOutput;}


// Random integer in the range [a, b]
int random_int(int a, int b) { uniform_int_distribution<int> distribution(a, b); return distribution(rng);}

// Random floating point number in the range [a, b]
double random_double(double a, double b) {uniform_real_distribution<double> distribution(a, b); return distribution(rng);}

// Random vector of integers of given size and range [min_val, max_val]
vector<int> random_int_vector(int size, int min_val, int max_val) {if(size<=0) return {}; vector<int> result(size); for(int i = 0; i < size; ++i) {result[i] = random_int(min_val, max_val);} return result;}

// Random vector of double of given size and range [min_val, max_val]
vector<double> random_double_vector(int size, double min_val, double max_val) {if(size<=0) return {}; vector<double> result(size); for(int i=0; i<size; ++i) {result[i]=random_double(min_val, max_val);} return result;}

// Random binary string of size 'length'
string generate_random_binary_string(int length) {if(length<=0) return "";string binary_string; for (int i=0; i<length; ++i) {int bit=uniform_int_distribution<int>(0, 1)(rng);binary_string+=to_string(bit);} return binary_string;}

// Random string of size 'length' containing characters from the given array
string generate_random_string(int length, const string& characters) { if(length<=0) return ""; string random_string; int characters_length = characters.length(); for (int i = 0; i < length; ++i) { int random_index = uniform_int_distribution<int>(0, characters_length - 1)(rng); random_string += characters[random_index]; } return random_string;}

// Random string of size containing characters from the given array
string generate_random_string(int min_length, int max_length, const string& characters) { if(max_length<min_length || min_length<0) return ""; uniform_int_distribution<int> length_distribution(min_length, max_length); int length = length_distribution(rng); string random_string; int characters_length = characters.length(); for (int i = 0; i < length; ++i) { int random_index = uniform_int_distribution<int>(0, characters_length - 1)(rng); random_string += characters[random_index]; } return random_string;}

// Random string of size 'length'with characters in ASCII range [min_char, max_char]
string generate_random_string(int length, char min_char, char max_char) { if(length<=0) return ""; uniform_int_distribution<int> char_distribution(min_char, max_char); string random_string; for (int i = 0; i < length; ++i) { char random_char = static_cast<char>(char_distribution(rng)); random_string += random_char; } return random_string;}

// Random string of size between [min_length, max_length] with characters in ASCII range [min_char, max_char]
string generate_random_string(int min_length, int max_length, char min_char, char max_char) { if(max_length<min_length || min_length<0) return ""; int length = random_int(min_length, max_length); return generate_random_string(length, min_char, max_char);}

// Random string of size between [min_length, max_length] with upperCase, lowerCase or numbers
string generate_random_string(int min_length, int max_length, bool number, bool upperCase_alphabets, bool lowerCase_alphabets) { string s= ""; if(number){ for(int ch='0'; ch<='9'; ch++) s+=ch; } if(upperCase_alphabets){ for(char ch='A'; ch<='Z'; ch++) s+=ch; } if(lowerCase_alphabets){ for(char ch='a'; ch<='z'; ch++) s+=ch; } return generate_random_string(min_length, max_length, s);}

// Random string of size length with upperCase, lowerCase or numbers
string generate_random_string(int length, bool number, bool upperCase_alphabets, bool lowerCase_alphabets){return generate_random_string(length, length, number, upperCase_alphabets, lowerCase_alphabets);}


bool authorSolution(){}

bool otherSolution(){}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Step 1: Define the number of test cases
    int numberOfTestCases = 10;

    bool allTestCasesPassed = true;
    for(int i=1; i<=numberOfTestCases; i++)
    {
      // Step 2: Write the logic to generate the test case
      auto input = random_int(1, 20);

      // Step 3: Write the author's code in the authorSolution function and modify input parameters as required by TestCase
      auto authorOutput = authorSolution();

      // Step 4: Write your code in the otherSolution function and modify the function as required
      auto solutionOutput = otherSolution();

      if (testSolution(authorOutput, solutionOutput)==false)
      {
        cout << "Test Case " << i << ": Failed" << endl;
        _print(input);
        cout << endl;
        cout << "Author Output: ";
        _print(authorOutput);
        cout << endl;
        cout << "Solution Output: ";
        _print(solutionOutput);
        allTestCasesPassed = false;
        break;
      }
    }
    
    if(allTestCasesPassed) cout<<"Test Cases "<<numberOfTestCases<<"/"<<numberOfTestCases  <<" passed!";
    return 0;
}
