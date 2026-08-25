#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class StatusComparer;
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class StatusParams; }

#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_RUNTIMESTATUS_OFFSET UNITYSDK_OFFSET(0x1176470)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_RUNNINGSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1176480)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_FIND_OFFSET UNITYSDK_OFFSET(0x1175820)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_FINDALL_OFFSET UNITYSDK_OFFSET(0x1176490)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_CROWDCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x11764E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SET_CROWDCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x11764F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_CROWDCONTROLDURATION_OFFSET UNITYSDK_OFFSET(0x1176500)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SET_CROWDCONTROLDURATION_OFFSET UNITYSDK_OFFSET(0x1176510)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1176520)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_FORCEACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1176970)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_STATUSSET_OFFSET UNITYSDK_OFFSET(0x1176A20)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_PERMANENTSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1176A30)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_ADDEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1176A40)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_MARKREMOVELIST_OFFSET UNITYSDK_OFFSET(0x1176A50)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_EXPIREDLIST_OFFSET UNITYSDK_OFFSET(0x1176A60)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1176A70)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1176A80)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_STATUSEXECUTIONTABLE_OFFSET UNITYSDK_OFFSET(0x1176A90)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1176AA0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x11770D0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x11771A0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11775A0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1177660)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1177720)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1177830)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1177900)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11779F0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1177AB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_MATCHESANY_OFFSET UNITYSDK_OFFSET(0x1176640)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_COUNTMATCHES_OFFSET UNITYSDK_OFFSET(0x1177270)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ENABLEDYING_OFFSET UNITYSDK_OFFSET(0x1177B70)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_DISABLEDYING_OFFSET UNITYSDK_OFFSET(0x1177C10)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SETPERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1177C90)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x11781E0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x11782C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x1178700)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1178810)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1178820)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1178C90)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEBYLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11791C0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x1178A80)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASPERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1179700)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_TRYGETLATESTRUNNINGSTATUS_OFFSET UNITYSDK_OFFSET(0x1179750)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETALLRUNNINGSTATUSES_OFFSET UNITYSDK_OFFSET(0x1179850)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEALLCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1179990)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_APPLYADD_OFFSET UNITYSDK_OFFSET(0x1179C00)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_APPLYREMOVE_OFFSET UNITYSDK_OFFSET(0x117C4A0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_NOTIFYLOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x117C340)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ENTEREXECUTION_OFFSET UNITYSDK_OFFSET(0x117C0A0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_LEAVEEXECUTION_OFFSET UNITYSDK_OFFSET(0x117C020)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x117CF80)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ISVALIDIMMUNETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x117D1B0)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASCROWDCONTROLWITHOUTDEATH_OFFSET UNITYSDK_OFFSET(0x1178200)
#define MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASFORCEDACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x117D5E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusProcessor_TypeDefinitionIndex = 13243;

	class StatusProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* _runningStatusList_k__BackingField; // 0x10
		::System::Int32 _CrowdControlCount_k__BackingField; // 0x18
		::System::Int32 _CrowdControlDuration_k__BackingField; // 0x1C
		Il2CppObject* _StatusSet_k__BackingField; // 0x20
		Il2CppObject* _permanentStatusList_k__BackingField; // 0x28
		Il2CppObject* _addedStatus_k__BackingField; // 0x30
		Il2CppObject* _markRemoveList_k__BackingField; // 0x38
		Il2CppObject* _expiredList_k__BackingField; // 0x40
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _owner_k__BackingField; // 0x48
		StatusComparer* _comparer_k__BackingField; // 0x50
		Il2CppObject* _statusExecutionTable_k__BackingField; // 0x58

		Il2CppObject* get_RuntimeStatus()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_RUNTIMESTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* get_runningStatusList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_RUNNINGSTATUSLIST_OFFSET))(nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_FIND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindAll(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_FINDALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CrowdControlCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_CROWDCONTROLCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CrowdControlCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SET_CROWDCONTROLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CrowdControlDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_CROWDCONTROLDURATION_OFFSET))(nullptr);
		}

		::System::Void set_CrowdControlDuration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SET_CROWDCONTROLDURATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_ForceActionStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_FORCEACTIONSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusSet()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_STATUSSET_OFFSET))(nullptr);
		}

		Il2CppObject* get_permanentStatusList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_PERMANENTSTATUSLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_addedStatus()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_ADDEDSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* get_markRemoveList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_MARKREMOVELIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_expiredList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_EXPIREDLIST_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_owner()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_OWNER_OFFSET))(nullptr);
		}

		StatusComparer* get_comparer()
		{
			return ((StatusComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_COMPARER_OFFSET))(nullptr);
		}

		Il2CppObject* get_statusExecutionTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GET_STATUSEXECUTIONTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCategoryCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MatchesAny(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_MATCHESANY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CountMatches(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_COUNTMATCHES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnableDying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ENABLEDYING_OFFSET))(nullptr);
		}

		::System::Void DisableDying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_DISABLEDYING_OFFSET))(nullptr);
		}

		::System::Void SetPermanentStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_SETPERMANENTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void RemoveExpired(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveByLogicEffectGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEBYLOGICEFFECTGROUPID_OFFSET))(str, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasPermanentStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASPERMANENTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLatestRunningStatus(::MX::Logic::BattleEntities::HeroStatus* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_TRYGETLATESTRUNNINGSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllRunningStatuses(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_GETALLRUNNINGSTATUSES_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAllCrowdControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_REMOVEALLCROWDCONTROL_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyAdd(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_APPLYADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ApplyRemove(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_APPLYREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyLogicEffectExpired(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_NOTIFYLOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnterExecution(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ENTEREXECUTION_OFFSET))(arg, nullptr);
		}

		::System::Void LeaveExecution(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_LEAVEEXECUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* IsValidImmuneTargetStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_ISVALIDIMMUNETARGETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCrowdControlWithoutDeath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASCROWDCONTROLWITHOUTDEATH_OFFSET))(nullptr);
		}

		::System::Boolean HasForcedActionStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSPROCESSOR_HASFORCEDACTIONSTATUS_OFFSET))(nullptr);
		}

	};
}

