#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class PassiveTriggerData; }
namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Logic::Skills::Passive { class PassiveSkillTargetType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class PassiveSkillDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17EC910)
#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EC9B0)
#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17EE510)
#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_VALIDATE_OFFSET UNITYSDK_OFFSET(0x17EE850)
#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17EE520)
#define MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EE910)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int PassiveSkillDAO_TypeDefinitionIndex = 15611;

	class PassiveSkillDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x20
		::System::Int32 MaxTriggerCount; // 0x24
		::System::Int64 CoolTimeNotTrigger; // 0x28
		::System::Int32 TryCount; // 0x30
		::System::Boolean ResetTryCountUseSkill; // 0x34
		::MX::Logic::Data::PassiveTriggerData* TriggerCondition; // 0x38
		::MX::Logic::Skills::TargetFindRule* TriggerSourceFindRule; // 0x40
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* SkillTargetType; // 0x128
		Il2CppObject* EntityTimeline; // 0x130

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PassiveSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PassiveSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate(::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PassiveSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PassiveSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PASSIVESKILLDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

