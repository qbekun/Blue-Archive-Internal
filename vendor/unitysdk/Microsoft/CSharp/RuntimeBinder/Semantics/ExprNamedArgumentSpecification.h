#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D0BE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x90D0C90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x90D0CA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x90D0C50)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprNamedArgumentSpecification_TypeDefinitionIndex = 34576;

	class ExprNamedArgumentSpecification : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _value; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _Name_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* get_Name()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_GET_NAME_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Value()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRNAMEDARGUMENTSPECIFICATION_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

