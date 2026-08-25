#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
class AutoUseRuleDAO;
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_TRYCOUNT_OFFSET UNITYSDK_OFFSET(0x13DDCF0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETAUTOUSECHECK_OFFSET UNITYSDK_OFFSET(0x13DDD00)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ACTIVATECONDITION_OFFSET UNITYSDK_OFFSET(0x13DDD60)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x13DDF40)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x13DDF50)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x13DE060)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_CURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x13DE0E0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_FORCEPASSCONDITION_OFFSET UNITYSDK_OFFSET(0x13DE0F0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SETACTIVATION_OFFSET UNITYSDK_OFFSET(0x13DDE10)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISUSESKILLOK_OFFSET UNITYSDK_OFFSET(0x13DE100)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_TRIGGERRATE_OFFSET UNITYSDK_OFFSET(0x13DE110)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DE120)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_STARTCOOLTIMENOTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x13DE580)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISCONDITIONOK_OFFSET UNITYSDK_OFFSET(0x13DE590)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13DE5A0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_CURRENTTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x13DE750)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETTRIGGERCOUNTANDCONDITION_OFFSET UNITYSDK_OFFSET(0x13DE760)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_TRIGGERRATE_OFFSET UNITYSDK_OFFSET(0x13DE790)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x13DE7A0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x13DE7B0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x13DE7C0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CURRENTTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x13DE7D0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_BATTLE_CHARACTERFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x13DE7E0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x13DE860)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CHECKMOUNTSTATUS_OFFSET UNITYSDK_OFFSET(0x13DE870)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x13DE880)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_COOLTIMENOTTRIGGER_OFFSET UNITYSDK_OFFSET(0x13DE890)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_STARTCOOLTIMENOTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x13DE8A0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_MAXTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x13DE8B0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CHECKTARGET_OFFSET UNITYSDK_OFFSET(0x13DE8C0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISUSESKILLOK_OFFSET UNITYSDK_OFFSET(0x13DE8D0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_RESETTRYCOUNTUSESKILL_OFFSET UNITYSDK_OFFSET(0x13DE8E0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISCONDITIONOK_OFFSET UNITYSDK_OFFSET(0x13DE8F0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKBASE_TRYTOUSESKILL_OFFSET UNITYSDK_OFFSET(0x13DE900)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckBase_TypeDefinitionIndex = 14535;

	class AutoUseCheckBase : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x10
		::System::Int32 _MaxTriggerCount_k__BackingField; // 0x18
		::System::Int32 _CurrentTriggerCount_k__BackingField; // 0x1C
		::System::Int64 _CoolTimeNotTrigger_k__BackingField; // 0x20
		::System::Int64 _StartCoolTimeNotTriggerFrame_k__BackingField; // 0x28
		::System::Int32 _TryCount_k__BackingField; // 0x30
		::System::Boolean _ResetTryCountUseSkill_k__BackingField; // 0x34
		::System::Int32 _CurrentTryCount_k__BackingField; // 0x38
		::System::Int32 _TriggerRate_k__BackingField; // 0x3C
		::System::Boolean _IsConditionOK_k__BackingField; // 0x40
		::System::Boolean _IsUseSkillOK_k__BackingField; // 0x41
		::MX::Logic::Data::ModifierCheckTarget* _CheckTarget_k__BackingField; // 0x44
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x48
		::System::Int32 coolFrame; // 0x50
		::System::Int32 coolTimeOriginal; // 0x54
		::System::Int32 startCoolFrame; // 0x58
		::System::Boolean _CheckMountStatus_k__BackingField; // 0x5C
		Il2CppObject* TryToUseSkillModifiers; // 0x60
		Il2CppObject* activateCondition; // 0x68
		::System::Boolean _IsActive_k__BackingField; // 0x70

		::System::Int32 get_TryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_TRYCOUNT_OFFSET))(nullptr);
		}

		::System::Void ResetAutoUseCheck(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETAUTOUSECHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_ActivateCondition(::MX::Data::CharacterSkillListKey* arg)
		{
			((::System::Void(*)(::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ACTIVATECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void Battle_CharacterInteractWithTSS(::System::Object* arg, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentTriggerCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_CURRENTTRIGGERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void ForcePassCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_FORCEPASSCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SETACTIVATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUseSkillOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISUSESKILLOK_OFFSET))(nullptr);
		}

		::System::Void set_TriggerRate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_TRIGGERRATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 get_StartCoolTimeNotTriggerFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_STARTCOOLTIMENOTTRIGGERFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConditionOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISCONDITIONOK_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTryCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_CURRENTTRYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void ResetTriggerCountAndCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETTRIGGERCOUNTANDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_TriggerRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_TRIGGERRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void ResetCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_RESETCONDITION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CURRENTTRYCOUNT_OFFSET))(nullptr);
		}

		::System::Void Battle_CharacterFormConversion(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_BATTLE_CHARACTERFORMCONVERSION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckMountStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CHECKMOUNTSTATUS_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CURRENTTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CoolTimeNotTrigger()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_COOLTIMENOTTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_StartCoolTimeNotTriggerFrame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_STARTCOOLTIMENOTTRIGGERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_MAXTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ModifierCheckTarget* get_CheckTarget()
		{
			return ((::MX::Logic::Data::ModifierCheckTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_CHECKTARGET_OFFSET))(nullptr);
		}

		::System::Void set_IsUseSkillOK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISUSESKILLOK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetTryCountUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_GET_RESETTRYCOUNTUSESKILL_OFFSET))(nullptr);
		}

		::System::Void set_IsConditionOK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_SET_ISCONDITIONOK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryToUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKBASE_TRYTOUSESKILL_OFFSET))(nullptr);
		}

	};
}

