

template <class T>
List<T>::List() {
    this->head = NULL;
}

template <class T>
List<T>::~List() {
    Node<T>* prev = this->head;
    Node<T>* curr = this->head;
    while (curr) {
        prev = curr;
        curr = curr->next;
        delete prev;
    }
}

template <class T>
List<T>::List(const List& that) {
    if (that.head != NULL) {
        this->head = new Node<T>(that.head->data);
        Node<T>* thisTemp = this->head;
        Node<T>* thatTemp = that.head->next;

        while (thatTemp != NULL) {
            thisTemp->next = new Node<T>(thatTemp->data);
            thisTemp = thisTemp->next;
            thatTemp = thatTemp->next;
        }
    }
}

template <class T>
List<T>& List<T>::operator = (List& that) {
    Node<T>* prev = this->head;
    Node<T>* curr = this->head;
    while (this->head) {
        prev = curr;
        curr = curr->next;
        delete prev;
    }
    if (that.head != NULL) {
        this->head = new Node<T>(that.head->data);
        Node<T>* thisTemp = this->head;
        Node<T>* thatTemp = that.head;

        while (thatTemp != NULL) {
            thisTemp->next = new Node<T>(thatTemp->data);
            thisTemp = thisTemp->next;
            thatTemp = thatTemp->next;
        }
    }
    return *this;
}
#if 0
template<class T>
void List<T>::print(){
	Node<T> *nodePtr = head;
	while (nodePtr != NULL) {
		cout << nodePtr->data << "\t";
		nodePtr = nodePtr->next;
	}
	/*
	if (nodePtr) {
		cout << nodePtr->data << "\t";
		//nodePtr = head->next;
		print(nodePtr->next);
	}
	return;
	*/
	//trouble with the recursive method
}
#endif
template<class T>
List <T>& List<T>::pushFront(T val) {
    Node<T> *nodePtr = new Node<T>(val);
    nodePtr->next = this->head;
    this->head = nodePtr;
    return *this;
}

template<class T>
List<T>& List<T>::pushBack(T val) {
    if (this->head == NULL) {
        this->head = new Node<T>(val);
    }
    else {
        Node<T> *nodePtr = this->head;
        while (nodePtr->next != NULL) {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = new Node<T>(val);
    }
    return *this;

}

template<class T>
List<T>& List<T>::popFront(T &val) {
    if (this->head == NULL) {
        throw BADINDEX();
    }
    else {
        Node<T>* nodePtr = this->head;
        this->head = head->next;
        nodePtr->next = NULL;
        val = nodePtr->data;
        nodePtr->data = val;
        delete nodePtr;
    }
    return *this;
}

template<class T>
List<T>& List<T>::popBack(T &val) {
    if (head == NULL) {
        throw BADINDEX();
    }
    if (head->next == NULL) {
        val = head->next->data;
        delete head;
        this->head = NULL;
    }
    else if(this->head != NULL){
        Node<T>* temp = this->head, *prev = temp;
        while(temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        val = temp->data;
        delete temp;
    }

    return *this;
}

template<class T>
int List<T>::getSize() {
    if (this->head == NULL) {
        return 0;
    }
    else {
        int num = 0;
        Node<T>* nodePtr = this->head;
        while (nodePtr != NULL) {
            num++;
            nodePtr = nodePtr->next;
        }
        return num;
    }

}

template<class T>
bool List<T>::isEmpty(){
    if (this->head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

template<class T>
T List<T>::front() {
    if (this->head == NULL) {
        throw BADINDEX();
    }
    else {
        T val =  this->head->data;
        return val;
    }
}

template<class T>
T List<T>::back()
{
    if (this->head == NULL) {
        throw BADINDEX();
    }
    else {
        Node<T>* nodePtr = this->head;
        while (nodePtr->next != NULL) {
            nodePtr = nodePtr->next;
        }
        T val = nodePtr->data;
        return val;
    }
}

template<class T>
T & List<T>::operator[](int index) {
    Node<T> * nodePtr = this->head;
    if (this->head == NULL) {
        throw BADINDEX();
    }
    if (index == 0) {
        return this->head->data;
    }
    else {

        for (int i = 0; i < index; i++) {
            if (nodePtr->next == NULL) {
                throw BADINDEX();
            }
            nodePtr = nodePtr->next;
        }
        return nodePtr->data;
    }
}