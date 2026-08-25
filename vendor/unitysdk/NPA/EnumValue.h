#pragma once
#include "../unitysdk.h"

#define NPA_ENUMVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC4300)
#define NPA_ENUMVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9BC4330)

namespace NPA
{
	inline static constexpr unsigned int EnumValue_TypeDefinitionIndex = 25585;

	class EnumValue : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _value; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENUMVALUE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENUMVALUE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

