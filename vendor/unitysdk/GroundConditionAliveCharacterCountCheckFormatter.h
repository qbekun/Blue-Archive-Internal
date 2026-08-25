#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x133AEC0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x133AF00)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133AF50)

	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheckFormatter_TypeDefinitionIndex = 14280;

	class GroundConditionAliveCharacterCountCheckFormatter : public ::System::Collections::Generic::LargeArrayBuilder`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

