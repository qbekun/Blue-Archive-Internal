#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatusAddWithParameterEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1630090)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1632350)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16323A0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16339D0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1633D10)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16339E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatusAddWithParameterEffectDAO_TypeDefinitionIndex = 15326;

	class StatusAddWithParameterEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Int64 Parameter; // 0x68
		::System::Boolean IgnoreOppressionCheck; // 0x70

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHPARAMETEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

