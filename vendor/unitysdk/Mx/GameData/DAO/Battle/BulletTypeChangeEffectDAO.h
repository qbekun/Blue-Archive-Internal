#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B34A0)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14B5AD0)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B5B20)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14B72C0)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14B7320)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14B7330)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BulletTypeChangeEffectDAO_TypeDefinitionIndex = 15200;

	class BulletTypeChangeEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::FlatData::BulletType* ChangeBulletType; // 0x60
		::System::Boolean IsChangeNormal; // 0x64
		::System::Boolean IsChangeEx; // 0x65
		::System::Boolean IsChangePublic; // 0x66
		::System::Boolean IsChangeLeader; // 0x67
		::System::Boolean IsChangePassive; // 0x68
		::System::Boolean IsChangeExtraPassive; // 0x69
		::System::Boolean Dispellable; // 0x6A

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

