#include <mysqlx/xdevapi.h>
#include <iostream>

// Scope controls life-time of objects such as session or schema
using namespace ::mysqlx;

int main(){
  Session sess("127.0.0.1", 3306, "root", "benedict");
  Schema db= sess.getSchema("tonero");
  // or Schema db(sess, "test");

  Collection myColl = db.getCollection("appuserroles");
  // or Collection myColl(db, "my_collection");

  DocResult myDocs = myColl.find("Name like :param").limit(1).bind("param","L%").execute();

  std::cout << myDocs.fetchOne();

  return 0;
}