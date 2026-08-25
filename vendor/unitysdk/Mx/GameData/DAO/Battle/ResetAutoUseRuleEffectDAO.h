#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ResetAutoUseRuleEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C7AF0)
#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C9DA0)
#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16CB3D0)
#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16CB3E0)
#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16C9D50)
#define MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16CB750)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ResetAutoUseRuleEffectDAO_TypeDefinitionIndex = 15384;

	class ResetAutoUseRuleEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 TargetFormIndex; // 0x58
		::MX::Logic::BattleEntities::SkillSlot* TargetSkillSlot; // 0x5C
		::System::Boolean ResetIsUseSkillOk; // 0x60
		::System::Boolean ResetCurrentTriggerCount; // 0x61
		::System::Boolean ResetCondition; // 0x62

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RESETAUTOUSERULEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

