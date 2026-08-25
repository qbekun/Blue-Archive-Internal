#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG::Visual { class CCGObjectPoolManager; }
namespace MX::MinigameCCG::Visual { class CCGInputController; }
namespace MX::MinigameCCG::Visual { class CCGVisualPlayerCard; }
namespace MX::MinigameCCG::Visual { class CCGDeckManager; }
namespace MX::MinigameCCG::Visual { class CCGGrid; }
namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG::UI { class CCGToastInfo; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameCCG { class ILogData; }
namespace MX::MinigameCCG::UI { class CCGToastPosition; }
namespace MX::MinigameCCG::UI { class CCGToastLifetime; }

#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_REFRESHHEALTHINFO_OFFSET UNITYSDK_OFFSET(0x1E89610)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GETSTRIKERS_OFFSET UNITYSDK_OFFSET(0x1E89780)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SETHIGHLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E82770)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1E89850)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ENEMYVFXAREA_OFFSET UNITYSDK_OFFSET(0x1E89FE0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_HUD_OFFSET UNITYSDK_OFFSET(0x1E89FF0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PREVIEWPOSITION_OFFSET UNITYSDK_OFFSET(0x1E8A090)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0C0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_RESETENTITIESPOSITION_OFFSET UNITYSDK_OFFSET(0x1E84200)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SETSPAWNSTRIKER_OFFSET UNITYSDK_OFFSET(0x1E8A1D0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_CLOSEALLCARDINTERACTIONUI_OFFSET UNITYSDK_OFFSET(0x1E82EB0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_HIDETOAST_OFFSET UNITYSDK_OFFSET(0x1E8A2B0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_RENDERLAYERVALUE_OFFSET UNITYSDK_OFFSET(0x1E8A370)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8A380)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8A390)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_FLOATMESSAGETOAST_OFFSET UNITYSDK_OFFSET(0x1E8A3B0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_HIDEMESSAGETOAST_OFFSET UNITYSDK_OFFSET(0x1E8A2C0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ALLYVFXAREA_OFFSET UNITYSDK_OFFSET(0x1E8A470)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GETVISUALENTITIESBYID_OFFSET UNITYSDK_OFFSET(0x1E898E0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E8A480)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SET_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8A5D0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1E8A5F0)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GLOBALVFXAREA_OFFSET UNITYSDK_OFFSET(0x1E8A600)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ZONECARD_OFFSET UNITYSDK_OFFSET(0x1E87030)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1E88D30)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1E8A610)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_TRYGETVISUALENTITY_OFFSET UNITYSDK_OFFSET(0x1E83F60)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x1E8A620)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_COST_OFFSET UNITYSDK_OFFSET(0x1E8A730)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_LOGDATAS_OFFSET UNITYSDK_OFFSET(0x1E8A740)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SET_COST_OFFSET UNITYSDK_OFFSET(0x1E8A750)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_ADDLOGDATA_OFFSET UNITYSDK_OFFSET(0x1E8A760)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_FLOATTOAST_OFFSET UNITYSDK_OFFSET(0x1E8A810)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1E8A900)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PREVIEWGRID_OFFSET UNITYSDK_OFFSET(0x1E8A910)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_UPDATEENTITIESPOSITION_OFFSET UNITYSDK_OFFSET(0x1E89B70)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_HAND_OFFSET UNITYSDK_OFFSET(0x1E8A920)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAMECAMERA_OFFSET UNITYSDK_OFFSET(0x1E8A930)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_INPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1E8A940)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_RELEASEMANAGER_OFFSET UNITYSDK_OFFSET(0x1E8A950)
#define MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_TRYGETVISUALENTITISE_OFFSET UNITYSDK_OFFSET(0x1E8A990)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGCardManager_TypeDefinitionIndex = 21171;

	class CCGCardManager : public ::ToyWebViewShared::Messages::NotifyConsoleMessage
	{
	public:
		::UnityEngine::Camera* gameCamera; // 0x20
		::MX::MinigameCCG::Visual::CCGFlowProcessor* flowProcessor; // 0x28
		::MX::MinigameCCG::Visual::CCGObjectPoolManager* poolManager; // 0x30
		::MX::MinigameCCG::Visual::CCGInputController* inputController; // 0x38
		::MX::MinigameCCG::Visual::CCGVisualPlayerCard* playerCardZone; // 0x40
		::MX::MinigameCCG::Visual::CCGVisualPlayerCard* enemyCardZone; // 0x48
		::MX::MinigameCCG::Visual::CCGDeckManager* deck; // 0x50
		CCGHandManager* hand; // 0x58
		::MX::MinigameCCG::Visual::CCGGrid* previewGrid; // 0x60
		::UnityEngine::Transform* previewPositionTr; // 0x68
		::UnityEngine::Transform* globalVFXArea; // 0x70
		::UnityEngine::Transform* enemyVFXArea; // 0x78
		::UnityEngine::Transform* allyVFXArea; // 0x80
		Il2CppObject* positionDatas; // 0x88
		::MX::MinigameCCG::UI::CCGToastInfo* toastInfo; // 0x90
		Il2CppObject* logDatas; // 0x98
		::System::Action* _OnLateUpdate_k__BackingField; // 0xA0
		::System::Int32 _Cost_k__BackingField; // 0xA8

		::System::Void RefreshHealthInfo(::MX::MinigameCCG::EventHealthChange* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_REFRESHHEALTHINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStrikers(::MX::MinigameCCG::CCGPlayer* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GETSTRIKERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetHighlightEntities(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SETHIGHLIGHTENTITIES_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAME_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_EnemyVFXArea()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ENEMYVFXAREA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_InGame_HUD* get_HUD()
		{
			return (return (::MX::MinigameCCG::UI::UICardGame_InGame_HUD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_HUD_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PreviewPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PREVIEWPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetEntitiesPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_RESETENTITIESPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetSpawnStriker(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SETSPAWNSTRIKER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseAllCardInteractionUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_CLOSEALLCARDINTERACTIONUI_OFFSET))(nullptr);
		}

		::System::Void HideToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_HIDETOAST_OFFSET))(nullptr);
		}

		::System::Single get_renderLayerValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_RENDERLAYERVALUE_OFFSET))(nullptr);
		}

		::System::Action* get_OnLateUpdate()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ONLATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void FloatMessageToast(::MX::MinigameCCG::UI::CCGToastInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_FLOATMESSAGETOAST_OFFSET))(arg, nullptr);
		}

		::System::Void HideMessageToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_HIDEMESSAGETOAST_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_AllyVFXArea()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ALLYVFXAREA_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisualEntitiesById(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GETVISUALENTITIESBYID_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_OnLateUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SET_ONLATEUPDATE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGDeckManager* get_Deck()
		{
			return (return (::MX::MinigameCCG::Visual::CCGDeckManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_DECK_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_GlobalVFXArea()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GLOBALVFXAREA_OFFSET))(nullptr);
		}

		CCGVisualZoneCard* get_ZoneCard()
		{
			return (return (CCGVisualZoneCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_ZONECARD_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAME_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::CCGFlowProcessor* get_Processor()
		{
			return (return (::MX::MinigameCCG::Visual::CCGFlowProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PROCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetVisualEntity(::System::Int32 arg, CCGVisualEntity&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, CCGVisualEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_TRYGETVISUALENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RefreshAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_REFRESHALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Cost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_COST_OFFSET))(nullptr);
		}

		Il2CppObject* get_LogDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_LOGDATAS_OFFSET))(nullptr);
		}

		::System::Void set_Cost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_SET_COST_OFFSET))(arg, nullptr);
		}

		::System::Void AddLogData(::MX::MinigameCCG::ILogData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ILogData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_ADDLOGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void FloatToast(::MX::MinigameCCG::UI::CCGToastPosition* arg, ::MX::MinigameCCG::UI::CCGToastLifetime* arg, ::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGToastPosition*, ::MX::MinigameCCG::UI::CCGToastLifetime*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_FLOATTOAST_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGObjectPoolManager* get_Pool()
		{
			return (return (::MX::MinigameCCG::Visual::CCGObjectPoolManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_POOL_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::CCGGrid* get_PreviewGrid()
		{
			return (return (::MX::MinigameCCG::Visual::CCGGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_PREVIEWGRID_OFFSET))(nullptr);
		}

		::System::Void UpdateEntitiesPosition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_UPDATEENTITIESPOSITION_OFFSET))(arg, nullptr);
		}

		CCGHandManager* get_Hand()
		{
			return (return (CCGHandManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_HAND_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_GameCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_GAMECAMERA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::CCGInputController* get_InputController()
		{
			return (return (::MX::MinigameCCG::Visual::CCGInputController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_GET_INPUTCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void ReleaseManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_RELEASEMANAGER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetVisualEntitise(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCARDMANAGER_TRYGETVISUALENTITISE_OFFSET))(arg, arg, nullptr);
		}

	};
}

