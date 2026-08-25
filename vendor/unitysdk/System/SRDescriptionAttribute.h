#pragma once
#include "../unitysdk.h"

#define SYSTEM_SRDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7F40)
#define SYSTEM_SRDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9AD7FA0)

namespace System
{
	inline static constexpr unsigned int SRDescriptionAttribute_TypeDefinitionIndex = 29197;

	class SRDescriptionAttribute : public Il2CppObject
	{
	public:
		::System::Boolean isReplaced; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SRDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SRDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};
}

