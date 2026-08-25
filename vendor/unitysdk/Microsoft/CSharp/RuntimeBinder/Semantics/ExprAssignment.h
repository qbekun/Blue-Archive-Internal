#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_GET_LHS_OFFSET UNITYSDK_OFFSET(0x90CE150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_SET_LHS_OFFSET UNITYSDK_OFFSET(0x90CE110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_GET_RHS_OFFSET UNITYSDK_OFFSET(0x90CE160)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_SET_RHS_OFFSET UNITYSDK_OFFSET(0x90CE170)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprAssignment_TypeDefinitionIndex = 34555;

	class ExprAssignment : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _lhs; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _RHS_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_LHS()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_GET_LHS_OFFSET))(nullptr);
		}

		::System::Void set_LHS(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_SET_LHS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_RHS()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_GET_RHS_OFFSET))(nullptr);
		}

		::System::Void set_RHS(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRASSIGNMENT_SET_RHS_OFFSET))(arg, nullptr);
		}

	};
}

