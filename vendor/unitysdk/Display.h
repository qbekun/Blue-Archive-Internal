#pragma once
#include "unitysdk.h"

#define DISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C7E80)
#define DISPLAY_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x93C7EC0)
#define DISPLAY_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x93C7ED0)
#define DISPLAY_GETINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x93C7F10)

	inline static constexpr unsigned int Display_TypeDefinitionIndex = 24003;

	class Display : public Il2CppObject
	{
	public:
		::System::String* displayName; // 0x10
		::System::String* internal_name; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DISPLAY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPLAY_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_InternalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPLAY_GET_INTERNALNAME_OFFSET))(nullptr);
		}

		::System::String* GetInternalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPLAY_GETINTERNALNAME_OFFSET))(nullptr);
		}

	};

