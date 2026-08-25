#pragma once
#include "unitysdk.h"

#define CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C5F30)
#define CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C3B20)
#define CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C5F80)

	inline static constexpr unsigned int ConfrontationGaugeRecoverOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15205;

	class ConfrontationGaugeRecoverOverTimeEffectDAOFormatter : public ::System::Globalization::GlobalizationMode
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

