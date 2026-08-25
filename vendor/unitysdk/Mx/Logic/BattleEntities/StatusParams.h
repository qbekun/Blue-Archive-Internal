#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::BattleEntities { class ForceMoveParams; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Skills::LogicEffects { class StatusAddEffect; }

#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x1174600)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1174610)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1174620)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1174630)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTTODISPEL_OFFSET UNITYSDK_OFFSET(0x1174640)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_ISCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1174650)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1174660)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1174670)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_FORCEMOVE_OFFSET UNITYSDK_OFFSET(0x1174680)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x1174690)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11746A0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11746B0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTVISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x11746C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETERNUMBER_OFFSET UNITYSDK_OFFSET(0x1173600)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x11746D0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETERSECOND_OFFSET UNITYSDK_OFFSET(0x11746E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x11746F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1174700)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1174710)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1174720)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1174730)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_TYPEOFSTATUSCHANGELOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1174740)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1173AC0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174A40)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174B20)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174C10)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174D10)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174DF0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174750)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1175090)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11752F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1175470)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11754E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1175140)
#define MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1175550)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusParams_TypeDefinitionIndex = 13224;

	class StatusParams : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::StatusParams* Empty; // 0x0
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::HeroStatus* _Status_k__BackingField; // 0x28
		::MX::Logic::Skills::LogicEffects::LogicEffect* _LogicEffectToDispel_k__BackingField; // 0x30
		::System::Boolean _IsCrowdControl_k__BackingField; // 0x38
		::System::Int32 _Duration_k__BackingField; // 0x3C
		::MX::Logic::BattleEntities::ForceMoveParams* _ForceMove_k__BackingField; // 0x40
		::System::Int32 _LogicEffectLevel_k__BackingField; // 0x50
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x58
		::System::String* _LogicEffectTemplateId_k__BackingField; // 0x60
		::System::UInt32 _LogicEffectVisualIdHash_k__BackingField; // 0x68
		::System::String* _Parameter_k__BackingField; // 0x70
		::System::String* _ParameterSecond_k__BackingField; // 0x78
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x80
		::System::Boolean _Dispellable_k__BackingField; // 0x84
		::System::String* _SkillEntityName_k__BackingField; // 0x88
		Il2CppObject* _ExpirationCheck_k__BackingField; // 0x90
		::System::Boolean _IsDurationChangedByStat_k__BackingField; // 0x98
		::System::Type* _TypeOfStatusChangeLogicEffect_k__BackingField; // 0xA0

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_Status()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_STATUS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffect* get_LogicEffectToDispel()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTTODISPEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCrowdControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_ISCROWDCONTROL_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::ForceMoveParams* get_ForceMove()
		{
			return ((::MX::Logic::BattleEntities::ForceMoveParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_FORCEMOVE_OFFSET))(nullptr);
		}

		::System::Int32 get_LogicEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LogicEffectVisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_LOGICEFFECTVISUALIDHASH_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETERNUMBER_OFFSET))(nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_ParameterSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_PARAMETERSECOND_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExpirationCheck()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_EXPIRATIONCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Type* get_TypeOfStatusChangeLogicEffect()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GET_TYPEOFSTATUSCHANGELOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::Boolean arg4, ::MX::Logic::BattleEntities::SkillSlot* arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::String* str, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::StatusAddEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatusAddEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::String* str, ::MX::Logic::BattleEntities::ForceMoveParams* arg4, ::FlatData::LogicEffectCategory* arg5, ::MX::Logic::BattleEntities::SkillSlot* arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::MX::Logic::BattleEntities::ForceMoveParams*, ::FlatData::LogicEffectCategory*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CTOR_OFFSET))(arg, arg2, arg3, str, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::StatusParams* arg, ::MX::Logic::BattleEntities::StatusParams* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusParams*, ::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::StatusParams* arg, ::MX::Logic::BattleEntities::StatusParams* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusParams*, ::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPARAMS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

