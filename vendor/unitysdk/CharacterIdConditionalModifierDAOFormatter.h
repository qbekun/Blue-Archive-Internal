#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CharacterIdConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E4D30)
#define CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E4CF0)
#define CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E4D80)

	inline static constexpr unsigned int CharacterIdConditionalModifierDAOFormatter_TypeDefinitionIndex = 15403;

	class CharacterIdConditionalModifierDAOFormatter : public TimeSpanRawInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERIDCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

