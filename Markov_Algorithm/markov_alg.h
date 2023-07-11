#include <iostream>
#include <string>

struct Rule {
	std::string from_;
	std::string to_;

	Rule(std::string from, std::string to): from_(from), to_(to) {}
	Rule(const Rule& r): from_(r.from_), to_(r.to_) {}
};

class Markov {
public:
	Markov();
	Markov(std::string new_text, Rule* new_rules);
	Markov(const Markov& M);
	~Markov();

	void set_text(std::string& new_text);
	std::string get_text() const;

	void ApplyRule(int rule_index);
	void ApplyRules(int number_of_rules);

private:
	std::string text_;
	Rule* rules_;

	std::string CreateWord(int counter, int rule_index);
};