#include<iostream>
#include<string>
#include<vector>
class song{
  
  std::string Name_song;
  std::string year;
  std::string publisher;
  int Song_long;  
  public:
  std::string Get_song_name(){
    return Name_song;
  }
  std::string Get_publisher(){
    return publisher;
  }
  song(){
     this->Name_song = {};
     this->year ={} ;
     this->publisher={};
     this-> Song_long = {};
  }
  song(std::string name , std::string year , std::string publisher , int Song_long ){
    this->Name_song = name;
     this->year = year;
     this->publisher= publisher;
     this-> Song_long = Song_long;
  }
  ~song(){}
   void Set_song(std::string name,std::string year,std::string publisher,int Song_long){
     this->Name_song = name;
     this->year = year;
     this->publisher = publisher;
     this-> Song_long = Song_long;
   }
   void Pring_song_data(){
     std::cout<< "The song name is: "<<Name_song<<std::endl;
     std::cout<<"Year of song is: "<<year<<std::endl;
     std::cout<<"the publisher name is: "<<publisher<<std::endl;
     std::cout<<"Length of song is: "<<Song_long<<std::endl;
   }

};
class jazmen{
   std::string name_jazmen;
   std::string country;//can be empty 
   std::string data_born;
   std::string * songs;
  public:
  std::string Get_Name_jazmen(){
    return name_jazmen;
  }
  std::string Get_country(){
    return country;
  }
  std::string Get_data_born(){
    return data_born;
  }
  void Print_data_jazmen(){
    std::cout<< "Jazmen name is: "<<name_jazmen<<std::endl;
    std::cout<< "Country of Jazmen is: "<<country<<std::endl;
    std::cout<< "Data of born Jazmen is: "<<data_born<<std::endl;

  }
  jazmen(){
   this-> name_jazmen = {} ;
   this-> country = {};
   this-> data_born = {};
   this-> songs = nullptr;
  }
  jazmen(std::string name,std::string country,std::string Data){
   this-> name_jazmen = name ;
   this-> country = country;
   this-> data_born = Data;
  // song = new std::string[];
  }
  ~jazmen(){}
 };
 
class cloud{
  public:
  std::vector<jazmen> Jazmen ;
  std::vector<song> Song;
  public:
  void search_song(){
    std::string search_song;
    std::cout<<"enter song name which you are looking for"<<std::endl;
    std::cin>>search_song;
    bool count = false;
    int index = 0;
    for(int i = 0 ; i < Song.size(); ++i ){
      if( Song[i].Get_song_name() == search_song ){
            index = i ;
            count = true;
      }
    }
    if(count){
        Song[index].Pring_song_data();
    }
    else {
        std::cout<<"song was not found"<<std::endl;
      }
  }
  void search_jazmen(){
    std::string Search_jazmen;
    std::cout << "enter JAZMEN name which you are looking for" << std::endl;
    std::cin >> Search_jazmen;
     bool count = 0;
    int index = 0;
    for(int i = 0 ; i < Jazmen.size(); ++i ){
      if( Jazmen[i].Get_Name_jazmen() == Search_jazmen ){
            index = i ;
            count =true ;           
      }
    }
    if(count){
        Jazmen[index].Print_data_jazmen();
        std::cout<<"And his songs are ` "<<std::endl;
        for(int i = 0 ; i < Song.size(); ++i){
          if(Song[i].Get_publisher() == Jazmen[index].Get_Name_jazmen())
          std::cout<<Song[i].Get_song_name()<<"   ";
        }
    }
    else {
        std::cout<<"Jazmen was not found"<<std::endl;
    }
    
  }
  /*void print_song_names(){
    for(int i = 0 ; i < Song.size() ; ++i){
      std::cout<<Song[i].Get_publisher() << " ";
     // std::cout<<Mycloud.Song[0].Get_publisher();
    } 
  }*/
      /* void Set_Songs(std::string name,std::string yearl,std::string publisher,int Song_long){
         
          this->Name_song = name;
          this->year = yearl;
          this->publisher = publisher;
          this-> Song_long = Song_long;
          
       }*/
  };




 



int main(){

      song hello( "hello" , "1999" , "BOB" , 200 );
      song by_by("by_by", "1999" , "Bob" , 400);
      song good_by( "good_by" , "1987 " , "BOB" , 550 );
      song love_love( "love_love" , "1990 " , "BOB" , 350);
      song not_not( "not_not" , "1854" , "BOB" , 450);
      song la_la( "la_la" , "1955" , "JON" , 430);
      song be_be("be_be" , "1945" , "JON" , 360);
      song mycity("tu_tu" , "1964 " , "JON" , 551);
      song mi_mi("mi_mi" , "1965" , "ANI" , 451);
      song de_de("de_de " , "1994" , "ANI" , 380);
      cloud Mycloud;
      Mycloud.Song.push_back(hello);
      Mycloud.Song.push_back(by_by);
      Mycloud.Song.push_back(good_by);
      Mycloud.Song.push_back(love_love);
      Mycloud.Song.push_back(not_not);
      Mycloud.Song.push_back(la_la);
      Mycloud.Song.push_back(be_be);
      Mycloud.Song.push_back(mycity);
      Mycloud.Song.push_back(mi_mi);
      Mycloud.Song.push_back(de_de);
     jazmen BOB( "BOB" , "America" , "1956");
     jazmen JON( "JON" , "LONDON", "1960");
     jazmen ANI("ANI" , "EREVAN" , "1990");
     Mycloud.Jazmen.push_back(BOB);
     Mycloud.Jazmen.push_back(JON);
     Mycloud.Jazmen.push_back(ANI);
     //Mycloud.search_jazmen();
     Mycloud.search_jazmen();
      

      

}

 //jazmen STIV("STIV","Muler","Gymri",2022);
  //Jons_songs.Set_song("hello","1999","Jons",200);
 