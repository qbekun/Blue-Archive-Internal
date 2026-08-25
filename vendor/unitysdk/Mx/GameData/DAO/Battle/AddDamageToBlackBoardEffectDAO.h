#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Data { class AccumulateDamageActionType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AddDamageToBlackBoardEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16BDBC0)
#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16BDC20)
#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16BDC70)
#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16C0C40)
#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1360)
#define MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C1370)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AddDamageToBlackBoardEffectDAO_TypeDefinitionIndex = 15380;

	class AddDamageToBlackBoardEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60
		::System::String* BlackBoardKey; // 0x68
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x70
		::System::Int64 BlackBoardAddValue; // 0x78
		::System::Int64 DamageInterval; // 0x80
		::MX::Logic::Data::AccumulateDamageActionType* DamageActionType; // 0x88
		::MX::Logic::Skills::TargetSideId* TargetSideFilter; // 0x8C
		::FlatData::BulletType* BulletTypeFilter; // 0x90
		::System::Boolean IncludeTransferDamage; // 0x94
		::MX::Logic::Skills::SkillType* SkillTypeFilter; // 0x98

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDDAMAGETOBLACKBOARDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

