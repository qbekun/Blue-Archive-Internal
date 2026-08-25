#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DispelActionType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ApplyLogicDispelCountEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16CF280)
#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CF2E0)
#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16D2E90)
#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16D32C0)
#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16D32D0)
#define MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16D2E40)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ApplyLogicDispelCountEffectDAO_TypeDefinitionIndex = 15388;

	class ApplyLogicDispelCountEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DispelActionType* DispelActionType; // 0x58
		::System::Int32 DispelCountCondition; // 0x5C
		::System::String* ApplyLogicEffect; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70
		::System::String* IgnoreLogicEffectGroupId; // 0x78
		::System::String* CountTargetCategory; // 0x80

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_APPLYLOGICDISPELCOUNTEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

