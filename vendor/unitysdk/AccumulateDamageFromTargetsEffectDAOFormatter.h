#pragma once
#include "unitysdk.h"

#define ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x149F920)
#define ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x149F960)
#define ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x149F9C0)

	inline static constexpr unsigned int AccumulateDamageFromTargetsEffectDAOFormatter_TypeDefinitionIndex = 15187;

	class AccumulateDamageFromTargetsEffectDAOFormatter : public ::System::Reflection::AssemblyName
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEFROMTARGETSEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

