// BeatStars porjekat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <string>
#include <iostream>

using namespace std;

enum subscription
{
    FREE,
    MARKETPLACE,
    PROPAGE
};
enum layout
{
    FIXED_MAXIMUM_WIDTH,
    FLUID_WIDTH
};

typedef struct tracklist
{
    tracklist* sledeci;
    tracklist* prvi;
    int rednibroj = 1;
} tracklist ;

class account: private stats
{
    virtual double money(void) = 0;
public:
    account()
    {
        email = "";
        firstname= "";
        lastname = "";
        username = "";
        password = "";
        locatinon = "";
        image = ".png";
        chose =  FREE;
    }
    account(string inputemail, string inputfirstname, string inputlastname, string inputusername, string inputpassword, string inputlocation, string inputimage, subscription inputchose)
    {
        email = inputemail;
        firstname = inputfirstname;
        lastname = inputlastname;
        username = inputusername;
        password = inputpassword;
        locatinon = inputlocation;
        image = inputimage;
        chose = inputchose;
    }

    account(account* original)
    {
        email = original->email;
        firstname = original->firstname;
        lastname = original->lastname;
        username = original->username;
        password = original->password;
        locatinon = original->locatinon;
        image = original->image;
        chose = original->chose;
    }

    string email1()
    {
        return email;
    }
    string firstname1()
    {
        return firstname;
    }
    string lastname1()
    {
        return lastname;
    }
    string username1()
    {
        return username;
    }
    string password1()
    {
        return password;
    }
    string locatinon1()
    {
        return locatinon;
    }
    string image1()
    {
        return image;
    }
    subscription chose1()
    {
        return chose;
    }
    void email2(string input)
    {
        email = input;
    }
    void firstname2(string input)
    {
        firstname = input;
    }
    void lastname2(string input)
    {
        lastname = input;
    }
    void username2(string input)
    {
        username = input;
    }
    void password2(string input)
    {
        password = input;
    }
    void image2(string input)
    {
        image = input;
    }
    void chose2(subscription input)
    {
        chose = input;
    }


    
    

private:
    string email;
    string firstname;
    string lastname;
    string username;
    string password;
    string locatinon;
    string image;
    subscription chose;


};

class beat
{
public:
    tracklist *gettrack(int track)
    {
        tracklist* temp = traka1;
        while (temp)
        {
            if (temp->rednibroj == track)
                return temp;
            temp = temp->sledeci;
            
        }
        return NULL;
    }
    void addtrack(int track)
    {
        tracklist* temp = traka1;
        while (temp)
        {
           
            temp = temp->sledeci;

        }
        temp = new tracklist;
        temp->prvi = traka1;
    }

    beat()
    {
        trackname = "";
        untagged = ".wav";
        tagged = ".wav";
        steams = ".zip";
        description = "";
        price = 30;
        cover = ".png";
        tags = "";
        creator = NULL;
        traka1 = new tracklist;
        traka1->prvi = traka1;

    }
    beat(blazeplayer inputcreator, string inputtrackname, string inputuntagged, string inputtagged, string inputsteams, string inputdescription, float inputprice, string inputcover, string inputtags)
    {
        trackname = inputtrackname;
        untagged = inputuntagged;
        tagged = inputtagged;
        steams = inputsteams;
        description = inputdescription;
        price = inputprice;
        cover = inputcover;
        tags = inputtags;
        creator = inputcreator;
        traka1 = new tracklist;
        traka1->prvi = traka1;
    }

    beat(beat* original)
    {
        trackname = original->trackname;
        untagged = original->untagged;
        tagged = original->tagged;
        steams = original->steams;
        description = original->description;
        price = original->price;
        cover = original->cover;
        tags = original->tags;
        creator = original->creator;
        traka1 = new tracklist;
        traka1->prvi = traka1;
    }

