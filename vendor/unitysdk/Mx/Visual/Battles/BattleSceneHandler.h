#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Visual::Battles { class Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e; }
namespace MX::Visual::Battles { class BattleSceneState; }
namespace MX::Visual::Battles { class BattleResultSkipType; }
namespace MX::Visual::Battles { class SkillBulletTimeProcess; }
namespace FlatData { class BulletTimeType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Logic::Battles { class BattleEndType; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles::EventSnapshot { class BattleEventSnapshot; }
namespace MX::Logic::Data { class BattleSetting; }

#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCEINPUT_OFFSET UNITYSDK_OFFSET(0x1D73640)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D73650)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GETVICTORYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D73660)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ISBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D73790)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x1D737A0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCELOGIC_OFFSET UNITYSDK_OFFSET(0x1D737E0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D73820)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1D73B30)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLEGROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x1D73B40)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_EXCESSIVETOUCHCHECK_OFFSET UNITYSDK_OFFSET(0x1D73B50)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_PLAYERHASSURVIVOR_OFFSET UNITYSDK_OFFSET(0x1D73B60)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x1D73B90)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_CANCELBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D73BA0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCEPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1D73BC0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C70)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1D73CF0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_DISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D73D50)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLERESULTSKIPTYPE_OFFSET UNITYSDK_OFFSET(0x1D73D60)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x1D73D70)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_FRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0x1D73DA0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_DISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D73DD0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_SCENEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D73DE0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_LOGICFRAME_OFFSET UNITYSDK_OFFSET(0x1D73DF0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1D73E20)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D741D0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_EXCESSIVETOUCHCHECK_OFFSET UNITYSDK_OFFSET(0x1D74A70)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ENDTYPE_OFFSET UNITYSDK_OFFSET(0x1D74A80)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_UIBATTLE_OFFSET UNITYSDK_OFFSET(0x1D73A60)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCESUBSCENE_OFFSET UNITYSDK_OFFSET(0x1D744B0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_SCENEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D74AB0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_PAUSEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D74AC0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_STARTBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D74AE0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D74D30)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_FINDENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D74E20)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_LOGICCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D74E30)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_PROCESSPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1D73C30)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLEGROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x1D74E40)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_PAUSEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D74E50)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1D74E60)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_RESUMEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D74F80)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_SELECTEDSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1D74FB0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_TRANSITSUBSCENE_OFFSET UNITYSDK_OFFSET(0x1D74280)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D74FC0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_CO_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1D74EF0)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_INITSUBSCENE_OFFSET UNITYSDK_OFFSET(0x1D75070)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_PAUSEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D75C70)
#define MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCELOGICTO_OFFSET UNITYSDK_OFFSET(0x1D75C80)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int BattleSceneHandler_TypeDefinitionIndex = 20304;

	class BattleSceneHandler : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23* logicComponent; // 0x18
		::MX::Visual::Battles::BattleActorComponent* actorComponent; // 0x20
		::System::Boolean _PauseUpdate_k__BackingField; // 0x28
		::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* _SceneGameTime_k__BackingField; // 0x30
		Il2CppObject* previousStateQueue; // 0x38
		::MX::Visual::Battles::BattleSceneState* currentState; // 0x40
		::System::Boolean _DisableInteraction_k__BackingField; // 0x44
		Il2CppObject* subScenes; // 0x48
		BattleGroundCamera* _BattleGroundCamera_k__BackingField; // 0x50
		::MX::Visual::Battles::BattleResultSkipType* _BattleResultSkipType_k__BackingField; // 0x58
		UIBattle* uiBattle; // 0x60
		ExcessiveTouchCheck* _ExcessiveTouchCheck_k__BackingField; // 0x68
		::MX::Visual::Battles::SkillBulletTimeProcess* skillBulletTimeProcess; // 0x70

