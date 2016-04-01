#pragma once
#include "common.h"
#include "IRLabel.h"

class CIRCjump : public IIRStm {
public:
    CIRCjump( EBinOp relop, const IIRExp* left, const IIRExp* right, CLabel* ifTrue, CLabel* ifFalse );
    ~CIRCjump();
    const CIRExpList* Kids() const;
    const IIRStm* Build( const CIRExpList* ) const;
    virtual void Accept( CIRTreePrettyVisitor* printer ) const
    {
        printer->Visit( this );
    }

    const EBinOp relop;
    const IIRExp* left;
    const IIRExp* right;
    const CLabel* ifTrue;
    const CLabel* ifFalse;
};

