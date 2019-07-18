#include "../header/lib.h"

void Lib::add_one(bool b, std::string n, int i) {
    thing *it = new thing;
    clock_gettime(CLOCK_REALTIME, it->when_it_is);
    it->is_it_is_or_is_it_isnt = b;
    it->what_it_is = n;
    it->how_it_is = i;

    thems.push_back(it);
}

bool Lib::take_it_out(time_t id) {
    std::vector<thing*>::iterator it = thems.begin();
    while (it != thems.end()) {
        if ((*it)->when_it_is->tv_sec == id) {
            thems.erase(it);
            return true;
        }
        ++it;
    }
    return false;
}
