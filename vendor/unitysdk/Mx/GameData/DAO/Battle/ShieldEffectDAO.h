#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ShieldEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ECC60)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15ECCB0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15ECD10)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15ED050)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15ECD20)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F0200)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ShieldEffectDAO_TypeDefinitionIndex = 15304;

	class ShieldEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 BaseAmount; // 0x58
		::FlatData::StatType* TargetStatType; // 0x60
		::System::Int64 TargetCoefficientAmount; // 0x68
		::FlatData::StatType* CasterStatType; // 0x70
		::System::Int64 CasterCoefficientAmount; // 0x78
		::System::Int64 Duration; // 0x80
		::System::Boolean IsDispellable; // 0x88
		::System::String* ChangeRateByCost; // 0x90
		::System::Int32 ShieldPriority; // 0x98
		::System::String* ShieldId; // 0xA0
		::System::String* ShieldLeftoverConversionCondition; // 0xA8
		::System::Int64 LeftoverConvertRate; // 0xB0
		::System::Boolean ApplyHealRate; // 0xB8
		::System::Boolean ApplyHealRateByArmorType; // 0xB9
		::System::Boolean ApplyHealRateByBulletType; // 0xBA
		::System::String* LogicEffectGroupIdInsteadShield; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

