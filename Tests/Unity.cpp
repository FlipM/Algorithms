#include "../Functions/Util/Util.hpp"
#include "../Functions/Functions.hpp"
using namespace std;

bool SPTestsOk()
{
   vector<vector<float>> m;
   string filename =  "TestCases/ShortestPath_1";
   if(!TextToIncidence(filename, m))
   {
      cout << "Error processing " + filename + " matrix!";
      return false;
   }

   Dijkstra d;
   int size = m.size();
   if(d.CalcOneToOneCostIncidence(m, size,0, 2) != 6)
   {
      cout << "Error processing " + filename + " matrix!";
   }

}

int main() 
{


}
