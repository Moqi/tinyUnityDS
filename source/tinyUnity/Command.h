/*
 * Command.h
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */

#ifndef COMMAND_H_
#define COMMAND_H_

namespace tinyUnity {

template < class T>
class Command
{
public:
	typedef void(T:: *Action)();
	//template <class T, void (T::*TMethod)(void*)>
    Command(T *object, Action method)
    {
        m_object = object;
        m_method = method;
    }
    void operator()(void* argument) const
       {
    	(m_object->*m_method)(argument);

       }
    //virtual void execute(void* args);

  private:
    T *m_object;
    Action m_method;
};




} /* namespace tinyUnity */
#endif /* COMMAND_H_ */
