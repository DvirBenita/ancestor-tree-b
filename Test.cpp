#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;


TEST_CASE("relation father"){
   Tree T ("dvir0"); 
string father= ""; 
father = "dvir1"; 
 T.addFather("dvir0",father); 
CHECK(T.relation(father) == string("father")); 

father = "dvir2"; 
 T.addFather("dvir1",father); 
CHECK(T.relation(father) == string("grandfather")); 

father = "dvir3"; 
 T.addFather("dvir2",father); 
CHECK(T.relation(father) == string("great-grandfather")); 

father = "dvir4"; 
 T.addFather("dvir3",father); 
CHECK(T.relation(father) == string("great-great-grandfather")); 

father = "dvir5"; 
 T.addFather("dvir4",father); 
CHECK(T.relation(father) == string("great-great-great-grandfather")); 

father = "dvir6"; 
 T.addFather("dvir5",father); 
CHECK(T.relation(father) == string("great-great-great-great-grandfather")); 

father = "dvir7"; 
 T.addFather("dvir6",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-grandfather")); 

father = "dvir8"; 
 T.addFather("dvir7",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-grandfather")); 

father = "dvir9"; 
 T.addFather("dvir8",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-grandfather")); 

father = "dvir10"; 
 T.addFather("dvir9",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir11"; 
 T.addFather("dvir10",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir12"; 
 T.addFather("dvir11",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir13"; 
 T.addFather("dvir12",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir14"; 
 T.addFather("dvir13",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir15"; 
 T.addFather("dvir14",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir16"; 
 T.addFather("dvir15",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir17"; 
 T.addFather("dvir16",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir18"; 
 T.addFather("dvir17",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir19"; 
 T.addFather("dvir18",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir20"; 
 T.addFather("dvir19",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir21"; 
 T.addFather("dvir20",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir22"; 
 T.addFather("dvir21",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir23"; 
 T.addFather("dvir22",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir24"; 
 T.addFather("dvir23",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir25"; 
 T.addFather("dvir24",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir26"; 
 T.addFather("dvir25",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir27"; 
 T.addFather("dvir26",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir28"; 
 T.addFather("dvir27",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir29"; 
 T.addFather("dvir28",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir30"; 
 T.addFather("dvir29",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir31"; 
 T.addFather("dvir30",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir32"; 
 T.addFather("dvir31",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir33"; 
 T.addFather("dvir32",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 

father = "dvir34"; 
 T.addFather("dvir33",father); 
CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather")); 


}


TEST_CASE("Check relation mother"){
 Tree T ("dvir0"); 
string mother=""; 
mother = "dvir1"; 
 T.addMother("dvir0",mother); 
CHECK(T.relation(mother) == string("mother")); 

mother = "dvir2"; 
 T.addMother("dvir1",mother); 
CHECK(T.relation(mother) == string("grandmother")); 

mother = "dvir3"; 
 T.addMother("dvir2",mother); 
CHECK(T.relation(mother) == string("great-grandmother")); 

mother = "dvir4"; 
 T.addMother("dvir3",mother); 
CHECK(T.relation(mother) == string("great-great-grandmother")); 

mother = "dvir5"; 
 T.addMother("dvir4",mother); 
CHECK(T.relation(mother) == string("great-great-great-grandmother")); 

mother = "dvir6"; 
 T.addMother("dvir5",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-grandmother")); 

mother = "dvir7"; 
 T.addMother("dvir6",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-grandmother")); 

mother = "dvir8"; 
 T.addMother("dvir7",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-grandmother")); 

mother = "dvir9"; 
 T.addMother("dvir8",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-grandmother")); 

mother = "dvir10"; 
 T.addMother("dvir9",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir11"; 
 T.addMother("dvir10",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir12"; 
 T.addMother("dvir11",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir13"; 
 T.addMother("dvir12",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir14"; 
 T.addMother("dvir13",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir15"; 
 T.addMother("dvir14",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir16"; 
 T.addMother("dvir15",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir17"; 
 T.addMother("dvir16",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir18"; 
 T.addMother("dvir17",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir19"; 
 T.addMother("dvir18",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir20"; 
 T.addMother("dvir19",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir21"; 
 T.addMother("dvir20",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir22"; 
 T.addMother("dvir21",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir23"; 
 T.addMother("dvir22",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir24"; 
 T.addMother("dvir23",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir25"; 
 T.addMother("dvir24",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir26"; 
 T.addMother("dvir25",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir27"; 
 T.addMother("dvir26",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir28"; 
 T.addMother("dvir27",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir29"; 
 T.addMother("dvir28",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir30"; 
 T.addMother("dvir29",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir31"; 
 T.addMother("dvir30",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir32"; 
 T.addMother("dvir31",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir33"; 
 T.addMother("dvir32",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 

mother = "dvir34"; 
 T.addMother("dvir33",mother); 
CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandmother")); 


}


TEST_CASE("Check find father + mother"){
  Tree T ("dvir0"); 
string father=""; 
father = "dvir1"; 
 T.addFather("dvir0",father); 
CHECK(T.find("father") == string("dvir1")); 

father = "dvir2"; 
 T.addFather("dvir1",father); 
CHECK(T.find("grandfather") == string("dvir2")); 

father = "dvir3"; 
 T.addFather("dvir2",father); 
CHECK(T.find("great-grandfather") == string("dvir3")); 

father = "dvir4"; 
 T.addFather("dvir3",father); 
CHECK(T.find("great-great-grandfather") == string("dvir4")); 

father = "dvir5"; 
 T.addFather("dvir4",father); 
CHECK(T.find("great-great-great-grandfather") == string("dvir5")); 

father = "dvir6"; 
 T.addFather("dvir5",father); 
CHECK(T.find("great-great-great-great-grandfather") == string("dvir6")); 

father = "dvir7"; 
 T.addFather("dvir6",father); 
CHECK(T.find("great-great-great-great-great-grandfather") == string("dvir7")); 

father = "dvir8"; 
 T.addFather("dvir7",father); 
CHECK(T.find("great-great-great-great-great-great-grandfather") == string("dvir8")); 

father = "dvir9"; 
 T.addFather("dvir8",father); 
CHECK(T.find("great-great-great-great-great-great-great-grandfather") == string("dvir9")); 

father = "dvir10"; 
 T.addFather("dvir9",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-grandfather") == string("dvir10")); 

father = "dvir11"; 
 T.addFather("dvir10",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-grandfather") == string("dvir11")); 

father = "dvir12"; 
 T.addFather("dvir11",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir12")); 

father = "dvir13"; 
 T.addFather("dvir12",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir13")); 

father = "dvir14"; 
 T.addFather("dvir13",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir14")); 

father = "dvir15"; 
 T.addFather("dvir14",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir15")); 

father = "dvir16"; 
 T.addFather("dvir15",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir16")); 

father = "dvir17"; 
 T.addFather("dvir16",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir17")); 

father = "dvir18"; 
 T.addFather("dvir17",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir18")); 

father = "dvir19"; 
 T.addFather("dvir18",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir19")); 

father = "dvir20"; 
 T.addFather("dvir19",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir20")); 

father = "dvir21"; 
 T.addFather("dvir20",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir21")); 

father = "dvir22"; 
 T.addFather("dvir21",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir22")); 

father = "dvir23"; 
 T.addFather("dvir22",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir23")); 

father = "dvir24"; 
 T.addFather("dvir23",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir24")); 

father = "dvir25"; 
 T.addFather("dvir24",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir25")); 

father = "dvir26"; 
 T.addFather("dvir25",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir26")); 

father = "dvir27"; 
 T.addFather("dvir26",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir27")); 

father = "dvir28"; 
 T.addFather("dvir27",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir28")); 

father = "dvir29"; 
 T.addFather("dvir28",father); 
CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-grandfather") == string("dvir29")); 



}


TEST_CASE ("Test remove.") {
    Tree t("dvir");
    t.addFather("dvir", "dvir1")
            .addMother("dvir", "dvir2")
            .addFather("dvir1", "dvir3")
            .addMother("dvir1", "dvir4")
            .addFather("dvir2", "dvir5")
            .addMother("dvir2", "dvir6")
            .addFather("dvir3", "dvir7")
            .addMother("dvir3", "dvir8")
            .addFather("dvir4", "dvir9")
            .addMother("dvir4", "dvir10")
            .addFather("dvir5", "dvir11")
            .addMother("dvir5", "dvir12")
            .addFather("dvir6", "dvir13")
            .addMother("dvir6", "dvir14")
            .addFather("dvir7", "dvir15")
            .addFather("dvir15", "dvir16")
            .addFather("dvir16", "dvir17")
            .addFather("dvir17", "dvir18");
    t.remove("dvir18");
            CHECK(t.relation("dvir18") == "unrelated");
    t.remove("dvir4");
            CHECK(t.relation("dvir9") == "unrelated");
            CHECK(t.relation("dvir10") == "unrelated");
    t.remove("dvir2");
            CHECK(t.relation("dvir5") == "unrelated");
            CHECK(t.relation("dvir6") == "unrelated");
            CHECK(t.relation("dvir11") == "unrelated");
            CHECK(t.relation("dvir12") == "unrelated");
            CHECK(t.relation("dvir13") == "unrelated");
            CHECK(t.relation("dvir14") == "unrelated");
            CHECK(t.relation("dvir2") == "unrelated");
    t.remove("dvir1");
            CHECK(t.relation("dvir1") == "unrelated");
            CHECK(t.relation("dvir3") == "unrelated");
            CHECK(t.relation("dvir7") == "unrelated");
            CHECK(t.relation("Karin") == "unrelated");
            CHECK(t.relation("dvir15") == "unrelated");
            CHECK(t.relation("dvir16") == "unrelated");
            CHECK(t.relation("dvir17") == "unrelated");

   
}

TEST_CASE ("exceptions") {
    Tree t("dvir");
    t.addFather("dvir", "dvir1")
            .addMother("dvir", "dvir2")
            .addFather("dvir1", "dvir3")
            .addMother("dvir1", "dvir4")
            .addFather("dvir2", "dvir5")
            .addMother("dvir2", "dvir6")
            .addFather("dvir3", "dvir7")
            .addMother("dvir3", "dvir8")
            .addFather("dvir4", "dvir9")
            .addMother("dvir4", "dvir10")
            .addFather("dvir5", "dvir11")
            .addMother("dvir5", "dvir12")
            .addFather("dvir6", "dvir13")
            .addMother("dvir6", "dvir15")
            .addFather("dvir7", "dvir16")
            .addFather("dvir16", "dvir17")
            .addFather("dvir17", "dvir18")
            .addFather("dvir18", "dvir19");

            SUBCASE("exsist father") {
                CHECK_THROWS(t.addFather("dvir3", "Abcd"));
                CHECK_THROWS(t.addFather("dvir5", "Abcd"));
                CHECK_THROWS(t.addMother("dvir6", "Zxcv"));
                CHECK_THROWS(t.addMother("dvir4", "Zxcv"));
                CHECK_THROWS(t.addMother("dvir5", "Zxcv"));
                CHECK_THROWS(t.addMother("dvir3", "Zxcv"));
                CHECK_THROWS(t.addFather("dvir7", "Abcd"));
                CHECK_THROWS(t.addFather("dvir17", "Abcd"));
                CHECK_THROWS(t.addFather("dvir18", "Abcd"));
                CHECK_THROWS(t.addMother("dvir", "Zxcv"));
    }

            SUBCASE("not esxist.") {
                CHECK_THROWS(t.remove("abcd"));
               
    }
            SUBCASE("already removes") {
        t.remove("dvir8");
                CHECK_THROWS(t.remove("dvir8"));
        t.remove("dvir7");
                CHECK_THROWS(t.remove("dvir7"));
                CHECK_THROWS(t.remove("dvir16"));
                CHECK_THROWS(t.remove("dvir17"));
                CHECK_THROWS(t.remove("dvir18"));
                
    }
            SUBCASE("Test remove root.") {
                CHECK_THROWS(t.remove("dvir"));
    }
            
}