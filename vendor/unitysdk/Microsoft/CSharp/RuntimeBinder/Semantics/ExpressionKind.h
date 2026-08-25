#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExpressionKind_TypeDefinitionIndex = 34507;

	class ExpressionKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* NoOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BinaryOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* UnaryOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Assignment; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* List; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* ArrayIndex; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Call; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Field; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Local; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Constant; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Class; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Property; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Multi; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* MultiGet; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Wrap; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Concat; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* ArrayInit; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Cast; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* UserDefinedConversion; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* TypeOf; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* ZeroInit; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* UserLogicalOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* MemberGroup; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BoundLambda; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* FieldInfo; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* MethodInfo; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* PropertyInfo; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* NamedArgumentSpecification; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* ExpressionKindCount; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* EqualsParam; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* FirstOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Compare; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* True; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* False; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Inc; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Dec; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LogicalNot; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Eq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* RelationalMin; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* NotEq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LessThan; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LessThanOrEqual; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* GreaterThan; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* GreaterThanOrEqual; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* RelationalMax; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Add; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Subtract; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Multiply; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Divide; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Modulo; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Negate; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* UnaryPlus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BitwiseAnd; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BitwiseOr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BitwiseExclusiveOr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* BitwiseNot; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LeftShirt; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* RightShift; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LogicalAnd; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* LogicalOr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Sequence; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Save; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Swap; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Indir; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* Addr; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* StringEq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* StringNotEq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DelegateEq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DelegateNotEq; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DelegateAdd; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DelegateSubtract; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DecimalNegate; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DecimalInc; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* DecimalDec; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* MultiOffset; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* TypeLimit; // 0x0

	};
}

