   #include<iostream> 
   using namespace std;  
   int main(){ 
    
    
    
    //vectors(containers which are dynmaic in nature)
      vector<int> v;    //declarartion(creates empty container)
      v.push_back(1);       //dynamically allocates space
      v.emplace_back(2);    //faster than push back

      vector<pair<int,int>> vec;
      vec.push_back({1,2});
      vec.emplace_back(1,2);

      vector<int> v(5,100); // size=5 each value is 100

      vector<int> v(5);    //size=5 garbage value

      vector<int> v1(5,20);  //container of 5 instances of 20
      vector<int> v2(v1);  // copy of v1 into v2(another container)

      // can access like we do in array using indexes

      //iterators-it points to the memory address not the element
      vector<int>:: iterator it= v.begin(); 
      it++;  //shifts to the next memory)contigious memory location)
      cout<< *(it)<<" ";  //to access element we use asterix

      vector<int>:: iterator it1= v.end(); //points  to the memory location right after the last element
      /*vector<int>:: iterator it2= v.rend(); 
      vector<int>:: iterator it3= v.rbegin(); */

      cout<< v[0]<< " "<< v.at(0);
      cout<< v.back()<<" ";  //the last element

      for(vector<int>::iterator i=v.begin(); i!=v.end();i++)
      {
         cout<< *(it) << " ";
      }
      //auto-automatically assigned according to data
      for(auto i=v.begin(); i!= v.end(); i++)
      {
         cout<< *(it) << " ";  
      }

      for(auto it:v)  //auto-int iterates values
      {
        cout<< it << " ";   
      }


      // {10,20,12,23}
      v.erase(v.begin()+1);   // {10,12,23}
      v.erase(v.begin()+1,v.begin()+4); // {10,23}

      // insert function
      vector<int>v(2,100);    //{100,100}
      v.insert(v.begin(),300);  //{300,100,100}
      v.insert(v.begin()+1,2,10);  // {300,10,10,100,100}
    
      vector<int> copy(2,50);
      v.insert(v.begin(), copy.begin(), copy.end()); //{ 50,50,300,10,10,100,100}

      // {10,20}
      cout<<v.size();  //2
      // {10,20}
      v.pop_back();    //{10}

      //v1- {10,20}
      //v2- {30,40}
      v1.swap(v2);  //v1-{30,40}  v2-{10,20}

      v.clear(); //erase the entire vector

      cout<<v.empty(); //boolean value if the vector is empty or not

    }