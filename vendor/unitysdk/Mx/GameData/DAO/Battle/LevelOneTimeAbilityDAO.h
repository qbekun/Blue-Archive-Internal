#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class LevelOneTimeAbilityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16DE860)
#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_TOSKILLABILITYVALUE_OFFSET UNITYSDK_OFFSET(0x16DEC60)
#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16DE870)
#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DED00)
#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DFAB0)
#define MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DFB00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LevelOneTimeAbilityDAO_TypeDefinitionIndex = 15396;

	class LevelOneTimeAbilityDAO : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillAbilityValue* ToSkillAbilityValue(::MX::Logic::Skills::SkillSpecification* arg)
		{
			return (return (::MX::Logic::Data::SkillAbilityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_TOSKILLABILITYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELONETIMEABILITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

