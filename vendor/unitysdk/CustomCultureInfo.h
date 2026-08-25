#pragma once
#include "unitysdk.h"

#define CUSTOMCULTUREINFO_GET_CUSTOMDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xC728A0)
#define CUSTOMCULTUREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC728B0)

	inline static constexpr unsigned int CustomCultureInfo_TypeDefinitionIndex = 9012;

	class CustomCultureInfo : public Il2CppObject
	{
	public:
		::System::String* customDateFormat; // 0xD0

		::System::String* get_CustomDateFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCULTUREINFO_GET_CUSTOMDATEFORMAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCULTUREINFO_.CTOR_OFFSET))(str, str2, nullptr);
		}

	};

