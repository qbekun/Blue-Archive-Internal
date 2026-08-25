#pragma once
#include "unitysdk.h"

#define DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14F48D0)
#define DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F4910)
#define DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F4960)

	inline static constexpr unsigned int DamagedMultiplierbyDamageOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15221;

	class DamagedMultiplierbyDamageOverTimeEffectDAOFormatter : public DebuggingModes
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

