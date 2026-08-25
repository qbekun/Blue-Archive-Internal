#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class ExtraStatType; }
namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HealedLimitEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x155AD40)
#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x155AD90)
#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x155D120)
#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15603B0)
#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1560410)
#define MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1560840)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HealedLimitEffectDAO_TypeDefinitionIndex = 15264;

	class HealedLimitEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 LimitAmount; // 0x58
		::System::Int64 LimitHPRate; // 0x60
		::MX::Logic::Skills::ExtraStatType* ExtraStatType; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::String* EndConditionArgumentFirst; // 0x70
		::System::String* EndConditionArgumentSecond; // 0x78
		::System::Boolean Dispellable; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEDLIMITEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

