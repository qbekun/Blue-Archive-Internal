#pragma once
#include "unitysdk.h"

#define SECURITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x917EEC0)
#define SECURITYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91801D0)
#define SECURITYATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x91801E0)

	inline static constexpr unsigned int SecurityAttribute_TypeDefinitionIndex = 24280;

	class SecurityAttribute : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _value; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SECURITYATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECURITYATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECURITYATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};

