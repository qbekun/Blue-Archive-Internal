#pragma once
#include "unitysdk.h"

#define COSTREGENBANEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C99E0)
#define COSTREGENBANEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C9A30)
#define COSTREGENBANEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C8380)

	inline static constexpr unsigned int CostRegenBanEffectDAOFormatter_TypeDefinitionIndex = 15207;

	class CostRegenBanEffectDAOFormatter : public ::System::Globalization::NumberFormatInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COSTREGENBANEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CostRegenBanEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COSTREGENBANEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTREGENBANEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

