#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatusAddWithStringParameterEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1633E50)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1633EB0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1633EC0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1634230)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16374C0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1637510)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatusAddWithStringParameterEffectDAO_TypeDefinitionIndex = 15328;

	class StatusAddWithStringParameterEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::String* Parameter; // 0x68
		::System::String* ParameterSecond; // 0x70
		::System::Boolean IgnoreOppressionCheck; // 0x78

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSADDWITHSTRINGPARAMETEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

