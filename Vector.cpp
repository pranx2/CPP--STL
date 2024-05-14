#include<bits/stdc++.h>
using namespace std;

int main (){
      /**
       * !Displays the elements of a vector.
       *
       * @param vec The vector containing elements to be displayed.
       *
       * @returns None
       */
      vector <int> vec;
      /**
       * !Adds an element with the value 1 to the end of the vector.
       *
       * @param vec The vector to which the element will be added.
       *
       * @returns None
       */
      vec.push_back(1);
      vec.push_back(2);
      vec.push_back(3);
      for(int i = 0 ; i < vec.size(); i++){
          cout<<vec[i]<<" ";
      }
         cout<<endl;

      /**
       * !Removes the last element from the vector.
       *
       * This operation reduces the size of the vector by one.
       */
      vec.pop_back();
      for(int i = 0 ; i < vec.size(); i++){
          cout<<vec[i]<<" ";
      }
         cout<<endl;

      /**
       * !Resizes the vector to contain 5 elements.
       *
       * @param vec The vector to be resized.
       *
       * @returns None
       */
      vec.resize(5);
      for(int i = 0 ; i < vec.size(); i++){
          cout<<vec[i]<<" ";
      }
      cout<<endl;

      /**
       * !Outputs the first element of a vector followed by a newline character.
       *
       * @param vec The vector containing elements.
       *
       * @returns None
       */
      cout<<*(vec.begin())<<endl;
      



      /**
       * !Clears all elements from the vector.
       *
       * @returns None
       */
      vec.clear();
      cout<<vec.size()<<endl;

      /**
       * !Checks if a vector is empty.
       *
       * @param vec The vector to be checked for emptiness.
       *
       * @returns True if the vector is empty, false otherwise.
       */
      if( vec.empty()){
         cout<<"Empty"<<endl;
      }
      else  cout<<"NOT Empty"<<endl;
   return 0;
}