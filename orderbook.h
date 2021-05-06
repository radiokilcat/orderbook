#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <vector>

using order_id = unsigned int;
using limits_count = unsigned int;
using price = float;

struct Order
{
    unsigned int order_id;
    unsigned int limits_count;
    double price;

    friend bool operator<(const Order& lhs, const Order& rhs)
    {
        return lhs.price < rhs.price;
    }

    friend bool operator>(const Order& lhs, const Order& rhs)
    {
        return lhs.price > rhs.price;
    }
};

class OrderBook
{
public:
    OrderBook() = default;
    ~OrderBook() = default;

    void print_ascending();
    void print_descending();

    void add_bid(limits_count count, price value);
    void add_ask(limits_count count, price value);

    void delete_oder(const order_id& id);
    void modify_order(const order_id& id);

private:
    std::vector<Order> bids_;
    std::vector<Order> asks_;

};

#endif // ORDERBOOK_H
