#pragma once
#include "unitysdk.h"

#define LIMITGAUGEGAINRULEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1301990)
#define LIMITGAUGEGAINRULEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1302100)
#define LIMITGAUGEGAINRULEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1302150)

	inline static constexpr unsigned int LimitGaugeGainRuleFormatter_TypeDefinitionIndex = 14214;

	class LimitGaugeGainRuleFormatter : public ::System::Buffers::Binary::BinaryPrimitives
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMITGAUGEGAINRULEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::LimitGaugeGainRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::LimitGaugeGainRule&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITGAUGEGAINRULEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::LimitGaugeGainRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::LimitGaugeGainRule&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITGAUGEGAINRULEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

