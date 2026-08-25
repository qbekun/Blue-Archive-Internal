#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14AF560)
#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14AF960)
#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14AF570)
#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14AFA00)
#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B1DB0)
#define MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14B1D60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BulletArmorDamageFactorChangeEffectDAO_TypeDefinitionIndex = 15198;

	class BulletArmorDamageFactorChangeEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x58
		::System::Int64 AddDamageRate; // 0x60
		::System::Int64 MultiplyDamageRate; // 0x68
		::MX::Logic::BattleEntities::LogicEffectEndCondition* EndCondition; // 0x70
		::System::Int32 EndConditionArgument; // 0x74
		::System::Boolean Dispellable; // 0x78

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETARMORDAMAGEFACTORCHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

