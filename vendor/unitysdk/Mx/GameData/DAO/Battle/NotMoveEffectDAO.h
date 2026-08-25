#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NotMoveEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15D85F0)
#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D8930)
#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15D9F60)
#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D9FC0)
#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15D8600)
#define MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15DC220)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NotMoveEffectDAO_TypeDefinitionIndex = 15294;

	class NotMoveEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Boolean IncludeRootMotion; // 0x61
		::System::Boolean ImmuneKnockback; // 0x62

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NotMoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NOTMOVEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

