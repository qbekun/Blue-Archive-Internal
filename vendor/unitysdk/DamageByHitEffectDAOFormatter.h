#pragma once
#include "unitysdk.h"

#define DAMAGEBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14E9200)
#define DAMAGEBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E9240)
#define DAMAGEBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E92A0)

	inline static constexpr unsigned int DamageByHitEffectDAOFormatter_TypeDefinitionIndex = 15217;

	class DamageByHitEffectDAOFormatter : public ::System::Globalization::RegionInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

