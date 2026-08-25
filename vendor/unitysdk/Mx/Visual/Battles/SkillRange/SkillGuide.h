#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class SkillVisualDAO; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector3; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideProcess; }
namespace MX::Visual::Battles { class SkillBulletTimeProcess; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace UnityEngine { class Vector2; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace UnityEngine { class Transform; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideTransformInfo; }
namespace MX::Logic::Battles { class O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLACTION_OFFSET UNITYSDK_OFFSET(0x1D97CE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLVISUALDATA_OFFSET UNITYSDK_OFFSET(0x1D97D10)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_SKILLVISUALDATA_OFFSET UNITYSDK_OFFSET(0x1D97D20)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_BATTLETASK_OFFSET UNITYSDK_OFFSET(0x1D97D30)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_BATTLETASK_OFFSET UNITYSDK_OFFSET(0x1D97D40)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLCARD_OFFSET UNITYSDK_OFFSET(0x1D97D50)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_SKILLCARD_OFFSET UNITYSDK_OFFSET(0x1D97D60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x1D97D70)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x1D97D80)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1D97D90)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1D97DA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_MAINPROCESS_OFFSET UNITYSDK_OFFSET(0x1D97DB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_PREVPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97DC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_PREVPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97DE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_CURBUDGET_OFFSET UNITYSDK_OFFSET(0x1D97E40)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_CURBUDGET_OFFSET UNITYSDK_OFFSET(0x1D97E50)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_VISUALPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97E60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_VISUALPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97EA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_VISUALFORWARD_OFFSET UNITYSDK_OFFSET(0x1D97EE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_VISUALFORWARD_OFFSET UNITYSDK_OFFSET(0x1D97F20)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_LOGICPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97F60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_LOGICPOSITION_OFFSET UNITYSDK_OFFSET(0x1D97F80)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_LOGICFORWARD_OFFSET UNITYSDK_OFFSET(0x1D97F90)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_LOGICFORWARD_OFFSET UNITYSDK_OFFSET(0x1D97FB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1D82810)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_INPUT2D_OFFSET UNITYSDK_OFFSET(0x1D97FC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1D98000)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D82600)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D98180)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_INIT_OFFSET UNITYSDK_OFFSET(0x1D98190)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_REALESE_OFFSET UNITYSDK_OFFSET(0x1D9A8E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1D9B050)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_APPLYTRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0x1D9B710)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1D9B9F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D9BA20)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATEMAINPROCESSTRASNFORM_OFFSET UNITYSDK_OFFSET(0x1D9D080)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESELECTABLEPROCESSTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D9D410)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESKILLRANGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D9DBC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESELECTABLESKILLGUIDE_OFFSET UNITYSDK_OFFSET(0x1D86160)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETMAINTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D9DE10)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETSELECTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1D84E20)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETSELECTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1D826A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D84F50)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATESKILLGUIDEPROCESSLIST_OFFSET UNITYSDK_OFFSET(0x1D985C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATEADDITIONALGUIDES_OFFSET UNITYSDK_OFFSET(0x1D99220)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_INITIALIZESELECTABLEEX_OFFSET UNITYSDK_OFFSET(0x1D99B40)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_MAKEPROCESS_OFFSET UNITYSDK_OFFSET(0x1D9DFA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_ENABLEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D9DD80)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SETCHARACTERHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1D9BD60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATESKILLGUIDE_OFFSET UNITYSDK_OFFSET(0x1D83460)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E890)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA50)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE__APPLYTRANSFORMINFO_B__75_0_OFFSET UNITYSDK_OFFSET(0x1D9EAD0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE__GETTARGETLIST_B__85_0_OFFSET UNITYSDK_OFFSET(0x1D9EBB0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuide_TypeDefinitionIndex = 20393;

	class SkillGuide : public Il2CppObject
	{
	public:
		::MX::AppData::DAO::Battle::SkillVisualDAO* _SkillVisualData_k__BackingField; // 0x18
		MXBattleTask* _BattleTask_k__BackingField; // 0x20
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* _SkillCard_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x30
		::System::Boolean _Dirty_k__BackingField; // 0x38
		AsyncHandler* SkillRangeIndicator; // 0x40
		::UnityEngine::Vector3* InvalidPosition; // 0x0
		::UnityEngine::Vector3* pos; // 0x48
		::UnityEngine::Vector3* prevForward; // 0x54
		::System::Int32 curBudget; // 0x60
		::UnityEngine::Vector3* _LogicPosition_k__BackingField; // 0x64
		::UnityEngine::Vector3* _LogicForward_k__BackingField; // 0x70
		::MX::Visual::Battles::SkillRange::SkillGuideProcess* mainProcess; // 0x80
		Il2CppObject* processList; // 0x88
		Il2CppObject* additionalSkillGuides; // 0x90
		Il2CppObject* selectableExMainProcess; // 0x98
		Il2CppObject* selectableExProcessList; // 0xA0
		Il2CppObject* selectableSkillGuides; // 0xA8
		Il2CppObject* selectableAdditionalSkillGuides; // 0xB0
		Il2CppObject* asyncHandlersToRelease; // 0xB8
		Il2CppObject* subComponents; // 0xC0
		::MX::Visual::Battles::SkillBulletTimeProcess* skillBulletTimeProcessor; // 0xC8
		::FlatData::BulletType* bulletType; // 0xD0

		::MX::Logic::Actions::IActiveSkill* get_SkillAction()
		{
			return (return (::MX::Logic::Actions::IActiveSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLACTION_OFFSET))(nullptr);
		}

		::MX::AppData::DAO::Battle::SkillVisualDAO* get_SkillVisualData()
		{
			return (return (::MX::AppData::DAO::Battle::SkillVisualDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLVISUALDATA_OFFSET))(nullptr);
		}

		::System::Void set_SkillVisualData(::MX::AppData::DAO::Battle::SkillVisualDAO* arg)
		{
			((::System::Void(*)(::MX::AppData::DAO::Battle::SkillVisualDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_SKILLVISUALDATA_OFFSET))(arg, nullptr);
		}

		MXBattleTask* get_BattleTask()
		{
			return (return (MXBattleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_BATTLETASK_OFFSET))(nullptr);
		}

		::System::Void set_BattleTask(MXBattleTask* arg)
		{
			((::System::Void(*)(MXBattleTask*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_BATTLETASK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* get_SkillCard()
		{
			return (return (::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_SKILLCARD_OFFSET))(nullptr);
		}

		::System::Void set_SkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_SKILLCARD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return (return (::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_EXECUTER_OFFSET))(nullptr);
		}

		::System::Void set_Executer(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_EXECUTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_DIRTY_OFFSET))(nullptr);
		}

		::System::Void set_Dirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_DIRTY_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::SkillRange::SkillGuideProcess* get_MainProcess()
		{
			return (return (::MX::Visual::Battles::SkillRange::SkillGuideProcess*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_MAINPROCESS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PrevPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_PREVPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_PrevPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_PREVPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurBudget()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_CURBUDGET_OFFSET))(nullptr);
		}

		::System::Void set_CurBudget(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_CURBUDGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_VisualPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_VISUALPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_VisualPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_VISUALPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_VisualForward()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_VISUALFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_VisualForward(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_VISUALFORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_LogicPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_LOGICPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_LogicPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_LOGICPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_LogicForward()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_LOGICFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_LogicForward(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SET_LOGICFORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Input()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_INPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Input2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_INPUT2D_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::SkillRange::SkillGuideState* get_CurrentState()
		{
			return (return (::MX::Visual::Battles::SkillRange::SkillGuideState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean CanUseSkillAndFinalGuideTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::Visual::Battles::SkillBulletTimeProcess* arg, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::MX::AppData::DAO::Battle::SkillVisualDAO* arg, AsyncLoadValidator* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillBulletTimeProcess*, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::MX::AppData::DAO::Battle::SkillVisualDAO*, AsyncLoadValidator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Realese()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_REALESE_OFFSET))(nullptr);
		}

		::System::Void Active(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_ACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyTransformInfo(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_APPLYTRANSFORMINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdatePosition(::UnityEngine::Vector3* arg, ::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATEPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateMainProcessTrasnform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATEMAINPROCESSTRASNFORM_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSelectableProcessTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESELECTABLEPROCESSTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSkillRangePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESKILLRANGEPOSITION_OFFSET))(nullptr);
		}

		::System::Void UpdateSelectableSkillGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_UPDATESELECTABLESKILLGUIDE_OFFSET))(nullptr);
		}

		Il2CppObject* GetMainTargetList(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETMAINTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSelectSkillIndex(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0* arg)
		{
			return (return (::System::Int32(*)(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETSELECTSKILLINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSelectSkillIndex(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETSELECTSKILLINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void CreateSkillGuideProcessList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATESKILLGUIDEPROCESSLIST_OFFSET))(nullptr);
		}

		::System::Void CreateAdditionalGuides()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATEADDITIONALGUIDES_OFFSET))(nullptr);
		}

		::System::Void InitializeSelectableEx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_INITIALIZESELECTABLEEX_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::SkillRange::SkillGuideProcess* MakeProcess(::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg)
		{
			return (return (::MX::Visual::Battles::SkillRange::SkillGuideProcess*(*)(::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_MAKEPROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnableDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_ENABLEDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterHighlight(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_SETCHARACTERHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		AsyncSkillGuideHandler* CreateSkillGuide(::MX::Visual::Battles::SkillBulletTimeProcess* arg, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::MX::Logic::BattleEntities::BattleEntity* arg, Il2CppObject* arg)
		{
			return (return (AsyncSkillGuideHandler*(*)(::MX::Visual::Battles::SkillBulletTimeProcess*, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_CREATESKILLGUIDE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyTransformInfo_b__75_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE__APPLYTRANSFORMINFO_B__75_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetTargetList_b__85_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDE__GETTARGETLIST_B__85_0_OFFSET))(arg, nullptr);
		}

	};
}

