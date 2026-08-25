#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ForceApplyStatChangeToAllyEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1536B30)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1536B90)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1538F40)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1539280)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1538F50)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x153C790)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ForceApplyStatChangeToAllyEffectDAO_TypeDefinitionIndex = 15250;

	class ForceApplyStatChangeToAllyEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Range; // 0x58
		::FlatData::LogicEffectCategory* CategoryCondition; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x64
		::System::String* EndConditionArgumentFirst; // 0x68
		::System::String* EndConditionArgumentSecond; // 0x70
		::System::Boolean Dispellable; // 0x78
		::System::Boolean UpdateStatChangeAlways; // 0x79
		::System::Boolean ApplyStatChangeLayer; // 0x7A
		::System::Boolean ShowForceAppliedEffectSkillVisual; // 0x7B
		::System::Boolean ShowForceAppliedEffectCommonVisual; // 0x7C

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLYSTATCHANGETOALLYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

