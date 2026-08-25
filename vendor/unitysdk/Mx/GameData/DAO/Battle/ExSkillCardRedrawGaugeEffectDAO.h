#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class GaugeChargeConditionType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ExSkillCardRedrawGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1528A90)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1529180)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15291E0)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1529230)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x152B6A0)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1528AA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ExSkillCardRedrawGaugeEffectDAO_TypeDefinitionIndex = 15246;

	class ExSkillCardRedrawGaugeEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x58
		::MX::Logic::Data::GaugeChargeConditionType* GaugeChargeCondition; // 0x5C
		::System::String* ConditionParameter; // 0x60
		::System::Int64 TryCount; // 0x68
		::System::Int64 ChargeValue; // 0x70
		::System::Int64 InitialGaugeValue; // 0x78
		::System::Int64 MaxGaugeValue; // 0x80
		::System::Int64 InitialRedrawStackCount; // 0x88
		::System::Int64 MaxRedrawStackCount; // 0x90
		::System::Int64 MaxRedrawTriggerCount; // 0x98
		::System::Boolean IsShowUI; // 0xA0
		::System::String* ApplyLogicEffectGroupIdGetStack; // 0xA8
		::System::Boolean IsNPC; // 0xB0
		::Il2CppArray<::System::Object*>* TacticEntityType; // 0xB8
		::Il2CppArray<::System::Object*>* TargetExSkillSlot; // 0xC0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLCARDREDRAWGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

