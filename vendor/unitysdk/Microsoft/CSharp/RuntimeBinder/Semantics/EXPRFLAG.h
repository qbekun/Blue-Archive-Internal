#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int EXPRFLAG_TypeDefinitionIndex = 34493;

	class EXPRFLAG : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_BINOP; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CTOR; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_NEEDSRET; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ASLEAVE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ISFAULT; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_HASHTABLESWITCH; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_BOX; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ARRAYCONST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_MEMBERSET; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_OPENTYPE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_LABELREFERENCED; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_GENERATEDQMARK; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_INDEXER; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_GOTOCASE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_REMOVEFINALLY; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_UNBOX; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ARRAYALLCONST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CTORPREAMBLE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_USERLABEL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_OPERATOR; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ISPOSTOP; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_FINALLYBLOCKED; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_REFCHECK; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_WRAPASTEMP; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_LITERALCONST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_BADGOTO; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_RETURNISYIELD; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ISFINALLY; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_NEWOBJCALL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_INDEXEXPR; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_REPLACEWRAP; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_UNREALIZEDGOTO; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CONSTRAINED; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_FORCE_BOX; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_SIMPLENAME; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ASFINALLYLEAVE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_BASECALL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_FORCE_UNBOX; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ADDRNOCONV; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_GOTONOTBLOCKED; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_DELEGATE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_STATIC_CAST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_USERCALLABLE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_UNBOXRUNTIME; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_NEWSTRUCTASSG; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_GENERATEDSTMT; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_IMPLICITSTRUCTASSG; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_MARKING; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_UNREACHABLEBEGIN; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_UNREACHABLEEND; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_USEORIGDEBUGINFO; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_LASTBRACEDEBUGINFO; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_NODEBUGINFO; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_IMPLICITTHIS; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CANTBENULL; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CHECKOVERFLOW; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_PUSH_OP_FIRST; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_ASSGOP; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_LVALUE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_SAMENAMETYPE; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_MASK_ANY; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* EXF_CAST_ALL; // 0x0

	};
}

