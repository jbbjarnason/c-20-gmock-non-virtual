#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "foo.h"

class mock_foo : public foo {
public:
    MOCK_METHOD((void), method, (), (const));
};


TEST(HelloTest, BasicAssertions) {
    mock_foo bar;
    EXPECT_CALL(bar, method()).Times(1);
    function(bar);
}