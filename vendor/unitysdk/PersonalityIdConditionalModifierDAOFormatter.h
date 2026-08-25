#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class PersonalityIdConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FAD30)
#define PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FA6D0)
#define PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FAD80)

	inline static constexpr unsigned int PersonalityIdConditionalModifierDAOFormatter_TypeDefinitionIndex = 15451;

	class PersonalityIdConditionalModifierDAOFormatter : public ::System::IO::Win32Marshal
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PERSONALITYIDCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

