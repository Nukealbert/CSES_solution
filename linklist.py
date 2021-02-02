class Node:
    def __init__(self):
        self.data= data
        self.nextNode=None

class LinkedList:
    def __init__(self):
        self.head = None
        self.numOfNodes=0
    
    

    def insert_start(self,data):
        self.numOfNodes =  self.numOfNodes +1
        new_node = Node(data)

        if not self.head:
            self.head=new_node
        else:
            new_node.nextNode=self.head
            self.head=new_node
