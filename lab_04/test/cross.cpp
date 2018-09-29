#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Cross") {
  REQUIRE(cross(3) == "* *\n * \n* *\n");
  REQUIRE(cross(8) == "*      *\n *    * \n  *  *  \n   **   \n   **   \n  *  *  \n *    * \n*      *\n");
  REQUIRE(cross(15) == "*             *\n *           * \n  *         *  \n   *       *   \n    *     *    \n     *   *     \n      * *      \n       *       \n      * *      \n     *   *     \n    *     *    \n   *       *   \n  *         *  \n *           * \n*             *\n");
}

