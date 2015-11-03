#pragma once
#include "classes.h"
#include "common.h"

class CVarInfo
{
public:
	CVarInfo() {}
	CVarInfo( CSymbol* _name, CType* _type ) :
		name( _name ), type( _type )
	{
	}

	CSymbol* Name();
	CType* Type();

private:
	CSymbol* name;
	CType* type;
};

class CMethodInfo
{
public:
	CMethodInfo() {}
	CMethodInfo( CSymbol* _name, CType* _type,
		std::map<CSymbol*, CVarInfo> _formalArgs,
		std::map<CSymbol*, CVarInfo> _localArgs ) :
		name( _name ), type( _type ), formalArgs( _formalArgs ), localArgs( _localArgs )
	{
	}

	CMethodInfo( CSymbol* _name, CType* _type ) : name( _name ), type( _type )
	{
	}

	bool AddFormalArg( CSymbol* name, CType* type );
	bool AddLocalArg( CSymbol* name, CType* type );

	CVarInfo* FindFormalArg( CSymbol* name );
	CVarInfo* FindLocalArg( CSymbol* name );

	CSymbol* Name();
	std::map<CSymbol*, CVarInfo>& FormalArgs();
	std::map<CSymbol*, CVarInfo>& LocalArgs();
	CType* Type();

private:
	CSymbol* name;
	CType* type;
	std::map<CSymbol*, CVarInfo> formalArgs;
	std::map<CSymbol*, CVarInfo> localArgs;
};

class CClassInfo
{
public:
	CClassInfo() {}
	CClassInfo( CSymbol* _name, CSymbol* _baseClassName,
		std::map<CSymbol*, CVarInfo> _varList,
		std::map<CSymbol*, CMethodInfo> _methodList ) :
		name( _name ), baseClassName( _baseClassName ), varList( _varList ), methodList( _methodList )
	{}

	CClassInfo( CSymbol* _name ) : name( _name ) {}

	CClassInfo( CSymbol* _name, CSymbol* _baseClassName ) : name( _name ), baseClassName( _baseClassName )
	{}

	CSymbol* Name();
	std::map<CSymbol*, CVarInfo>& VarList();
	std::map<CSymbol*, CMethodInfo>& MethodList();
	bool AddVar( CSymbol* name, CType* type );
	bool AddMethod( CSymbol* name, CType* type );

	CVarInfo* FindVar( CSymbol* name );
	CMethodInfo* FindMethod( CSymbol* name );

private:
	CSymbol* name;
	CSymbol* baseClassName;
	std::map<CSymbol*, CVarInfo> varList;
	std::map<CSymbol*, CMethodInfo> methodList;
};

class CTable
{
public:
//	bool AddClass( CSymbol* id );
	bool AddClass( CSymbol* id, CSymbol* baseClassId );
	CClassInfo* FindClass( CSymbol* id );

private:
	std::map<CSymbol*, CClassInfo> classesList;
};