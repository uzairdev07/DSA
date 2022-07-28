//
// Created by Mr. Uzair on 7/27/2022.
//

#ifndef DSA_DNODE_H
#define DSA_DNODE_H

struct DNode {
    int value;
    DNode* prev = nullptr;
    DNode* next = nullptr;
};

#endif //DSA_DNODE_H
