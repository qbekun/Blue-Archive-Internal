#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Visual::Battles { class Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e; }
namespace MX::Visual::Battles { class BattleSceneState; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class BattleSetting; }

#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_GROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x1D5DC10)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_GAMESTARTED_OFFSET UNITYSDK_OFFSET(0x1D5DC20)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_ACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D5DC30)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D5DC40)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_GROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x1D5DC50)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D5DC60)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_LOGICCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D5DC70)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_FINDENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D5DC80)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D5DFE0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1D5DFF0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_GAMESTARTED_OFFSET UNITYSDK_OFFSET(0x1D5E0E0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_PAUSEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D5E0F0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_UIBATTLE_OFFSET UNITYSDK_OFFSET(0x1D5E100)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D5E1D0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_SCENEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D5E280)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_PAUSEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D5E290)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_BATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1D5E2A0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1D5E2B0)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_BATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1D5E370)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E380)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_SCENEGAMETIME_OFFSET UNITYSDK_OFFSET(0x1D5E390)
#define MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_CO_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1D5E070)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int MinigameRhythmSceneHandler_TypeDefinitionIndex = 20237;

	class MinigameRhythmSceneHandler : public Il2CppObject
	{
	public:
		::System::Int32 prevFrameInputState; // 0x18
		::System::Int32 currFrameInputState; // 0x1C
		::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23* logicComponent; // 0x20
		::MX::Visual::Battles::BattleActorComponent* actorComponent; // 0x28
		::System::Boolean _PauseUpdate_k__BackingField; // 0x30
		::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* _SceneGameTime_k__BackingField; // 0x38
		Il2CppObject* subScenes; // 0x40
		::MX::Visual::Battles::BattleSceneState* previousState; // 0x48
		::MX::Visual::Battles::BattleSceneState* currentState; // 0x4C
		GroundCamera* _GroundCamera_k__BackingField; // 0x50
		UIBattle* uiBattle; // 0x58
		::System::Boolean _GameStarted_k__BackingField; // 0x60
		::System::Boolean _Initialized_k__BackingField; // 0x61

		GroundCamera* get_GroundCamera()
		{
			return (return (GroundCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_GROUNDCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean get_GameStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_GAMESTARTED_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleActorComponent* get_ActorComponent()
		{
			return (return (::MX::Visual::Battles::BattleActorComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_ACTORCOMPONENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_GroundCamera(GroundCamera* arg)
		{
			((::System::Void(*)(GroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_GROUNDCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23* get_LogicComponent()
		{
			return (return (::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_LOGICCOMPONENT_OFFSET))(nullptr);
		}

		EntityVisual* FindEntityVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (EntityVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_FINDENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void StartGame(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_STARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameStarted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_GAMESTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_PauseUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_PAUSEUPDATE_OFFSET))(arg, nullptr);
		}

		UIBattle* get_UIBattle()
		{
			return (return (UIBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_UIBATTLE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* get_SceneGameTime()
		{
			return (return (::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_SCENEGAMETIME_OFFSET))(nullptr);
		}

		::System::Boolean get_PauseUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_PAUSEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_BattleState(::MX::Visual::Battles::BattleSceneState* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_BATTLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_START_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleSceneState* get_BattleState()
		{
			return (return (::MX::Visual::Battles::BattleSceneState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_GET_BATTLESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SceneGameTime(::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::Oede24a5ccf99f226839033e65e5bfdc8f1be1c2ed422092811678caad956b59e*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_SET_SCENEGAMETIME_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_StartGame(::MX::Logic::Data::BattleSetting* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MINIGAMERHYTHMSCENEHANDLER_CO_STARTGAME_OFFSET))(arg, nullptr);
		}

	};
}