		::System::Void AdvanceInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCEINPUT_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleActorComponent* get_ActorComponent()
		{
			return (return (::MX::Visual::Battles::BattleActorComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ACTORCOMPONENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetVictoryInteraction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GETVICTORYINTERACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBulletTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ISBULLETTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

		::System::Void AdvanceLogic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCELOGIC_OFFSET))(nullptr);
		}

		::System::Void EndBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ENDBULLETTIME_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleSceneState* get_BattleState()
		{
			return (return (::MX::Visual::Battles::BattleSceneState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLESTATE_OFFSET))(nullptr);
		}

		BattleGroundCamera* get_BattleGroundCamera()
		{
			return (return (BattleGroundCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLEGROUNDCAMERA_OFFSET))(nullptr);
		}

		ExcessiveTouchCheck* get_ExcessiveTouchCheck()
		{
			return (return (ExcessiveTouchCheck*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_EXCESSIVETOUCHCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_PlayerHasSurvivor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_PLAYERHASSURVIVOR_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleResultSkipType* get_BattleResultSkipType()
		{
			return (return (::MX::Visual::Battles::BattleResultSkipType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLERESULTSKIPTYPE_OFFSET))(nullptr);
		}

		::System::Void CancelBulletTime(::FlatData::BulletTimeType* arg)
		{
			((::System::Void(*)(::FlatData::BulletTimeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_CANCELBULLETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void AdvancePresentation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCEPRESENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BattleState(::MX::Visual::Battles::BattleSceneState* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisableInteraction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_DISABLEINTERACTION_OFFSET))(nullptr);
		}

		::System::Void set_BattleResultSkipType(::MX::Visual::Battles::BattleResultSkipType* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleResultSkipType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLERESULTSKIPTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return (return (::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_FramePerSecond()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_FRAMEPERSECOND_OFFSET))(nullptr);
		}

		::System::Void set_DisableInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_DISABLEINTERACTION_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* get_SceneGameTime()
		{
			return (return (::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_SCENEGAMETIME_OFFSET))(nullptr);
		}

		::System::Int32 get_LogicFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_LOGICFRAME_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_ExcessiveTouchCheck(ExcessiveTouchCheck* arg)
		{
			((::System::Void(*)(ExcessiveTouchCheck*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_EXCESSIVETOUCHCHECK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::BattleEndType* get_EndType()
		{
			return (return (::MX::Logic::Battles::BattleEndType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_ENDTYPE_OFFSET))(nullptr);
		}

		UIBattle* get_UIBattle()
		{
			return (return (UIBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_UIBATTLE_OFFSET))(nullptr);
		}

		::System::Void AdvanceSubScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCESUBSCENE_OFFSET))(nullptr);
		}

		::System::Void set_SceneGameTime(::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_SCENEGAMETIME_OFFSET))(arg, nullptr);
		}

		::System::Void PauseGameTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_PAUSEGAMETIME_OFFSET))(nullptr);
		}

		::System::Void StartBulletTime(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_STARTBULLETTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		EntityVisual* FindEntityVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (EntityVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_FINDENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23* get_LogicComponent()
		{
			return (return (::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_LOGICCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void ProcessPresentation(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_PROCESSPRESENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleGroundCamera(BattleGroundCamera* arg)
		{
			((::System::Void(*)(BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_BATTLEGROUNDCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void set_PauseUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_SET_PAUSEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void StartGame(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_STARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Void ResumeGameTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_RESUMEGAMETIME_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedSkillIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_SELECTEDSKILLINDEX_OFFSET))(nullptr);
		}

		::System::Void TransitSubScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_TRANSITSUBSCENE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_StartGame(::MX::Logic::Data::BattleSetting* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_CO_STARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Void InitSubScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_INITSUBSCENE_OFFSET))(nullptr);
		}

		::System::Boolean get_PauseUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_GET_PAUSEUPDATE_OFFSET))(nullptr);
		}

		::System::Void AdvanceLogicTo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLESCENEHANDLER_ADVANCELOGICTO_OFFSET))(arg, nullptr);
		}

	};
}

