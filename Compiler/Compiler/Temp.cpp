#include "Temp.h"

CLabelList::CLabelList( CLabel * _head, CLabelList * _tail ): head(_head), tail(_tail)
{}

const CLabel * CLabelList::getHead()
{
    return head;
}

const CLabelList * CLabelList::getTail()
{
    return tail;
}

CTempList::CTempList( CTemp * _head, CTempList * _tail ) : head( _head ), tail( _tail )
{}

const CTemp * CTempList::getHead()
{
    return head;
}

const CTempList * CTempList::getTail()
{
    return tail;
}

CLabel::CLabel() : name( "label_" + std::to_string( nextUniqueId++ ) )
{}

CLabel::CLabel( const std::string& s ) : name( s )
{}

const std::string & CLabel::Name() const
{
    return name;
}

CTemp::CTemp() : name( "temp_" + std::to_string( nextUniqueId++ ) )
{}

CTemp::CTemp( const CSymbol * symbol ) : name( symbol->String() )
{}

CTemp::~CTemp()
{}
