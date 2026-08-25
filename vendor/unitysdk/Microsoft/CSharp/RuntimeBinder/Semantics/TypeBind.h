#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CheckConstraintsFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x90D7180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKMETHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x90D7600)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKCONSTRAINTSCORE_OFFSET UNITYSDK_OFFSET(0x90D74C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKSINGLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x90D76B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_SATISFIESBOUND_OFFSET UNITYSDK_OFFSET(0x90D7F50)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int TypeBind_TypeDefinitionIndex = 34588;

	class TypeBind : public Il2CppObject
	{
	public:
		::System::Boolean CheckConstraints(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKCONSTRAINTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckMethConstraints(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKMETHCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckConstraintsCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKCONSTRAINTSCORE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckSingleConstraint(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_CHECKSINGLECONSTRAINT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SatisfiesBound(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEBIND_SATISFIESBOUND_OFFSET))(arg, arg, nullptr);
		}

	};
}

