#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C97D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C99A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C9A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C99D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_GET_ISNOP_OFFSET UNITYSDK_OFFSET(0x90C9A30)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SubstContext_TypeDefinitionIndex = 34528;

	class SubstContext : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ClassTypes; // 0x10
		::Il2CppArray<::System::Object*>* MethodTypes; // 0x18
		::System::Boolean DenormMeth; // 0x20

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SUBSTCONTEXT_GET_ISNOP_OFFSET))(nullptr);
		}

	};
}

