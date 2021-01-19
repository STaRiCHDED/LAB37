// Copyright 2020 Nikita Klimov nik179804@gmail.com

#ifndef INCLUDE_JSON_STORAGE_H_
#define INCLUDE_JSON_STORAGE_H_

#include <nlohmann/json.hpp>
#include <string>
using json = nlohmann::json;

class Json_storage {
 public:
  explicit Json_storage(const std::string& filename);
  json get_storage() const;
  void Load();

 private:
  std::string filename_;
  json storage_;
};

#endif  // INCLUDE_JSON_STORAGE_H_
