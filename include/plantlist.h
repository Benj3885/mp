#ifndef PLANTLIST_H
#define PLANTLIST_H

string plname = plantname
int pldate = plantdate
class plantlist
{
    public:
        plantlist();
        virtual ~plantlist();
   int pldate;           // planted date
   string plname;      // name of the plant



    private:
        plants(int d = 0, string n)
      { pldate = d;
        plname = n;}


};


#endif // PLANTLIST_H
