class Solution {
public:
   
   string addBinary(string a, string b) {
        string res;
        size_t res_len = max(a.length(), b.length()) ;



        size_t carry = 0;
      
      const size_t a_bit_i = i < a.length() ? a[a.length() - 1 - i] - '0' : 0;
            const size_t b_bit_i = i < b.length() ? b[b.length() - 1 - i] - '0' : 0;
      
      
      carry = sum / 2;
            sum %= 2;
            res.push_back('0' + sum);
       
       }
        if (carry) {
   
   res.push_back('0' + carry);
        }
        reverse(res.begin(), res.end());

 
 }
}

// Iterator solution.

class
c:

strin
size_t carry = 0;
        string res;




        for (auto a_it = a.rbegin(), b_it = b.rbegin(); a_it != a.rend() || b_it != b.rend();) {
            const size_t a_bit_i = (a_it != a.rend()) ? *a_it - '0' : 0;
    
    const size_t b_bit_i = (b_it != b.rend()) ? *b_it - '0' : 0;
            size_t sum = a_bit_i + b_bit_i + carry;
            carry = sum / 2;

res
.push_back('0' + sum);



   
   
   ++a_it;
            }
    
    i
    ++b_it;
            }
        }



  if (carry) {
            res.push_back('0' + carry);
        }
        reverse(res.begin(), res.end());

        return res;
    }
};
