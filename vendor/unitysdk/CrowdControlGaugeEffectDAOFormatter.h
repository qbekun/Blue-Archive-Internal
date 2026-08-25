#pragma once
#include "unitysdk.h"

#define CROWDCONTROLGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14E1510)
#define CROWDCONTROLGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E1550)
#define CROWDCONTROLGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E15A0)

	inline static constexpr unsigned int CrowdControlGaugeEffectDAOFormatter_TypeDefinitionIndex = 15215;

	class CrowdControlGaugeEffectDAOFormatter : public ::System::Globalization::Bootstring
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

