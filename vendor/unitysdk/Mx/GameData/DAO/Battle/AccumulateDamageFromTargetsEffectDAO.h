#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class StatPhase; }
namespace MX::Logic::Data { class AccumulateDamageActionType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14943D0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x149AB40)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x149AB90)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x149B310)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x149ABA0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x149B370)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateDamageFromTargetsEffectDAO_TypeDefinitionIndex = 15188;

	class AccumulateDamageFromTargetsEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::StatType* LimitSourceStat; // 0x58
		::MX::Logic::Data::StatPhase* LimitSourceStatPhase; // 0x5C
		::System::Int64 LimitSourceStatRate; // 0x60
		::System::Int64 LimitAmount; // 0x68
		::System::String* TargetLogicEffectGroupId; // 0x70
		::MX::Logic::Data::AccumulateDamageActionType* AccumulateDamageActionType; // 0x78
		::FlatData::BulletType* AccumulateBulletTypeFilter; // 0x7C
		::MX::Logic::Skills::TargetSideId* AccumulateDamageSideFilter; // 0x80
		::MX::Logic::Skills::TargetSideId* AccumulateTargetSideFilter; // 0x84
		::System::Int64 AccumulateRate; // 0x88
		::System::Boolean IsWriteWhenLogicExpired; // 0x90
		::System::Boolean IsWriteWhenLogicDispelled; // 0x91
		::System::String* BlackboardKeyToWrite; // 0x98
		::MX::Logic::Data::BlackboardKeyType* BlackboardKeyType; // 0xA0
		::FlatData::EndCondition* EndCondition; // 0xA4
		::System::Int32 EndConditionArgument; // 0xA8
		::System::Boolean Dispellable; // 0xAC
		::System::String* ExecuteLogicEffectGroupId01; // 0xB0
		::System::String* ExecuteLogicEffectGroupId02; // 0xB8
		::System::String* ExecuteLogicEffectGroupId03; // 0xC0
		::System::String* ExecuteLogicEffectGroupId04; // 0xC8
		::System::String* LimitSourceBlackboardKeyString; // 0xD0
		::MX::Logic::Data::BlackboardKeyType* LimitSourceBlackboardKeyType; // 0xD8
		::System::Int64 LimitSourceBlackboardRate; // 0xE0
		::System::Boolean IsEndWhenReachLimit; // 0xE8

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEFROMTARGETSEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

