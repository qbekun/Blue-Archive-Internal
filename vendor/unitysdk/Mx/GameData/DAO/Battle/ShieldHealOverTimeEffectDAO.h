#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ShieldHealOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15F9930)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15F9940)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F9CB0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15FCA30)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15FE760)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15FC9E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ShieldHealOverTimeEffectDAO_TypeDefinitionIndex = 15308;

	class ShieldHealOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Int32 Period; // 0x74
		::System::Boolean IsDispellable; // 0x78
		::System::String* ShieldId; // 0x80
		::System::Boolean ForceFloaterHide; // 0x88

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALOVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

