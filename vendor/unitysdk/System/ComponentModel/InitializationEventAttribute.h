#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20950)
#define SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x9B20980)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InitializationEventAttribute_TypeDefinitionIndex = 29336;

	class InitializationEventAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _EventName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_EventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INITIALIZATIONEVENTATTRIBUTE_GET_EVENTNAME_OFFSET))(nullptr);
		}

	};
}

