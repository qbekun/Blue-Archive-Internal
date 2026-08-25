#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class LevelDotAbilityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_TOSKILLABILITYVALUE_OFFSET UNITYSDK_OFFSET(0x16DCAA0)
#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DCB00)
#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DD9B0)
#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16DDA00)
#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16DDA10)
#define MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DDDE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LevelDotAbilityDAO_TypeDefinitionIndex = 15394;

	class LevelDotAbilityDAO : public Il2CppObject
	{
	public:
		::System::Int32 TotalCount; // 0x38
		::System::Int32 Interval; // 0x3C

		::MX::Logic::Data::SkillAbilityValue* ToSkillAbilityValue(::MX::Logic::Skills::SkillSpecification* arg)
		{
			return (return (::MX::Logic::Data::SkillAbilityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_TOSKILLABILITYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LevelDotAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LEVELDOTABILITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

