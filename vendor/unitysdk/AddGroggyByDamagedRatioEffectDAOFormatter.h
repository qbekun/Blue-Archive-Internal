#pragma once
#include "unitysdk.h"

#define ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14ABA90)
#define ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14A7330)
#define ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14ABAE0)

	inline static constexpr unsigned int AddGroggyByDamagedRatioEffectDAOFormatter_TypeDefinitionIndex = 15193;

	class AddGroggyByDamagedRatioEffectDAOFormatter : public ::System::Reflection::RuntimeFieldInfo
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDGROGGYBYDAMAGEDRATIOEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

