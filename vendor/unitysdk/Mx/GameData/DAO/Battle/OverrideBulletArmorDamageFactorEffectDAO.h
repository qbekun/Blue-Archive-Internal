#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class OverrideBulletArmorDamageFactorEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x168A790)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x168A7E0)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x168A840)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x168ADB0)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x168A850)
#define MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x168CBA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int OverrideBulletArmorDamageFactorEffectDAO_TypeDefinitionIndex = 15364;

	class OverrideBulletArmorDamageFactorEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::BulletType* CheckBulletType; // 0x58
		::FlatData::ArmorType* CheckArmorType; // 0x5C
		::System::Int64 DamageRate; // 0x60
		::FlatData::DamageAttribute* DamageAttribute; // 0x68
		::System::Boolean ShowHighlightFloater; // 0x6C
		::System::Int64 MinDamageRate; // 0x70
		::System::Int64 MaxDamageRate; // 0x78
		::FlatData::EndCondition* EndCondition; // 0x80
		::System::String* EndConditionArgument; // 0x88
		::System::Boolean Dispellable; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

