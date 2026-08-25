#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class PlayerInputManager; }
namespace UnityEngine::InputSystem { class PlayerNotifications; }
namespace UnityEngine::InputSystem { class PlayerJoinBehavior; }
namespace UnityEngine::InputSystem { class InputActionProperty; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::InputSystem { class PlayerInput; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x9F1F960)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_SPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x9F1F970)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAINTAINASPECTRATIOINSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x9F20620)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_FIXEDNUMBEROFSPLITSCREENS_OFFSET UNITYSDK_OFFSET(0x9F20630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREENAREA_OFFSET UNITYSDK_OFFSET(0x9F20640)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9F20650)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9F206A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOININGENABLED_OFFSET UNITYSDK_OFFSET(0x9F206B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F206C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F206D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINACTION_OFFSET UNITYSDK_OFFSET(0x9F209F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINACTION_OFFSET UNITYSDK_OFFSET(0x9F20A10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F20AC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F20AD0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERJOINEDEVENT_OFFSET UNITYSDK_OFFSET(0x9F20AE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERLEFTEVENT_OFFSET UNITYSDK_OFFSET(0x9F20BB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x9F20C80)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x9F20D20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x9F20DC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x9F20E60)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x9F20F00)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_PLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x9F20F10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9F20F20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9F20F60)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ENABLEJOINING_OFFSET UNITYSDK_OFFSET(0x9F207F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_DISABLEJOINING_OFFSET UNITYSDK_OFFSET(0x9F20710)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMUI_OFFSET UNITYSDK_OFFSET(0x9F20FC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTION_OFFSET UNITYSDK_OFFSET(0x9F21310)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTIONIFNOTALREADYJOINED_OFFSET UNITYSDK_OFFSET(0x9F21460)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET UNITYSDK_OFFSET(0x9F213C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET UNITYSDK_OFFSET(0x9F21590)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MESSAGES_OFFSET UNITYSDK_OFFSET(0x9F21630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_CHECKIFPLAYERCANJOIN_OFFSET UNITYSDK_OFFSET(0x9F21020)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x9F21740)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F21D70)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F221A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_UPDATESPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x9F1FCE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ISDEVICEUSABLEWITHPLAYERACTIONS_OFFSET UNITYSDK_OFFSET(0x9F21840)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_VALIDATEINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x9F20FB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERJOINED_OFFSET UNITYSDK_OFFSET(0x9F1D950)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERLEFT_OFFSET UNITYSDK_OFFSET(0x9F1E3C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F22280)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_TypeDefinitionIndex = 28566;

	class PlayerInputManager : public Il2CppObject
	{
	public:
		::System::String* PlayerJoinedMessage; // 0x0
		::System::String* PlayerLeftMessage; // 0x0
		::UnityEngine::InputSystem::PlayerInputManager* _instance_k__BackingField; // 0x0
		::UnityEngine::InputSystem::PlayerNotifications* m_NotificationBehavior; // 0x18
		::System::Int32 m_MaxPlayerCount; // 0x1C
		::System::Boolean m_AllowJoining; // 0x20
		::UnityEngine::InputSystem::PlayerJoinBehavior* m_JoinBehavior; // 0x24
		PlayerJoinedEvent* m_PlayerJoinedEvent; // 0x28
		PlayerLeftEvent* m_PlayerLeftEvent; // 0x30
		::UnityEngine::InputSystem::InputActionProperty* m_JoinAction; // 0x38
		::UnityEngine::GameObject* m_PlayerPrefab; // 0x50
		::System::Boolean m_SplitScreen; // 0x58
		::System::Boolean m_MaintainAspectRatioInSplitScreen; // 0x59
		::System::Int32 m_FixedNumberOfSplitScreens; // 0x5C
		::UnityEngine::Rect* m_SplitScreenRect; // 0x60
		::System::Boolean m_JoinActionDelegateHooked; // 0x70
		::System::Boolean m_UnpairedDeviceUsedDelegateHooked; // 0x71
		Il2CppObject* m_JoinActionDelegate; // 0x78
		Il2CppObject* m_UnpairedDeviceUsedDelegate; // 0x80
		Il2CppObject* m_PlayerJoinedCallbacks; // 0x88
		Il2CppObject* m_PlayerLeftCallbacks; // 0xD8

		::System::Boolean get_splitScreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREEN_OFFSET))(nullptr);
		}

		::System::Void set_splitScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_SPLITSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_maintainAspectRatioInSplitScreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAINTAINASPECTRATIOINSPLITSCREEN_OFFSET))(nullptr);
		}

		::System::Int32 get_fixedNumberOfSplitScreens()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_FIXEDNUMBEROFSPLITSCREENS_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_splitScreenArea()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_SPLITSCREENAREA_OFFSET))(nullptr);
		}

		::System::Int32 get_playerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_maxPlayerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MAXPLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_joiningEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOININGENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::PlayerJoinBehavior* get_joinBehavior()
		{
			return (return (::UnityEngine::InputSystem::PlayerJoinBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerJoinBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_joinAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_JOINACTION_OFFSET))(nullptr);
		}

		::System::Void set_joinAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_JOINACTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerNotifications* get_notificationBehavior()
		{
			return (return (::UnityEngine::InputSystem::PlayerNotifications*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_NOTIFICATIONBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerNotifications*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_NOTIFICATIONBEHAVIOR_OFFSET))(arg, nullptr);
		}

		PlayerJoinedEvent* get_playerJoinedEvent()
		{
			return (return (PlayerJoinedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERJOINEDEVENT_OFFSET))(nullptr);
		}

		PlayerLeftEvent* get_playerLeftEvent()
		{
			return (return (PlayerLeftEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERLEFTEVENT_OFFSET))(nullptr);
		}

		::System::Void add_onPlayerJoined(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERJOINED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onPlayerJoined(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERJOINED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onPlayerLeft(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ADD_ONPLAYERLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onPlayerLeft(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_REMOVE_ONPLAYERLEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_playerPrefab()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_PLAYERPREFAB_OFFSET))(nullptr);
		}

		::System::Void set_playerPrefab(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_PLAYERPREFAB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInputManager* get_instance()
		{
			return (return (::UnityEngine::InputSystem::PlayerInputManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_instance(::UnityEngine::InputSystem::PlayerInputManager* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerInputManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableJoining()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ENABLEJOINING_OFFSET))(nullptr);
		}

		::System::Void DisableJoining()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_DISABLEJOINING_OFFSET))(nullptr);
		}

		::System::Void JoinPlayerFromUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMUI_OFFSET))(nullptr);
		}

		::System::Void JoinPlayerFromAction(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTION_OFFSET))(arg, nullptr);
		}

		::System::Void JoinPlayerFromActionIfNotAlreadyJoined(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYERFROMACTIONIFNOTALREADYJOINED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* JoinPlayer(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* JoinPlayer(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::System::Int32, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_JOINPLAYER_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_messages()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_GET_MESSAGES_OFFSET))(nullptr);
		}

		::System::Boolean CheckIfPlayerCanJoin(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_CHECKIFPLAYERCANJOIN_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONUNPAIREDDEVICEUSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateSplitScreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_UPDATESPLITSCREEN_OFFSET))(nullptr);
		}

		::System::Boolean IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_ISDEVICEUSABLEWITHPLAYERACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateInputActionAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_VALIDATEINPUTACTIONASSET_OFFSET))(nullptr);
		}

		::System::Void NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerInput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERJOINED_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerInput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_NOTIFYPLAYERLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

