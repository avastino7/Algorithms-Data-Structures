#include "markov_alg.h"
using namespace std;

Markov::Markov(): text_(), rules_(nullptr) {}

Markov::Markov(std::string new_text, Rule* new_rules): text_(new_text), rules_(new_rules) {}
Markov::Markov(const Markov& M): text_(M.text_), rules_(M.rules_) {}
Markov::~Markov() {}

void Markov::set_text(std::string& new_text) {
	text_ = new_text;
}

std::string Markov::get_text() const {
	return text_;
}

void Markov::ApplyRule(int rule_index) {
	string word;
	int counter = 0;

	while (counter < text_.size()) {
		word = CreateWord(counter, rule_index);

		if (rules_[rule_index].from_ == word) {
			int change_position = counter;
			int rule_lenght = rules_[rule_index].from_.size();
			string rule_text = rules_[rule_index].to_;

			string changed_text = text_.replace(change_position, rule_lenght, rule_text);
			text_ = changed_text;

			counter = 0;
		}
		else {
			counter += 1;
		}
	}
}

void Markov::ApplyRules(int number_of_rules) {
	for (int i = 0; i < number_of_rules; ++i) {
		this->ApplyRule(i);
	}
}

std::string Markov::CreateWord(int counter, int rule_index) {
	string word = "";
	int word_stize = rules_[rule_index].from_.size();

	int i = counter;
	while (text_[i] && i < word_stize + counter) {
		word += string(1, text_[i]);
		++i;
	}

	return word;
}
