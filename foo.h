#pragma once
#include <cstdio>
#include <concepts>

class foo {
public:
    foo() = default;
    void method() const {
        printf("method of foo called\n");
    }
};

// Dependency injection during compile time
void function(const std::convertible_to<foo> auto& myFoo) {
    myFoo.method();
}