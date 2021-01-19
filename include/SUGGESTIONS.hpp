// Copyright 2020 Nikita Klimov nik179804@gmail.com

#ifndef INCLUDE_SUGGESTIONS_H_
#define INCLUDE_SUGGESTIONS_H_

#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;

class Suggestions_collection {
 public:
  Suggestions_collection();
  void Update(json storage);
  json Suggest(const std::string& input);

 private:
  json suggestions_;
};

#endif  // INCLUDE_SUGGESTIONS_H_
