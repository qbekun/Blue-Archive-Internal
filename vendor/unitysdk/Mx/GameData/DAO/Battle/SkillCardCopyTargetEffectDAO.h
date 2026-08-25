#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillCardCopyEndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillCardCopyTargetEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1670FC0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1671010)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16742B0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1676680)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16766E0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1676AB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillCardCopyTargetEffectDAO_TypeDefinitionIndex = 15354;

	class SkillCardCopyTargetEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::MX::Logic::Data::SkillCardCopyEndCondition* EndCondition; // 0x60
		::System::String* EndConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::String* ChangeSkillCardToCCToCasterLogicEffectGroupId; // 0x78
		::Il2CppArray<::System::Object*>* ApplyLogicEffectGroupIdWhenTriggered; // 0x80
		::System::Boolean DeductRedrawGaugeWhenOriginalCardInHand; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCARDCOPYTARGETEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

