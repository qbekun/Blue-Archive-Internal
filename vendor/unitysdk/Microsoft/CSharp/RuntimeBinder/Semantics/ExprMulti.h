#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE6A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x90CE710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x90CE720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x90CE730)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_SET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x90CE740)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprMulti_TypeDefinitionIndex = 34562;

	class ExprMulti : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Left_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Operator_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Left()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_Left(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Operator()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_GET_OPERATOR_OFFSET))(nullptr);
		}

		::System::Void set_Operator(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMULTI_SET_OPERATOR_OFFSET))(arg, nullptr);
		}

	};
}

