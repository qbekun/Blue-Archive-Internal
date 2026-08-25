#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_GET_OPTIONALLEFTCHILD_OFFSET UNITYSDK_OFFSET(0x90CE230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SET_OPTIONALLEFTCHILD_OFFSET UNITYSDK_OFFSET(0x90CE240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_GET_OPTIONALRIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x90CE250)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SET_OPTIONALRIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x90CE260)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SETASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90CE270)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprBinOp_TypeDefinitionIndex = 34556;

	class ExprBinOp : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalLeftChild_k__BackingField; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalRightChild_k__BackingField; // 0x60

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalLeftChild()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_GET_OPTIONALLEFTCHILD_OFFSET))(nullptr);
		}

		::System::Void set_OptionalLeftChild(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SET_OPTIONALLEFTCHILD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalRightChild()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_GET_OPTIONALRIGHTCHILD_OFFSET))(nullptr);
		}

		::System::Void set_OptionalRightChild(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SET_OPTIONALRIGHTCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void SetAssignment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBINOP_SETASSIGNMENT_OFFSET))(nullptr);
		}

	};
}

