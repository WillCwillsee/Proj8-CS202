
#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include <DataType/DataType.h>

/*class ArrayList{
	
  friend std::ostream & operator<<(std::ostream & os,
					       const ArrayList & arrayList);
						   
  public:
    ArrayList();
    ArrayList(size_t count, const DataType & value);
    ArrayList(const ArrayList & other);
    ~ArrayList();

    ArrayList & operator= (const ArrayList & rhs);


    DataType * front();
    DataType * back();
	
    DataType * find(const DataType & target,
                    DataType * & previous,
                    const DataType * after = nullptr);	
	
    DataType * insertAfter(DataType * target,
                           const DataType & value);	 
    DataType * insertBefore(DataType * target,
                            const DataType & value);
    DataType * erase(DataType * target);

	
    DataType & operator[] (size_t position);
    const DataType & operator[] (size_t position) const;
    
    size_t size() const;
    bool empty() const;
    void clear();

  private:
  
    void resize(size_t count);		               								    
    DataType * m_array;
    size_t m_size;
    size_t m_maxsize;

};
*/

#endif //ARRAYLIST_H_
