#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ShieldHealEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F4D20)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15F6A10)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15F6A70)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F6DE0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15F9880)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15F9830)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ShieldHealEffectDAO_TypeDefinitionIndex = 15306;

	class ShieldHealEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::String* ShieldId; // 0x70
		::System::Boolean ForceFloaterHide; // 0x78

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

