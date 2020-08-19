(STL) Standard Template Library

# Important Websites:
https://en.cppreference.com/w/cpp

# Container are Objects that handle a collection of other objects (elements),
  implementing a well-defined data structure.

# Containers:
# Ex: Vectors, Stacks, Queues, Maps, Pairs.

# Types of containers:
  - Sequence (Vectors, Lists, Deques, Stacks, Queues).
  - Associative Containers: (Sets, Maps, Multisets, Multimaps).
    Implemented By Trees.
  - Unordered Associative Containers: (Sets, Maps, Multisets, Multimaps).
    Implemented By Hash Tables.

# Deque (Double Ended Queue):
  - Supports push and pop on both ends.
  - Supports Random Access.
  - Elements doesn't stored contiguously in memory.
  - Has middle performance between the Vector and List.

# Sets:
  - Contains Unique values (Doesn't accept duplicates).
  - Can be Ordered or Unordered.
  - Ordered sets as Binary Trees.
  - Unordered sets as Hash Tables.
  - For duplicates, use multiset.

# Ordered sets called Regular Sets.

# What is a tuple?
  - A tuple is an object that can hold a number of elements.
  - The elements can be of different data types.
  - The elements of tuples are initialized as arguments in order in which they will
  be accessed.

# Maps:
  - Map is set of pairs.
  - Maps doesn't accept duplicates.
  - For duplicates use Multimaps.

# Some containers support some type of access, For Example Iterators.

# Iterators:

# Are Pointers and Iterators are the same thing?
No: Pointers are one particular type of Iterator.

# Types of Iterators:
  - Input Iterator:
    Read one way, one pass.

  - Output Iterator.
    Write One Way, One Pass.

  - Forward Iterator.
    Read/Write one way, Multi pass.

  - Bidirectional Iterator.
    Read/Write two way, Multi Pass.

  - Random Access Iterator.
    Read/Write Anywhere.

# Four Important Iterator Functions:
  - begin() : returns an iterator to the beginning of the container.
  - end() : returns an iterator to the end of the container.
  - rbegin() : returns a reverse iterator to the reverse beginning of the container.
  - rend() : returns a reverse iterator to the reverse end of the container.

# Invalidate Iterator:
  It occurs when the object is modified while reading.

# Invalidation will not happen with Linked List,
  Because insertion will not relocate elements in the container,
  Instead every element is pointing to the next element memory location.

#Example:
// & my_vector means calling the vector by reference to avoid passing the whole, vector each time I want to deal with.
// const to make sure that the function will not modify the vector.
void print(const vector <int>& my_vector){
    cout << "Vector Content {" << endl;
    cout << "}\n\n";
}

# If there is not "using namespace std;" I have to write std::vector, to define a vector.


# Victors vs Lists:
- Lists doesn't support Random Access.
- Lists doesn't support inserting and removing elements by index.

# Deque (Double ended Queue):
  - Allows push_front and push_end
  - Allows pop_front and pop_end
  - deque<int>::iterator is used to iterate over objects.

# Stacks:
  - Allows push and pop elements only in single side.
  - Works with FILO (First In Last Out)
  - Supports operations: pop(), top(), push()

# Queues:
  - Allows push and pop elements only in single side.
  - Works with FIFO (First In First Out)
  - Supports operations: pop(), front(), push()

# Priority Queues:
  - Allows push and pop elements only in single side.
  - A container keeps it's elements ordered naturally.
  - Pop element will return the maximum value and so on.

# Sets:
  - There is two types of Sets:
    -- Ordered Sets.
    -- Unordered Sets.
  - Accepts Unique values.
  - Allows remove item by value

# Unordered Sets: are similar to Sets but it saves elements unordered.
# Multisets: are similar to Sets but it accepts duplicates.
# Unordered Multisets: are similar to Multisets but saves elements unordered.

# Maps (Regular Maps or Ordered Maps):
  - Accepts Key and Value Pair.
  - To insert a value we use insert(p), while p is pair<T, T>.
  - Maps will ignore duplicates, So if you insert value with same key,
    The new value will be ignored and the original value will be kept.

# Multimaps:
  - Similar to Maps but it does accept duplicates.
