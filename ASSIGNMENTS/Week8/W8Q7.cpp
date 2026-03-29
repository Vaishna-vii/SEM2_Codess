/*7. Design an online library of photographs where users can create and update their profile,
upload images and share them with their friends. Class Diagram must include the
following classes: Photo, JPEG, Bitmap, GIF, Photo Album, User.*/
#include <iostream>
#include <vector>
using namespace std;

class Photo {
public:
    string privacy;
};

class JPEG : public Photo {};
class Bitmap : public Photo {};
class GIF : public Photo {};

class PhotoAlbum {
public:
    vector<Photo*> photos;
};

class User {
public:
    string name;
    vector<User*> friends;
    vector<PhotoAlbum> albums;

    void addFriend(User* u) {
        friends.push_back(u);
    }
};
