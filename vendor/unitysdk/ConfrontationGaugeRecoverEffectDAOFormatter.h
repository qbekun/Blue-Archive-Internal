#pragma once
#include "unitysdk.h"

#define CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C20B0)
#define CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C2100)
#define CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C09E0)

	inline static constexpr unsigned int ConfrontationGaugeRecoverEffectDAOFormatter_TypeDefinitionIndex = 15203;

	class ConfrontationGaugeRecoverEffectDAOFormatter : public ::System::Globalization::UnicodeCategory
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

