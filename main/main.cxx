#include <iostream>
#include <sqlite3.h>

auto main() -> int
{
  sqlite3 *db;
  auto rc = sqlite3_open("sample.db", &db);

  std::cout << "hello, World! " << std::endl;
  std::cout << "hello, shippable" << std::endl;
  std::cout << "hello, sqlite3.h" << std::endl;
  std::cout << "hello, sqlite3" << std::endl;
}