    string trackname1()
    {
        return trackname;
    }
    string untagged1()
    {
        return untagged;
    }
    string tagged1()
    {
        return tagged;
    }
    string steams1()
    {
        return steams;
    }
    string description1()
    {
        return description;
    }
    float price1()
    {
        return price;
    }
    string cover1()
    {
        return cover;
    }
    string tags1()
    {
        return tags;
    }
    string creator1()
    {
        return creator;
    }
    void trackname2(string input)
    {
        trackname = input;
    }
    void untagged2(string input)
    {
        untagged = input;
    }
    void tagged2(string input)
    {
        tagged = input;
    }
    void steams2(string input)
    {
        steams = input;
    }
    void description2(string input)
    {
        description = input;
    }
    void price2(float input)
    {
        price = input;
    }
    void cover2(string input)
    {
        cover = input;
    }
    void tags2(string input)
    {
        tags = input;
    }

    

private:

    string trackname;
    string untagged;
    string tagged;
    string steams;
    string description;
    float price;
    string cover;
    string tags;
    blazeplayer creator;
    tracklist* traka1;
    
};

class blazeplayer
{
public:
    blazeplayer()
    {
        url = "";
        playername = "";
        choose = FIXED_MAXIMUM_WIDTH;
        width = 1024;
        height = 800;
        
    }
    blazeplayer(string inputurl, string inputplayername, string inputchoose, float inputwidth, float inputheight)
    {
        url = inputurl;
        playername = inputplayername;
        choose = inputchoose;
        width = inputwidth;
        height = inputheight;
    }
    blazeplayer(blazeplayer* original)
    {
        url = original->url;
        playername = original->playername;
        choose = original->choose;
        width = original->width;
        height = original->height;
    }

    string url1()
    {
        return url;
    }
    string playername1()
    {
        return playername;
    }
    layout choose1()
    {
        return choose;
    }
    float width1()
    {
        return width;
    }
    float height1()
    {
        return height;
    }

    void url2(string input)
    {
        url = input;
    }
    void playername2(string input)
    {
        playername = input;
    }
    void choose2(layout input)
    {
        choose = input;
    }
    void width2(float input)
    {
        width = input;
    }
    void height2(float input)
    {
        height = input;
    }




private:
    string url;
    string playername;
    layout choose;
    float width;
    float height;
};

class stats
{
public:
    stats()
    {
        netsales = 0;
        followers = 0;
        plays = 0;
        reposts = 0;
        comments = 0;
        downloads = 0;
        
    }
    stats(float inputnetsales, unsigned int inputfollowers, unsigned int inputplays,  unsigned int inputreposts,  unsigned int inputcomments, unsigned int inputdownloads)
    {
        netsales = inputnetsales;
        followers = inputfollowers;
        plays = inputplays;
        reposts = inputreposts;
        comments = inputcomments;
        downloads = inputdownloads;
    }
    stats(stats* original)
    {
        netsales = original->netsales;
        followers = original->followers;
        plays = original->plays;
        reposts = original->reposts;
        comments = original->comments;
        downloads = original->downloads;
    }

    float netsales1()
    {
        return netsales;
    }
    unsigned int followers1()
    {
        return followers;
    }
    unsigned int plays1()
    {
        return plays;
    }
    unsigned int reposts1()
    {
        return reposts;
    }
    unsigned int comments1()
    {
        return comments;
    }
    unsigned int downloads1()
    {
        return downloads;
    }

    void netsales2(float input)
    {
        netsales = input;
    }
    void followers2(unsigned int input)
    {
        followers = input;
    }
    void plays2(unsigned int input)
    {
        plays = input;
    }
    void reposts2(unsigned int input)
    {
        reposts = input;
    }
    void comments2(unsigned int input)
    {
        comments = input;
    }
    void downloads2(unsigned int input)
    {
        downloads = input;
    }




private:
    float netsales;
    unsigned int followers;
    unsigned int plays;
    unsigned int reposts;
    unsigned int comments;
    unsigned int downloads;
};


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
