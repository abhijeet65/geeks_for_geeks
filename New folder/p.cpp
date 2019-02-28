int solution(vector<int> &S, vector<int> &E) 
{ 
   sort(S.begin(),S.end()); 
   sort(E.begin(),E.end()); 
   
   int n=S.size();
  
 
   int chair_needed = 1,result = 1; 
   int i = 1, j = 0; 
  
   while (i < n && j < n) 
   { 
      if (S[i] < E[j]) 
      { 
          chair_needed++; 
          i++; 
  
          if (chair_needed > result)  
              result = chair_needed; 
      } 
 
      else if(S[i] > E[j])
      { 
          chair_needed--; 
          j++; 
          
      } 
   } 
  
   return result; 
} 