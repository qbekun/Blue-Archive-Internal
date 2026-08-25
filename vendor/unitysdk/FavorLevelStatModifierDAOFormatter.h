#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FavorLevelStatModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FAVORLEVELSTATMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F5CC0)
#define FAVORLEVELSTATMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F5EA0)
#define FAVORLEVELSTATMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F5EF0)

	inline static constexpr unsigned int FavorLevelStatModifierDAOFormatter_TypeDefinitionIndex = 15439;

	class FavorLevelStatModifierDAOFormatter : public ::System::Collections::HashHelpers
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAVORLEVELSTATMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FAVORLEVELSTATMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FAVORLEVELSTATMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

