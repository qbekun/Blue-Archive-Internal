#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CoverStateDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COVERSTATEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F5460)
#define COVERSTATEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F5070)
#define COVERSTATEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F54B0)

	inline static constexpr unsigned int CoverStateDamageModifierDAOFormatter_TypeDefinitionIndex = 15437;

	class CoverStateDamageModifierDAOFormatter : public ::System::Globalization::IdnMapping
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COVERSTATEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COVERSTATEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COVERSTATEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

