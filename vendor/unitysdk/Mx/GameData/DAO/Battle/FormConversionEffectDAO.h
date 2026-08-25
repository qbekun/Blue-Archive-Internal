#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FormConversionEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1547910)
#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x154A140)
#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x154A4B0)
#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x154BC80)
#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x154A0F0)
#define MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x154BC90)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FormConversionEffectDAO_TypeDefinitionIndex = 15256;

	class FormConversionEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* FormConversionEndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Int32 FormIndex; // 0x60
		::System::Int32 NormalAttackIndex; // 0x64
		::System::Int32 PublicSkillIndex; // 0x68
		::System::Boolean Dispellable; // 0x6C
		::System::Boolean ReleaseFormConversionRequired; // 0x6D
		::System::Int32 ReleaseFormConversionDuration; // 0x70
		::System::Boolean DisableUseSkill; // 0x74
		::System::Boolean ExSkillCardRedrawInHand; // 0x75
		::System::Boolean AffectUIGaugeType; // 0x76
		::System::Boolean UseImmediateFormReleaseOnDispel; // 0x77

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FormConversionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORMCONVERSIONEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

