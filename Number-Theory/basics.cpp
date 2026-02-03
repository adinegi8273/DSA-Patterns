//Number theory

// Basics of number theory

// Problem - Find gcd or hcf of two numbers a and Basics

// GCD is the largest numbers which divides both of those numbers


// Approach1 - Try every number starting from 1, but the time complexity is O(min(a,b)) -> TLE
// int gcd(int a, int b) {
//         // code here
        
//         int num =1;
//         int hcf = 1;
//         while(num <= min(a,b)){
//             if((a % num == 0) && (b % num == 0)){
//                 hcf = num;
//             }
//             num++;
//         }
        
//         return hcf;
//     }
// };


// Approach 2 - Used divison method 

// time complexity is O(1)

// int gcd(int a, int b) {
//         // code here
        
//         int hcf = 1;
//         int rem = b % a;
//         while(rem != 0){
            
//             //now the remainder will be the next divisor
//             b = a;//divisor will be dividend now
//             a = rem;
            
//             rem = b % a;
//         }
//         if(rem == 0){
//             hcf = a;
//         }
        
//         return hcf;
        
// }