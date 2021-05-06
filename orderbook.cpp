#include <iostream>
#include <algorithm>

#include "orderbook.h"

void OrderBook::print_ascending()
{
    std::sort(bids_.begin(), bids_.end());
    std::sort(asks_.begin(), asks_.end());
    for (const auto& it: bids_)
        std::cout << it.price << "  " << it.limits_count << std::endl;
    for (const auto& it: asks_)
        std::cout << it.price << "  " << it.limits_count << std::endl;
}

void OrderBook::print_descending()
{
    std::sort(bids_.begin(), bids_.end(), std::greater<Order>());
    std::sort(asks_.begin(), asks_.end(), std::greater<Order>());
    std::cout << "bids:" << std::endl;
    for (const auto& it: bids_)
        std::cout << "  -  " << it.price << "  " << it.limits_count << std::endl;
    std::cout << "asks:" << std::endl;
    for (const auto& it: asks_)
        std::cout << "  -  " << it.price << "  " << it.limits_count << std::endl;
}

void OrderBook::add_bid(limits_count count, price value)
{
    bids_.emplace_back{ };

}

void OrderBook::add_ask(limits_count count, price value)
{

}

void OrderBook::delete_oder(const order_id &id)
{

}

void OrderBook::modify_order(const order_id &id)
{

}
