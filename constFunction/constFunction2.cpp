#include<iostream>

class Obj{
    public:
        int val;
        Obj* nextObj;
        Obj(): val(0), nextObj(nullptr) {}
        Obj(int x): val(x), nextObj(nullptr) {}
        Obj(int x, Obj* obj): val(x), nextObj(obj){}
};

// these 2 line is wrong: obj is read-only object
// void changeVal(Obj const * obj) {
void changeVal(Obj *&obj, Obj *&obj2) {
// void changeVal(Obj* const obj, Obj* obj2) {
    // obj->val = 6;
    obj = obj2;
    // obj->val = 3;
    // obj->val = obj2->val;
}

int main() {

    Obj obj;
    Obj obj2(5);

    std::cout << obj.val << std::endl;

    // changeVal(&obj, &obj2);

    std::cout << obj.val << std::endl;

    Obj *pObj = &obj;
    Obj *pObj2 = &obj2;

    // changeVal(pObj, pObj2);
    *pObj = *pObj2;
    std::cout << pObj->val << std::endl;
    std::cout << "obj-val = "<< obj.val << std::endl;
    printf("pObj = 0x%x\tpObj2= 0x%x\n", pObj, pObj2);
    printf("obj  = 0x%x\tobj2 = 0x%x\n", &obj, &obj2);

}