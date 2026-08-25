#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillAbilityModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SKILLABILITYMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E0730)
#define SKILLABILITYMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E06F0)
#define SKILLABILITYMODIFIERDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E1CD0)
#define SKILLABILITYMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E2550)

	inline static constexpr unsigned int SkillAbilityModifierDAOFormatter_TypeDefinitionIndex = 15397;

	class SkillAbilityModifierDAOFormatter : public ::System::IO::StringWriter
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillAbilityModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillAbilityModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYMODIFIERDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillAbilityModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillAbilityModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

