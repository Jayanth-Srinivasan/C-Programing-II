int bitcount(unsigned char x) 
{ 
   int count;
   
   for ( count=0; x != 0; x>>=1);
   {
      if ( x & 01)
         count++;
   }

   return count;
}