#pragma once
#include "unitysdk.h"

#define OPTIONAL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9C25B60)

	inline static constexpr unsigned int Optional_TypeDefinitionIndex = 26687;

	class Optional : public Il2CppObject
	{
	public:
		::System::String* device; // 0x10
		::System::String* name; // 0x18

		::System::Void Serialize(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONAL_SERIALIZE_OFFSET))(arg, nullptr);
		}

	};

