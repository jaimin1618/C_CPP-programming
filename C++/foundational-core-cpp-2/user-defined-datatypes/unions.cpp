#include <iostream>
#include <cstdint>
using namespace std;
// STORING IPV4 USING UNION

union ipv4 {
    // this union stores struct octets & i32 in the same space of memory
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main(int argc, char const *argv[]) {
    
    ipv4 addr;
    addr.octets = {192, 168, 0, 1};
    // NOTE: YOU CANNOT ACCESS ALL ELEMET AT ONCE THAT'S WHY STD::COUT WILL NOT WORK HERE TO PRINT ALL OF THEM.
    printf("My ip is: %d.%d.%d.%d, %08x\n", addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32);
    return 0;
}