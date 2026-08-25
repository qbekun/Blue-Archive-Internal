#pragma once
#include "../unitysdk.h"

#define SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E670)
#define SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E6A0)
#define SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E6D0)
#define SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x936E710)

namespace System
{
	inline static constexpr unsigned int ObsoleteAttribute_TypeDefinitionIndex = 23813;

	class ObsoleteAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _message; // 0x10
		::System::Boolean _error; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBSOLETEATTRIBUTE_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

