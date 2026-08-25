#pragma once
#include "unitysdk.h"

#define ACCUMULATEHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A3530)
#define ACCUMULATEHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A3580)
#define ACCUMULATEHEALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x149FCB0)

	inline static constexpr unsigned int AccumulateHealEffectDAOFormatter_TypeDefinitionIndex = 15189;

	class AccumulateHealEffectDAOFormatter : public ::System::Reflection::ExceptionHandlingClause
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEHEALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

