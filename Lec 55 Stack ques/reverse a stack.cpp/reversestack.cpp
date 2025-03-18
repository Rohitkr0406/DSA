void insertatbottom(stack<int>&s,int x){
    // base case
   if(s.empty()){
       s.push(x);
       return;
   }
   int num = s.top();
   s.pop();

   //recursion

   insertatbottom(s,x);
   s.push(num);

}

void reverseStack(stack<int> &s) {
   if(s.empty()){
       return;
   }    

   int num = s.top();
   s.pop();
   reverseStack(s);

   insertatbottom(s,num);
}