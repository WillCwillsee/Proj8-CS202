#ifndef NODELIST_H_
#define NODELIST_H_

#include <DataType/DataType.h>
/*
class Node{

  friend class NodeList;

  public:
    
    Node() :
	  m_next( nullptr )
	{
	}
    
	Node(const DataType & data, Node * next = nullptr) :
	  m_next( next ),
	  m_data( data )
	{
	}
    
	Node(const Node & other) :
	  m_next( other.m_next ),
	  m_data( other.m_data )
	{
	}
	
    DataType & data()
    {
	  return m_data;
    }
    
    const DataType & data() const
    {  
      return m_data;
    }

  private:
    Node * m_next; 						
    DataType m_data;
};

class NodeList{
  friend std::ostream & operator<<(std::ostream & os,	  //(i)
					       const NodeList & nodeList);
  public:
    NodeList();								    		  //(1)
    NodeList(size_t count, const DataType & value);		  //(2)
    NodeList(const NodeList & other);					  //(3)
    ~NodeList();							   			  //(4)

    NodeList & operator= (const NodeList & rhs);		  //(5)

    Node * front();							    		  //(6)
    Node * back();										  //(7)
	
    Node * find(const DataType & target,				  //(8)
                Node * & previous,
                const Node * after = nullptr);	
	
    Node * insertAfter(Node * target,    		          //(9)
                       const DataType & value);	    
    Node * insertBefore(Node * target,    	              //(10)
                        const DataType & value);
    Node * erase(Node * target); 			              //(11)

	
    DataType & operator[] (size_t position);			  //(12a)
    const DataType & operator[] (size_t position) const;  //(12b)
    
    size_t size() const;								  //(13)
    bool empty() const;									  //(14)
    void clear();										  //(15)	

  private:
    Node * m_head;
};
*/
#endif //NODELIST_H_
