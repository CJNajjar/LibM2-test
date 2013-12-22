#ifndef __QUEST_TEST_HPP
#define __QUEST_TEST_HPP
#include "../libm2/IQuest.hpp"
namespace Quest{
    class Test: public IQuest{
        Test();
        virtual std::string getName();
        static int get_stamina(lua_State* L);
    };
}
#endif // __QUEST_TEST_HPP