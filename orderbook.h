#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <map>

using order_id = unsigned int;
using limits_count = unsigned int;
using price = float;

struct Order {
    enum type{
        ask,
        bid
    }
};

class OrderBook
{
public:
    OrderBook() = default;
    ~OrderBook() = default;

    void print_ascending();
    void print_descending();

    void delete_oder(const order_id& id);
    void modify_order(const order_id& id);

private:
    std::map<std::pair<limits_count, price>, order_id> orders_;
};

#endif // ORDERBOOK_H
