#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingContext; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B87D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B87F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_GET_CONTEXTFORMEMBERLOOKUP_OFFSET UNITYSDK_OFFSET(0x90B8810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_GET_CHECKED_OFFSET UNITYSDK_OFFSET(0x90B8820)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int BindingContext_TypeDefinitionIndex = 34479;

	class BindingContext : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* _ContextForMemberLookup_k__BackingField; // 0x10
		::System::Boolean _Checked_k__BackingField; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* get_ContextForMemberLookup()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_GET_CONTEXTFORMEMBERLOOKUP_OFFSET))(nullptr);
		}

		::System::Boolean get_Checked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_BINDINGCONTEXT_GET_CHECKED_OFFSET))(nullptr);
		}

	};
}

