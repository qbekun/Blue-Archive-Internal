#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class StatusResult; }

#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x117DDA0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x117DDB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x117DDC0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_ISCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x117DDD0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_VISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x117DDE0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTTODISPEL_OFFSET UNITYSDK_OFFSET(0x117DDF0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x117DE00)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x117DE10)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x117DE20)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x117DE30)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x117DE40)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x117DE50)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x117DE60)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x117DE70)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_PARAMETERNUMBER_OFFSET UNITYSDK_OFFSET(0x117DE80)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_PARAMETERSECOND_OFFSET UNITYSDK_OFFSET(0x117DE90)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_TYPEOFSTATUSCHANGELOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x117DEA0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x117C180)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1178B80)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x117DEB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x117E010)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x117E090)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x117E0E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x117E160)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x117E1E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x117E260)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x117E2E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x117E380)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x117D7C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x117E050)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusResult_TypeDefinitionIndex = 13244;

	class StatusResult : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::HeroStatus* _Status_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::System::Boolean _IsCrowdControl_k__BackingField; // 0x28
		::System::UInt32 _VisualIdHash_k__BackingField; // 0x2C
		::MX::Logic::Skills::LogicEffects::LogicEffect* _LogicEffectToDispel_k__BackingField; // 0x30
		::System::Int32 _LogicEffectLevel_k__BackingField; // 0x38
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x40
		::System::String* templateId; // 0x48
		::MX::Core::Services::Hash64* TemplateIdHash; // 0x50
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x5C
		::System::String* _SkillEntityName_k__BackingField; // 0x60
		Il2CppObject* _ExpirationCheck_k__BackingField; // 0x68
		::System::Boolean _IsDurationChangedByStat_k__BackingField; // 0x70
		::System::Int64 _ParameterNumber_k__BackingField; // 0x78
		::System::String* _ParameterSecond_k__BackingField; // 0x80
		::System::Type* _TypeOfStatusChangeLogicEffect_k__BackingField; // 0x88

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_Status()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_STATUS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCrowdControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_ISCROWDCONTROL_OFFSET))(nullptr);
		}

		::System::UInt32 get_VisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_VISUALIDHASH_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffect* get_LogicEffectToDispel()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTTODISPEL_OFFSET))(nullptr);
		}

		::System::Int32 get_LogicEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExpirationCheck()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_EXPIRATIONCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_PARAMETERNUMBER_OFFSET))(nullptr);
		}

		::System::String* get_ParameterSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_PARAMETERSECOND_OFFSET))(nullptr);
		}

		::System::Type* get_TypeOfStatusChangeLogicEffect()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GET_TYPEOFSTATUSCHANGELOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::HeroStatus* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Boolean arg4, ::System::UInt32 arg5, ::System::Int32 arg6, ::System::String* str, ::System::String* str2, ::FlatData::LogicEffectCategory* arg7, ::System::Boolean arg8, ::System::String* str3, Il2CppObject* arg9, ::System::Boolean arg10, ::System::Int64 arg11, ::System::String* str4, ::System::Type* arg12, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg13)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::HeroStatus*, ::MX::Logic::Skills::SkillSpecification*, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::String*, ::System::String*, ::FlatData::LogicEffectCategory*, ::System::Boolean, ::System::String*, Il2CppObject*, ::System::Boolean, ::System::Int64, ::System::String*, ::System::Type*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, str, str2, arg7, arg8, str3, arg9, arg10, arg11, str4, arg12, arg13, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Logic::BattleEntities::StatusResult* arg, ::MX::Logic::BattleEntities::StatusResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

