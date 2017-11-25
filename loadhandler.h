#ifndef LOADHANDLER_H
#define LOADHANDLER_H

class Loadhandler {
public:
    Loadhandler();
    ~Loadhandler();
    
    float getLoad();
    int getNumServers();
    int getMaxServers();
    int getNumClients();
    int getMaxClients();
    
    void connectClient();
    
    
    
    Loadhandler operator+=(const Client& rhs);
    Loadhandler operator-=(const Client& rhs);
private:
    float sysload_;
    int numServers_;
    int maxServers_;
    int numClients_;
    int maxClients_;
    std::map<std::string, int> confMap_;
    std::vector<Server> serverDetails_;
    std::vector<Client> clientDetails_;
    std::priority_queue<float, std::vector<float>, std::greater<float> > loadQueue_;
    
    void newServer();
    void loadConf();
};

#endif LOADHANDLER_H
