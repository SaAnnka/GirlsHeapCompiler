#pragma once
#include "common.h"
class CVarDeclList : public IVarDeclList
{
public:
	CVarDeclList( std::vector<IVarDecl*>& _varDeclList );
    CVarDeclList( IVarDecl* _varDecl );

	~CVarDeclList();
	void Accept( IVisitor* visitor ) const
	{
		visitor->Visit( this );
	}
	const std::vector<IVarDecl*>& VarDeclList() const;

private:
	std::vector<IVarDecl*> varDeclList;
};