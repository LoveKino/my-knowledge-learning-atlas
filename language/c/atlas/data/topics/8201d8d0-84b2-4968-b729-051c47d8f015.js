window.jsData("8201d8d0-84b2-4968-b729-051c47d8f015", [{"start":{"type":"kTopicStart","text":"// kTopicStart","params":{},"lineIndex":0},"content":"#include <stdio.h>\n\n/**\n * constants and operations\n */\n# define NAME   \"ddchen\"\n# define AGE    27\n\nenum Boolean {FALSE, TRUE};\n\nenum {GREEN=2, YELLOW, WHITE, RED=4, BLUE};\n\nint main(int argc, char* argv[]) {\n    int x = 1234, y = 02322, z = 0x4D2;\n\n    printf(\"%d\\t%o\\t%x\\n\", x, x, x); // print format\n\n    printf(\"%d\\t%d\\t%d\\n\", x, y, z);\n\n    printf(\"name is %s and age is %d\\n\", NAME, AGE);\n\n    enum Boolean fal = FALSE;\n\n    printf(\"default enumeration lists values: %d\\t%d\\n\", fal, TRUE);\n    printf(\"color list enumeration: %d\\t%d\\t%d\\t%d\\t%d\\t\", GREEN, YELLOW, WHITE, RED, BLUE);\n}","end":{"type":"kTopicEnd","text":"// kTopicEnd","params":{},"lineIndex":61},"description":"<h3 id=\"constant-representations\">constant representations</h3>\n<ul>\n<li>constant example</li>\n</ul>\n<table>\n<thead>\n<tr>\n<th>example</th>\n<th style=\"text-align:left\">type</th>\n</tr>\n</thead>\n<tbody>\n<tr>\n<td>1234</td>\n<td style=\"text-align:left\">int</td>\n</tr>\n<tr>\n<td>1234L</td>\n<td style=\"text-align:left\">long int</td>\n</tr>\n<tr>\n<td>1234U</td>\n<td style=\"text-align:left\">unsigned int</td>\n</tr>\n<tr>\n<td>1234UL</td>\n<td style=\"text-align:left\">unsigned long</td>\n</tr>\n<tr>\n<td>01234</td>\n<td style=\"text-align:left\">octal</td>\n</tr>\n<tr>\n<td>0xA123</td>\n<td style=\"text-align:left\">hex</td>\n</tr>\n<tr>\n<td>1.3</td>\n<td style=\"text-align:left\">double</td>\n</tr>\n<tr>\n<td>1.3f</td>\n<td style=\"text-align:left\">float</td>\n</tr>\n<tr>\n<td>1.3L</td>\n<td style=\"text-align:left\">long double</td>\n</tr>\n<tr>\n<td>&#39;a&#39;</td>\n<td style=\"text-align:left\">character constant</td>\n</tr>\n<tr>\n<td>&quot;abcd&quot;</td>\n<td style=\"text-align:left\">string constant</td>\n</tr>\n</tbody>\n</table>\n<p>\\0 for NUL, \\n for newline, &#39;t for tag ......</p>\n<p><code>&quot;x&quot; is the concatenation of X and \\0</code></p>\n<ul>\n<li>constant expression</li>\n</ul>\n<p>Constant expression will be evaluated at compile-time, no runtime overhead.</p>\n<ul>\n<li>symbolic constants</li>\n</ul>\n<p><code>define</code></p>\n<p><code>enum</code></p>\n","format":"c","console":"1234\t2322\t4d2\n1234\t1234\t1234\nname is ddchen and age is 27\ndefault enumeration lists values: 0\t1\ncolor list enumeration: 2\t3\t4\t4\t5\t"}]);