#include "libm2/LibM2.hpp"
#include "Commands/test.hpp"
using namespace libm2;
/**
 * gets called when the plugin gets loaded
 * returning false will result in the plugin not being loaded
 * please log as to why it doesnt get loaded 
 * @return 
 */
extern "C" bool initialize(){
    LibM2::addCommand("test",new Commands::Test());
    return true;
}
/**
 * returns a unique name for your plugin
 * should only change if you do large backwards compatiblity breaking changes
 * @return 
 */
extern "C" const char* getName(){
    return "LibM2Test";
}
/**
 * returns a full name used for logging
 * you may include version and author here
 * @return 
 */
extern "C" const char* getFullName(){
    return "LibM2Test v0.1 by iMer";
}
/**
 * gets called when the plugin gets unloaded 
 * 
 * optional
 */
extern "C" void deinitialize(){
    
}