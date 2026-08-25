#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HpRateDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HPRATEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F6870)
#define HPRATEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F68B0)
#define HPRATEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F6900)

	inline static constexpr unsigned int HpRateDamageModifierDAOFormatter_TypeDefinitionIndex = 15441;

	class HpRateDamageModifierDAOFormatter : public ::System::Buffers::SpanAction`2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPRATEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HpRateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HpRateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HpRateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HpRateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HPRATEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

