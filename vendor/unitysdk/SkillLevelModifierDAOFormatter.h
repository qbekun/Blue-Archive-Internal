#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillLevelModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLLEVELMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FCC50)
#define SKILLLEVELMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FC5B0)
#define SKILLLEVELMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FCCA0)

	inline static constexpr unsigned int SkillLevelModifierDAOFormatter_TypeDefinitionIndex = 15457;

	class SkillLevelModifierDAOFormatter : public ::System::IO::Path
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

