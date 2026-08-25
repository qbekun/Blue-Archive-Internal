#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class ForceApplyCheckTargetSide; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceAppliedStatChangeFromSingleTargetEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x153C8C0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1540930)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1540940)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1540FA0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1541000)
#define MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15408E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ForceAppliedStatChangeFromSingleTargetEffectDAO_TypeDefinitionIndex = 15252;

	class ForceAppliedStatChangeFromSingleTargetEffectDAO : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CategoryCondition; // 0x58
		::Il2CppArray<::System::Object*>* ApplySkillType; // 0x60
		::System::String* CheckLogicEffectGroupId; // 0x68
		::System::Boolean ShowTargetPortrait; // 0x70
		::FlatData::EndCondition* EndCondition; // 0x74
		::System::String* EndConditionArgumentFirst; // 0x78
		::System::String* EndConditionArgumentSecond; // 0x80
		::System::Boolean Dispellable; // 0x88
		::System::Boolean UpdateStatChangeAlways; // 0x89
		::System::Boolean ApplyStatChangeLayer; // 0x8A
		::System::Boolean ShowForceAppliedEffectSkillVisual; // 0x8B
		::System::Boolean ShowForceAppliedEffectCommonVisual; // 0x8C
		::System::Boolean AppliedFromSummoner; // 0x8D
		::MX::Logic::Data::ForceApplyCheckTargetSide* CheckTargetSide; // 0x90

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

