#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HealConvertDamageEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1555220)
#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1555590)
#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15588A0)
#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1558900)
#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1558850)
#define MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1558910)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HealConvertDamageEffectDAO_TypeDefinitionIndex = 15262;

	class HealConvertDamageEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 TransferRatio; // 0x58
		::System::Int64 Duration; // 0x60
		::System::Boolean Dispellable; // 0x68
		::System::String* DamageCheckGroupID; // 0x70
		::System::String* TransferredHealDamageGroupID; // 0x78
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x80
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x84

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALCONVERTDAMAGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

