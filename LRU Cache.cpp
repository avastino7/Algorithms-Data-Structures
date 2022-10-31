/*

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.

*/

class node {
    public:
        int key;
        int val;
        node * next;
        node * prev;
    node(int _key, int _val) {
        key = _key;
        val = _val;
        next = nullptr ; 
        prev = nullptr ; 
    }
};

class LRUCache {
public:

    int capacity ;
    // unordered_map < int, node * > map ; 
    vector<node*> map ; // (10009 , nullptr ) ; 
    //map < int, node * > map ; 
    node * head ;
    node * tail ;
    int size  ; 
    LRUCache(int cap) {
        capacity = cap ;
        head = new node(-1, -1);
        tail = new node(-1, -1);
        head -> next = tail;
        tail -> prev = head;
        size = 0 ; 
        map = vector<node*>  (10009 , nullptr ) ; 
    }
    
    int get(int key) {

        if (map[key]!=nullptr ) {
            node * resnode = map[key] ; 
            int res = resnode -> val;
            //map.erase(key);
            //map.erase(map.begin() + key);
            map[key] = nullptr ; 
            deletenode(resnode);
            addnode(new node(key , res ));
            map[key] = head -> next;
            return res;

        }

        return -1;
    }
    
      void put(int key, int value) {
            if (map[key]!=nullptr ) {
              node * existingnode = map[key];
              //map.erase(key);
              //map.erase(map.begin() + key);
              map[key] = nullptr ; 
              deletenode(existingnode);
            }
            if (size == capacity) {
              // this will be least recently used node  
              //map.erase(map.begin() + (tail -> prev -> key) );
              map[tail -> prev -> key] = nullptr ;   
              deletenode(tail -> prev);
              
            }

            addnode(new node(key, value));
            map[key] = head -> next;
            
      }

    void addnode(node * newnode) {
        size++ ; 
        node * temp = head -> next;
        newnode -> next = temp;
        newnode -> prev = head;
        head -> next = newnode;
        temp -> prev = newnode;
    }

    void deletenode(node * delnode) {
        size -- ; 
        node * delprev = delnode -> prev;
        node * delnext = delnode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
        delnode-> next = nullptr ; 
        delnode -> prev = nullptr ; 
        delete delnode ; 
    }
};
