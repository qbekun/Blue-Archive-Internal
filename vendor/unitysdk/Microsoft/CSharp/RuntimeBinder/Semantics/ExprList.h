#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF640)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_GET_OPTIONALELEMENT_OFFSET UNITYSDK_OFFSET(0x90CF690)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_SET_OPTIONALELEMENT_OFFSET UNITYSDK_OFFSET(0x90CF6A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_GET_OPTIONALNEXTLISTNODE_OFFSET UNITYSDK_OFFSET(0x90CF6B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_SET_OPTIONALNEXTLISTNODE_OFFSET UNITYSDK_OFFSET(0x90CF6C0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprList_TypeDefinitionIndex = 34572;

	class ExprList : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalElement_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalNextListNode_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalElement()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_GET_OPTIONALELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_OptionalElement(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_SET_OPTIONALELEMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalNextListNode()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_GET_OPTIONALNEXTLISTNODE_OFFSET))(nullptr);
		}

		::System::Void set_OptionalNextListNode(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLIST_SET_OPTIONALNEXTLISTNODE_OFFSET))(arg, nullptr);
		}

	};
}

