// Enum class for a small order-status workflow.
#include <iostream>
using namespace std;

enum class OrderStatus { Placed, Packed, Shipped, Delivered, Cancelled };

const char* statusName(OrderStatus status) {
    switch (status) {
        case OrderStatus::Placed: return "Placed";
        case OrderStatus::Packed: return "Packed";
        case OrderStatus::Shipped: return "Shipped";
        case OrderStatus::Delivered: return "Delivered";
        case OrderStatus::Cancelled: return "Cancelled";
    }
    return "Unknown";
}

int main() {
    OrderStatus order = OrderStatus::Shipped;
    cout << statusName(order) << '\n';
}
