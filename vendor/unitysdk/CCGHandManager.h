#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::Visual { class CCGDeckManager; }
namespace MX::MinigameCCG::Visual { class CCGGrid; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class AnimationAudioEvent; }
class CCGVisualCard;
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD; }

#define CCGHANDMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x26EC1B0)
#define CCGHANDMANAGER_USECARDBYCONTROLLERDIRECTING_OFFSET UNITYSDK_OFFSET(0x26ECA60)
#define CCGHANDMANAGER_REPOSITIONHAND_OFFSET UNITYSDK_OFFSET(0x26ECBE0)
#define CCGHANDMANAGER_ZOOMINOUT_OFFSET UNITYSDK_OFFSET(0x26ED670)
#define CCGHANDMANAGER_GET_GRID_OFFSET UNITYSDK_OFFSET(0x26ED800)
#define CCGHANDMANAGER_TRYUSECARD_OFFSET UNITYSDK_OFFSET(0x26ED810)
#define CCGHANDMANAGER_GETHUDUI_OFFSET UNITYSDK_OFFSET(0x26EDB60)
#define CCGHANDMANAGER__INPUTEVENT_B__44_0_OFFSET UNITYSDK_OFFSET(0x26EDC90)
#define CCGHANDMANAGER_OPENTOOLTIP_OFFSET UNITYSDK_OFFSET(0x26EDCC0)
#define CCGHANDMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x26EDEC0)
#define CCGHANDMANAGER_MOVE_OFFSET UNITYSDK_OFFSET(0x26EDED0)
#define CCGHANDMANAGER_TRYSEARCHTARGET_OFFSET UNITYSDK_OFFSET(0x26EE170)
#define CCGHANDMANAGER_GET_HUD_OFFSET UNITYSDK_OFFSET(0x26ED280)
#define CCGHANDMANAGER_GETHANDCARDS_OFFSET UNITYSDK_OFFSET(0x26EE350)
#define CCGHANDMANAGER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x26EE4B0)
#define CCGHANDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26EE540)
#define CCGHANDMANAGER_TRYCHANGEPENDINGCARD_OFFSET UNITYSDK_OFFSET(0x26EE630)
#define CCGHANDMANAGER_REFRESHCONTROLLERDPADPOINT_OFFSET UNITYSDK_OFFSET(0x26EE790)
#define CCGHANDMANAGER_SETAVAILABLECARDS_OFFSET UNITYSDK_OFFSET(0x26EE8B0)
#define CCGHANDMANAGER_RESTORECARDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x26ED160)
#define CCGHANDMANAGER_TRYUSECARDFORCE_OFFSET UNITYSDK_OFFSET(0x26EEBA0)
#define CCGHANDMANAGER_ENTER_OFFSET UNITYSDK_OFFSET(0x26EED20)
#define CCGHANDMANAGER_CANINPUT_OFFSET UNITYSDK_OFFSET(0x26EEEC0)
#define CCGHANDMANAGER_USEDCARDDIRECTING_OFFSET UNITYSDK_OFFSET(0x26EEFE0)
#define CCGHANDMANAGER_EXIT_OFFSET UNITYSDK_OFFSET(0x26EF160)
#define CCGHANDMANAGER_REPOSITIONOVERLAPPEDCARDS_OFFSET UNITYSDK_OFFSET(0x26ED310)
#define CCGHANDMANAGER__TRYCHANGEPENDINGCARD_B__46_0_OFFSET UNITYSDK_OFFSET(0x26EF2E0)
#define CCGHANDMANAGER_PROCESS_OFFSET UNITYSDK_OFFSET(0x26E7EC0)
#define CCGHANDMANAGER_GET_GRAVEYARD_OFFSET UNITYSDK_OFFSET(0x26EF320)
#define CCGHANDMANAGER_INPUTEVENT_OFFSET UNITYSDK_OFFSET(0x26EC1C0)
#define CCGHANDMANAGER_SETUSEHANDCONTROLLERMAPPING_OFFSET UNITYSDK_OFFSET(0x26EE320)
#define CCGHANDMANAGER__PROCESS_B__25_0_OFFSET UNITYSDK_OFFSET(0x26EF360)
#define CCGHANDMANAGER_OFFUSEHANDMAPPING_OFFSET UNITYSDK_OFFSET(0x26EF330)
#define CCGHANDMANAGER_CACHINGORIGNPOSITIONDATA_OFFSET UNITYSDK_OFFSET(0x26EF370)

	inline static constexpr unsigned int CCGHandManager_TypeDefinitionIndex = 422;

	class CCGHandManager : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Visual::CCGDeckManager* deck; // 0x18
		::MX::MinigameCCG::Visual::CCGGrid* grid; // 0x20
		::UnityEngine::Transform* gridZoomPosition; // 0x28
		::UnityEngine::Vector3* cardZoomPosition; // 0x30
		::Il2CppArray<::System::Object*>* graveyard; // 0x40
		::MX::Audio::AudioPlayer* audioPlayer; // 0x48
		::MX::Audio::AnimationAudioEvent* openAudioEvent; // 0x50
		::MX::Audio::AnimationAudioEvent* closeAudioEvent; // 0x58
		Il2CppObject* cards; // 0x60
		CCGVisualCard* currentCard; // 0x68
		::System::Int32 curPendingCardEntityId; // 0x70
		::UnityEngine::Vector3* gridOrignPosition; // 0x74
		::System::Boolean tryUseCard; // 0x80
		Il2CppObject* copyCanInputEntities; // 0x88
		Il2CppObject* availableEffects; // 0x90
		::System::Boolean isOpenedHandBoard; // 0x98
		::System::Single canUseDistance; // 0x9C
		::System::Single dragAngleThreshold; // 0xA0
		::UnityEngine::Vector3* touchStartPosition; // 0xA4
		::System::Boolean loop; // 0xB0
		::System::Boolean isMove; // 0xB1
		::System::Single verticalDragThreshold; // 0xB4
		Il2CppObject* cardPositionMap; // 0xB8

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* UseCardByControllerDirecting()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_USECARDBYCONTROLLERDIRECTING_OFFSET))(nullptr);
		}

		::System::Void RepositionHand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_REPOSITIONHAND_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ZoomInOut(::System::Boolean arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_ZOOMINOUT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGGrid* get_Grid()
		{
			return ((::MX::MinigameCCG::Visual::CCGGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GET_GRID_OFFSET))(nullptr);
		}

		::System::Boolean TryUseCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_TRYUSECARD_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_InGame_HUD* GetHUDUI()
		{
			return ((::MX::MinigameCCG::UI::UICardGame_InGame_HUD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GETHUDUI_OFFSET))(nullptr);
		}

		::System::Boolean _InputEvent_b__44_0(CCGVisualCard* arg)
		{
			return ((::System::Boolean(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER__INPUTEVENT_B__44_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenTooltip(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_OPENTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Move(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySearchTarget(CCGVisualCard&* arg)
		{
			return ((::System::Boolean(*)(CCGVisualCard&*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_TRYSEARCHTARGET_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_InGame_HUD* get_HUD()
		{
			return ((::MX::MinigameCCG::UI::UICardGame_InGame_HUD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GET_HUD_OFFSET))(nullptr);
		}

		Il2CppObject* GetHandCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GETHANDCARDS_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_cancellationToken()
		{
			return ((::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryChangePendingCard(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_TRYCHANGEPENDINGCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshControllerDpadPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_REFRESHCONTROLLERDPADPOINT_OFFSET))(nullptr);
		}

		::System::Void SetAvailableCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_SETAVAILABLECARDS_OFFSET))(nullptr);
		}

		::System::Void RestoreCardPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_RESTORECARDPOSITIONS_OFFSET))(nullptr);
		}

		::System::Boolean TryUseCardForce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_TRYUSECARDFORCE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Enter(CCGVisualCard* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_CANINPUT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* UsedCardDirecting()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_USEDCARDDIRECTING_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Exit()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_EXIT_OFFSET))(nullptr);
		}

		::System::Void RepositionOverlappedCards(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_REPOSITIONOVERLAPPEDCARDS_OFFSET))(arg, nullptr);
		}

		::System::Void _TryChangePendingCard_b__46_0(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER__TRYCHANGEPENDINGCARD_B__46_0_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Process(CCGVisualCard* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_PROCESS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Graveyard()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_GET_GRAVEYARD_OFFSET))(nullptr);
		}

		::System::Void InputEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_INPUTEVENT_OFFSET))(nullptr);
		}

		::System::Void SetUseHandControllerMapping(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_SETUSEHANDCONTROLLERMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Process_b__25_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER__PROCESS_B__25_0_OFFSET))(nullptr);
		}

		::System::Void OffUseHandMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_OFFUSEHANDMAPPING_OFFSET))(nullptr);
		}

		::System::Void CachingOrignPositionData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CCGHANDMANAGER_CACHINGORIGNPOSITIONDATA_OFFSET))(arg, nullptr);
		}

	};

