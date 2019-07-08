#ifndef LIB_H_
#define LIB_H_

#include <ctime>
#include <string>
#include <vector>

typedef struct thing {
    timespec    *when_it_is;
    bool        is_it_is_or_is_it_isnt;
    std::string what_it_is;
    int         how_it_is;
}

class Lib {
    std::vector<thing*>  thems;
public:
    Lib();
    ~Lib();
    void    add_one(bool b, std::string n, int i);
    bool    take_it_out(time_t id);
    std::vector<thing>  get_em() { return thems; }
}

#endif /* LIB_H_ */
