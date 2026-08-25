#pragma once
#include "unitysdk.h"

#define ACCUMULATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1494330)
#define ACCUMULATEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1490A00)
#define ACCUMULATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1494380)

	inline static constexpr unsigned int AccumulateEffectDAOFormatter_TypeDefinitionIndex = 15185;

	class AccumulateEffectDAOFormatter : public ::System::Reflection::CustomAttributeData
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCUMULATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

