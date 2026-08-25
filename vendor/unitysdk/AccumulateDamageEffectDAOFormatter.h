#pragma once
#include "unitysdk.h"

#define ACCUMULATEDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x148B210)
#define ACCUMULATEDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1488240)
#define ACCUMULATEDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x148B260)

	inline static constexpr unsigned int AccumulateDamageEffectDAOFormatter_TypeDefinitionIndex = 15183;

	class AccumulateDamageEffectDAOFormatter : public ::System::Reflection::Assembly
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

