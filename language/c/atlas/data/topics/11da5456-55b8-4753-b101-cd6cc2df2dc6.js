window.jsData("11da5456-55b8-4753-b101-cd6cc2df2dc6", [{"start":{"type":"kTopicStart","text":"// kTopicStart tar=gcc","params":{"tar":"gcc"},"lineIndex":0},"content":"/**\n *\n * types.c\n *\n * print the range of values for certain data types\n */\n\n#include <stdio.h>\n#include <limits.h> /* integer specifications */\n#include <float.h> /* floating-point specifications */\n\nint main(void) {\n    // get the range of types\n    printf(\"[range of types]------------------------------\\n\");\n    printf(\"Integer range: \\t%d\\t%d\\n\", INT_MIN, INT_MAX);\n    printf(\"Long range: \\t%ld\\t%ld\\n\", LONG_MIN, LONG_MAX);\n    printf(\"Float range: \\t%e\\t%e\\n\", FLT_MIN, FLT_MAX);\n    printf(\"Double range: \\t%e\\t%e\\n\", DBL_MIN, DBL_MAX);\n    printf(\"Long double range: \\t%e\\t%e\\n\", LDBL_MIN, LDBL_MAX);\n    printf(\"Float-Double epsilon: \\t%e\\t%e\\n\", FLT_EPSILON, DBL_EPSILON);\n    printf(\"\\n\");\n\n    // print the size of types\n\n    printf(\"[sizeof]--------------------------------------\\n\");\n    printf(\"void\\tchar\\tshort\\tint\\tlong\\tfloat\\tdouble\\n\");\n    printf(\"%3d\\t%3d\\t%3d\\t%3d\\t%3d\\t%3d\\t%3d\\t\", \n            sizeof(void), sizeof(char), sizeof(short), sizeof(int),\n            sizeof(long), sizeof(float), sizeof(double));\n}","end":{"type":"kTopicEnd","text":"// kTopicEnd","params":{},"lineIndex":52},"description":"<h3 id=\"basic-data-types\">basic data types</h3>\n<table>\n<thead>\n<tr>\n<th>Data types</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>char</td>\n<td style=\"text-align:left\">usually 8-bits (1 byte)</td>\n</tr>\n<tr>\n<td>int</td>\n<td style=\"text-align:left\">usually natural word size (16, 32, 64bits)</td>\n</tr>\n<tr>\n<td>short int</td>\n<td style=\"text-align:left\">at least 16-bits</td>\n</tr>\n<tr>\n<td>long  int</td>\n<td style=\"text-align:left\">at least 32-bits</td>\n</tr>\n<tr>\n<td>float</td>\n<td style=\"text-align:left\">usually 32-bits</td>\n</tr>\n<tr>\n<td>double</td>\n<td style=\"text-align:left\">usually 64-bits</td>\n</tr>\n<tr>\n<td>long double</td>\n<td style=\"text-align:left\">usually at least 64-bits</td>\n</tr>\n</tbody>\n</table>\n<p><code>short int &lt;= int &lt;= long int</code></p>\n<p><code>float &lt;= double &lt;= long double</code></p>\n<h3 id=\"-sizeof-\"><code>sizeof</code></h3>\n<p> Get the size of type in number of characters</p>\n","format":"c","console":"[range of types]------------------------------\nInteger range: \t-2147483648\t2147483647\nLong range: \t-9223372036854775808\t9223372036854775807\nFloat range: \t1.175494e-38\t3.402823e+38\nDouble range: \t2.225074e-308\t1.797693e+308\nLong double range: \t2.225074e-308\t1.797693e+308\nFloat-Double epsilon: \t1.192093e-07\t2.220446e-16\n\n[sizeof]--------------------------------------\nvoid\tchar\tshort\tint\tlong\tfloat\tdouble\n  1\t  1\t  2\t  4\t  8\t  4\t  8\t"}]);