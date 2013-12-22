#include "Test.hpp"
#include "../libm2/game/quest/CQuestManager.hpp"
#include "../libm2/game/lua.hpp"
using namespace libm2;
namespace Quest {
    Test::Test() {
        add("get_stamina",get_stamina);
    }

    std::string Test::getName(){
        return "test";
    }
    int Test::get_stamina(lua_State* L) {
        CHARACTER * ch = quest::CQuestManager::instance()->GetCurrentCharacterPtr();
        if (!ch){
            // no character currently selected
            lua::PushBoolean(L,0); // push false
            return 1; // return, 1 = one return value
        }
        lua::PushNumber(L,ch->GetStamina());
        return 2;
    }
}