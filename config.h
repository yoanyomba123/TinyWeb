/*
*Author:GeneralSandman
*Code:https://github.com/GeneralSandman/TinyWeb
*E-mail:generalsandman@163.com
*Web:www.generalsandman.cn
*/

/*---Configer Class---
*
****************************************
*
*/
#ifndef CONFIG_H
#define CONFIG_H

#include <map>
#include <string>

class Reader;

class Configer
{
  private:
    std::string m_nFile;
    Reader *m_pFileReader;
    std::map<std::string, std::string> m_nValue;

  public:
    Configer(const std::string &config_file);
    void init();
    void loadConfig();
    ~Configer();
};

#endif //