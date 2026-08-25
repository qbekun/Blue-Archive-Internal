#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommandActivateConfrontationGauge; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class ApplySkillSetting; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_ADD_GAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x12AB680)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_EXPIRE_OFFSET UNITYSDK_OFFSET(0x12AB720)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GETCURRENTACTIVEMAGIFICATIONSETTINGINDEX_OFFSET UNITYSDK_OFFSET(0x12AB830)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GET_TARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x12AB8E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x12AB8F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_COACTORUPDATE_OFFSET UNITYSDK_OFFSET(0x12AB900)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x12AB9B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12AB9C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SET_TARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x12ABD00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12ABD10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12ABD60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x12ADB30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AE040)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_COPROCESSAPPLYLOGICEFFECTINGAUGE_OFFSET UNITYSDK_OFFSET(0x12B0A20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B0AE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE__EXECUTE_B__25_0_OFFSET UNITYSDK_OFFSET(0x12B1110)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_USESKILL_OFFSET UNITYSDK_OFFSET(0x12B1170)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_REMOVE_GAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x12B18A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12AB9D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_ONGAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x12B1980)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_CHANGEGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x12ADCA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x12B1A30)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandActivateConfrontationGauge_TypeDefinitionIndex = 14126;

	class GroundCommandActivateConfrontationGauge : public Il2CppObject
	{
	public:
		Il2CppObject* GaugeChanged; // 0x30
		::System::String* TargetCharacterSpawnCommandId; // 0x38
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _TargetCharacter_k__BackingField; // 0x40
		::System::Int64 MaxGaugeValue; // 0x48
		::System::Int64 StartGaugeValue; // 0x50
		::System::Int64 _CurrentGaugeValue_k__BackingField; // 0x58
		::System::String* PortraitPathLeft; // 0x60
		::System::String* PortraitPathRight; // 0x68
		::System::Single HideDelayInSecond; // 0x70
		::System::Int64 GaugeActivationDelayInFrame; // 0x78
		::Il2CppArray<::System::Object*>* DivideGaugeMagnificationSettings; // 0x80
		::Il2CppArray<::System::Object*>* ApplySkillSettings; // 0x88
		::MX::Logic::Battles::Battle* battle; // 0x90
		::MX::Logic::Battles::GroundCommandActivateConfrontationGauge* currentCommand; // 0x0
		::System::Boolean expired; // 0x98
		::System::Int64 GaugeActivationFrame; // 0xA0

		::System::Void add_GaugeChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_ADD_GAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_EXPIRE_OFFSET))(nullptr);
		}

		::System::Int32 GetCurrentActiveMagificationSettingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GETCURRENTACTIVEMAGIFICATIONSETTINGINDEX_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_TargetCharacter()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GET_TARGETCHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentGaugeValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_GET_CURRENTGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoActorUpdate(::MX::Logic::BattleEntities::SkillActor* arg, ::MX::Logic::Battles::Battle* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::SkillActor*, ::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_COACTORUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentGaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SET_CURRENTGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SET_TARGETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoProcessApplyLogicEffectInGauge(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::ApplySkillSetting* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::ApplySkillSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_COPROCESSAPPLYLOGICEFFECTINGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Execute_b__25_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE__EXECUTE_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void UseSkill(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_USESKILL_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void remove_GaugeChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_REMOVE_GAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnGaugeChanged(::System::Int64 arg, ::System::Int64 arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_ONGAUGECHANGED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ChangeGaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_CHANGEGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATECONFRONTATIONGAUGE_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

