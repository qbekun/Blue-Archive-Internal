#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x92C7BE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x92C7BF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7C00)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceAttribute_TypeDefinitionIndex = 25042;

	class EventSourceAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Guid_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::System::Void set_Guid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET))(str, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

