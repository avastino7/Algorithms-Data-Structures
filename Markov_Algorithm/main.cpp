#include "markov_alg.h"
using namespace std;

// This is a Markov algorithm in C++
// Done by Oleh Chyzhov

int main() {
	Rule rules[] = { Rule("ab", "c"), Rule("cd", "a"), Rule("aaa", "lo!"), Rule("ac", "Hel")};
	Markov algorutm("abdcacda", rules);
	algorutm.ApplyRules(4);

	cout << algorutm.get_text();

	return 0;
}