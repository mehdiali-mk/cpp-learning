# >>==>> DAY - 11.

# Compound Assignment Operators.

<pre>
Operator	Example		    Meaning
+=		    lhs += rhs;	    lhs = lhs + (rhs);
-=          lhs -= rhs;     lhs = lhs - (rhs);
*=          lhs *= rhs;     lhs = lhs * (rhs);
/=          lhs /= rhs;     lhs = lhs / (rhs);
%=          lhs %= rhs;     lhs = lhs % (rhs);
>>=         lhs >>= rhs;    lhs = lhs >> (rhs);
<<=         lhs <<= rhs;    lhs = lhs << (rhs);
&=          lhs &= rhs;     lhs = lhs & (rhs);
^=          lhs ^= rhs;     lhs = lhs ^ (rhs);
|=          lhs |= rhs;     lhs = lhs | (rhs);
</pre>

# Operator Precedence (not a complete list).

# Higher to lower.

<pre>

            Operator                    ||              Associativity
                                        ||
[] -> . ()                              ||   Left to right.
++ -- not -(unary) *(de-ref) & sizeof   ||   Right to left.
* / %                                   ||   Left to right.
+ -                                     ||   Left to right.
<< >>                                   ||   Left to right.
< <= > >=                               ||   Left to right.
== !=                                   ||   Left to right.
&                                       ||   Left to right.
^                                       ||   Left to right.
|                                       ||   Left to right.
&&                                      ||   Left to right.
||                                      ||   Left to right.
= op= ?:                                ||   Right to left.

</pre>
