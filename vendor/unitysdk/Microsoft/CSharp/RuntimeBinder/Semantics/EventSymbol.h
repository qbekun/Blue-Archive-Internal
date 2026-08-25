#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_GET_ISWINDOWSRUNTIMEEVENT_OFFSET UNITYSDK_OFFSET(0x90CA7E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_SET_ISWINDOWSRUNTIMEEVENT_OFFSET UNITYSDK_OFFSET(0x90CA7F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CA800)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int EventSymbol_TypeDefinitionIndex = 34530;

	class EventSymbol : public Il2CppObject
	{
	public:
		::System::Reflection::EventInfo* AssociatedEventInfo; // 0x38
		::System::Boolean isStatic; // 0x40
		::System::Boolean isOverride; // 0x41
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* type; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* methAdd; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* methRemove; // 0x58
		::System::Boolean _IsWindowsRuntimeEvent_k__BackingField; // 0x60

		::System::Boolean get_IsWindowsRuntimeEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_GET_ISWINDOWSRUNTIMEEVENT_OFFSET))(nullptr);
		}

		::System::Void set_IsWindowsRuntimeEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_SET_ISWINDOWSRUNTIMEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EVENTSYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

