#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatusAddEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x162C3C0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162D9E0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x162FC10)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x162FBC0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x162FF50)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x162FC20)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatusAddEffectDAO_TypeDefinitionIndex = 15324;

	class StatusAddEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Boolean IgnoreOppressionCheck; // 0x61

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

