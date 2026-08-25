#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class PlayerNotifications; }
namespace UnityEngine::InputSystem::UI { class InputSystemUIInputModule; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::InputSystem { class InputValue; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem::Users { class InputUser; }
namespace UnityEngine::InputSystem { class PlayerInput; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::InputSystem { class InputControlScheme; }
namespace UnityEngine::InputSystem::Users { class InputUserChange; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDeviceChange; }
namespace UnityEngine::InputSystem { class InputControlScheme&; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_INPUTISACTIVE_OFFSET UNITYSDK_OFFSET(0x9F170C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x9F170D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_PLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9F170E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_SPLITSCREENINDEX_OFFSET UNITYSDK_OFFSET(0x9F170F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x9F17100)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x9F177C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F189C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F18C10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F18C20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x9F18C30)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x9F18C40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9F18ED0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9F18EE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9F18F50)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9F18F60)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F18F70)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NOTIFICATIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F18F80)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONEVENTS_OFFSET UNITYSDK_OFFSET(0x9F18FD0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONEVENTS_OFFSET UNITYSDK_OFFSET(0x9F19020)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICELOSTEVENT_OFFSET UNITYSDK_OFFSET(0x9F190A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICEREGAINEDEVENT_OFFSET UNITYSDK_OFFSET(0x9F19170)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CONTROLSCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x9F19240)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F19310)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F193B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICELOST_OFFSET UNITYSDK_OFFSET(0x9F19450)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICELOST_OFFSET UNITYSDK_OFFSET(0x9F194F0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x9F19590)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x9F19630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x9F196D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONCONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x9F19770)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x9F19810)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x9F19820)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_UIINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x9F19830)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_UIINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x9F19840)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_USER_OFFSET UNITYSDK_OFFSET(0x9F199B0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9F199C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F19B10)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ALL_OFFSET UNITYSDK_OFFSET(0x9F19CA0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ISSINGLEPLAYER_OFFSET UNITYSDK_OFFSET(0x9F19D20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x9F18910)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEACTIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x9F19FF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_PASSIVATEINPUT_OFFSET UNITYSDK_OFFSET(0x9F1A020)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1A050)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1A780)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9F19E40)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETPLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0x9F1A930)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_FINDFIRSTPAIREDTODEVICE_OFFSET UNITYSDK_OFFSET(0x9F1AA20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9F1ACA0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9F1B110)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DOINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9F1AE30)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INITIALIZEACTIONS_OFFSET UNITYSDK_OFFSET(0x9F17150)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINITIALIZEACTIONS_OFFSET UNITYSDK_OFFSET(0x9F178C0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTALLONACTIONTRIGGEREDHOOK_OFFSET UNITYSDK_OFFSET(0x9F1B2D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINSTALLONACTIONTRIGGEREDHOOK_OFFSET UNITYSDK_OFFSET(0x9F1B8A0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F1BA60)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CACHEMESSAGENAMES_OFFSET UNITYSDK_OFFSET(0x9F1B4E0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CLEARCACHES_OFFSET UNITYSDK_OFFSET(0x9F17AB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNUSERANDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F17AC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HAVEBINDINGFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F1C550)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNASSIGNUSERANDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F1CAC0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_TRYTOACTIVATECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1C130)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9F1CEE0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F1D100)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F18CF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F18E60)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORDEVICECHANGES_OFFSET UNITYSDK_OFFSET(0x9F1D760)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORDEVICECHANGES_OFFSET UNITYSDK_OFFSET(0x9F1DEB0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F1DF20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEBUGLOGACTION_OFFSET UNITYSDK_OFFSET(0x9F1E4D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICELOST_OFFSET UNITYSDK_OFFSET(0x9F1E530)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICEREGAINED_OFFSET UNITYSDK_OFFSET(0x9F1E630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLECONTROLSCHANGED_OFFSET UNITYSDK_OFFSET(0x9F1D850)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUSERCHANGE_OFFSET UNITYSDK_OFFSET(0x9F1E730)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONPREFILTERUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x9F1E8D0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x9F1EA90)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9F1F460)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCONTROLSCHEMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F1A290)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F630)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F1F650)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_TypeDefinitionIndex = 28563;

	class PlayerInput : public Il2CppObject
	{
	public:
		::System::String* DeviceLostMessage; // 0x0
		::System::String* DeviceRegainedMessage; // 0x0
		::System::String* ControlsChangedMessage; // 0x0
		::UnityEngine::InputSystem::InputActionAsset* m_Actions; // 0x18
		::UnityEngine::InputSystem::PlayerNotifications* m_NotificationBehavior; // 0x20
		::UnityEngine::InputSystem::UI::InputSystemUIInputModule* m_UIInputModule; // 0x28
		DeviceLostEvent* m_DeviceLostEvent; // 0x30
		DeviceRegainedEvent* m_DeviceRegainedEvent; // 0x38
		ControlsChangedEvent* m_ControlsChangedEvent; // 0x40
		::Il2CppArray<::System::Object*>* m_ActionEvents; // 0x48
		::System::Boolean m_NeverAutoSwitchControlSchemes; // 0x50
		::System::String* m_DefaultControlScheme; // 0x58
		::System::String* m_DefaultActionMap; // 0x60
		::System::Int32 m_SplitScreenIndex; // 0x68
		::UnityEngine::Camera* m_Camera; // 0x70
		::UnityEngine::InputSystem::InputValue* m_InputValueObject; // 0x78
		::UnityEngine::InputSystem::InputActionMap* m_CurrentActionMap; // 0x80
		::System::Int32 m_PlayerIndex; // 0x88
		::System::Boolean m_InputActive; // 0x8C
		::System::Boolean m_Enabled; // 0x8D
		::System::Boolean m_ActionsInitialized; // 0x8E
		Il2CppObject* m_ActionMessageNames; // 0x90
		::UnityEngine::InputSystem::Users::InputUser* m_InputUser; // 0x98
		Il2CppObject* m_ActionTriggeredDelegate; // 0xA0
		Il2CppObject* m_DeviceLostCallbacks; // 0xA8
		Il2CppObject* m_DeviceRegainedCallbacks; // 0xF8
		Il2CppObject* m_ControlsChangedCallbacks; // 0x148
		Il2CppObject* m_ActionTriggeredCallbacks; // 0x198
		Il2CppObject* m_UnpairedDeviceUsedDelegate; // 0x1E8
		Il2CppObject* m_PreFilterUnpairedDeviceUsedDelegate; // 0x1F0
		::System::Boolean m_OnUnpairedDeviceUsedHooked; // 0x1F8
		Il2CppObject* m_DeviceChangeDelegate; // 0x200
		::System::Boolean m_OnDeviceChangeHooked; // 0x208
		::System::Int32 s_AllActivePlayersCount; // 0x0
		::Il2CppArray<::System::Object*>* s_AllActivePlayers; // 0x8
		Il2CppObject* s_UserChangeDelegate; // 0x10
		::System::Int32 s_InitPairWithDevicesCount; // 0x18
		::Il2CppArray<::System::Object*>* s_InitPairWithDevices; // 0x20
		::System::Int32 s_InitPlayerIndex; // 0x28
		::System::Int32 s_InitSplitScreenIndex; // 0x2C
		::System::String* s_InitControlScheme; // 0x30
		::System::Boolean s_DestroyIfDeviceSetupUnsuccessful; // 0x38

		::System::Boolean get_inputIsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_INPUTISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Int32 get_playerIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_PLAYERINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_splitScreenIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_SPLITSCREENINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_actions()
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONS_OFFSET))(nullptr);
		}

		::System::Void set_actions(::UnityEngine::InputSystem::InputActionAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONS_OFFSET))(arg, nullptr);
		}

		::System::String* get_currentControlScheme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTCONTROLSCHEME_OFFSET))(nullptr);
		}

		::System::String* get_defaultControlScheme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTCONTROLSCHEME_OFFSET))(nullptr);
		}

		::System::Void set_defaultControlScheme(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTCONTROLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_neverAutoSwitchControlSchemes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET))(nullptr);
		}

		::System::Void set_neverAutoSwitchControlSchemes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NEVERAUTOSWITCHCONTROLSCHEMES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* get_currentActionMap()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CURRENTACTIONMAP_OFFSET))(nullptr);
		}

		::System::Void set_currentActionMap(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CURRENTACTIONMAP_OFFSET))(arg, nullptr);
		}

		::System::String* get_defaultActionMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEFAULTACTIONMAP_OFFSET))(nullptr);
		}

		::System::Void set_defaultActionMap(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_DEFAULTACTIONMAP_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::PlayerNotifications* get_notificationBehavior()
		{
			return (return (::UnityEngine::InputSystem::PlayerNotifications*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_NOTIFICATIONBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::PlayerNotifications*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_NOTIFICATIONBEHAVIOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_actionEvents()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ACTIONEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_actionEvents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_ACTIONEVENTS_OFFSET))(arg, nullptr);
		}

		DeviceLostEvent* get_deviceLostEvent()
		{
			return (return (DeviceLostEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICELOSTEVENT_OFFSET))(nullptr);
		}

		DeviceRegainedEvent* get_deviceRegainedEvent()
		{
			return (return (DeviceRegainedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICEREGAINEDEVENT_OFFSET))(nullptr);
		}

		ControlsChangedEvent* get_controlsChangedEvent()
		{
			return (return (ControlsChangedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CONTROLSCHANGEDEVENT_OFFSET))(nullptr);
		}

		::System::Void add_onActionTriggered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onActionTriggered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceLost(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICELOST_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceLost(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICELOST_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceRegained(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONDEVICEREGAINED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceRegained(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONDEVICEREGAINED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onControlsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ADD_ONCONTROLSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onControlsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_REMOVE_ONCONTROLSCHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_camera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_CAMERA_OFFSET))(nullptr);
		}

		::System::Void set_camera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_CAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::UI::InputSystemUIInputModule* get_uiInputModule()
		{
			return (return (::UnityEngine::InputSystem::UI::InputSystemUIInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_UIINPUTMODULE_OFFSET))(nullptr);
		}

		::System::Void set_uiInputModule(::UnityEngine::InputSystem::UI::InputSystemUIInputModule* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::UI::InputSystemUIInputModule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SET_UIINPUTMODULE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Users::InputUser* get_user()
		{
			return (return (::UnityEngine::InputSystem::Users::InputUser*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_USER_OFFSET))(nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_DEVICES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_all()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ALL_OFFSET))(nullptr);
		}

		::System::Boolean get_isSinglePlayer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GET_ISSINGLEPLAYER_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevice()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETDEVICE_OFFSET))(nullptr);
		}

		::System::Void ActivateInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIVATEINPUT_OFFSET))(nullptr);
		}

		::System::Void DeactivateInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEACTIVATEINPUT_OFFSET))(nullptr);
		}

		::System::Void PassivateInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_PASSIVATEINPUT_OFFSET))(nullptr);
		}

		::System::Boolean SwitchCurrentControlScheme(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchCurrentControlScheme(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTCONTROLSCHEME_OFFSET))(str, arg, nullptr);
		}

		::System::Void SwitchCurrentActionMap(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCURRENTACTIONMAP_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* GetPlayerByIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_GETPLAYERBYINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* FindFirstPairedToDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_FINDFIRSTPAIREDTODEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* Instantiate(::UnityEngine::GameObject* arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::String*, ::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* Instantiate(::UnityEngine::GameObject* arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTANTIATE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::PlayerInput* DoInstantiate(::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::InputSystem::PlayerInput*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DOINSTANTIATE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INITIALIZEACTIONS_OFFSET))(nullptr);
		}

		::System::Void UninitializeActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINITIALIZEACTIONS_OFFSET))(nullptr);
		}

		::System::Void InstallOnActionTriggeredHook()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_INSTALLONACTIONTRIGGEREDHOOK_OFFSET))(nullptr);
		}

		::System::Void UninstallOnActionTriggeredHook()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNINSTALLONACTIONTRIGGEREDHOOK_OFFSET))(nullptr);
		}

		::System::Void OnActionTriggered(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void CacheMessageNames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CACHEMESSAGENAMES_OFFSET))(nullptr);
		}

		::System::Void ClearCaches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CLEARCACHES_OFFSET))(nullptr);
		}

		::System::Void AssignUserAndDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNUSERANDDEVICES_OFFSET))(nullptr);
		}

		::System::Boolean HaveBindingForDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HAVEBINDINGFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnassignUserAndDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_UNASSIGNUSERANDDEVICES_OFFSET))(nullptr);
		}

		::System::Boolean TryToActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_TRYTOACTIVATECONTROLSCHEME_OFFSET))(arg, nullptr);
		}

		::System::Void AssignPlayerIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ASSIGNPLAYERINDEX_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void StartListeningForUnpairedDeviceActivity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET))(nullptr);
		}

		::System::Void StopListeningForUnpairedDeviceActivity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORUNPAIREDDEVICEACTIVITY_OFFSET))(nullptr);
		}

		::System::Void StartListeningForDeviceChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STARTLISTENINGFORDEVICECHANGES_OFFSET))(nullptr);
		}

		::System::Void StopListeningForDeviceChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_STOPLISTENINGFORDEVICECHANGES_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void DebugLogAction(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEBUGLOGACTION_OFFSET))(arg, nullptr);
		}

		::System::Void HandleDeviceLost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICELOST_OFFSET))(nullptr);
		}

		::System::Void HandleDeviceRegained()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLEDEVICEREGAINED_OFFSET))(nullptr);
		}

		::System::Void HandleControlsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_HANDLECONTROLSCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnUserChange(::UnityEngine::InputSystem::Users::InputUser* arg, ::UnityEngine::InputSystem::Users::InputUserChange* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Users::InputUser*, ::UnityEngine::InputSystem::Users::InputUserChange*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUSERCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean OnPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONPREFILTERUNPAIREDDEVICEUSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONUNPAIREDDEVICEUSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDeviceChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ONDEVICECHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SwitchControlSchemeInternal(::UnityEngine::InputSystem::InputControlScheme&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControlScheme&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_SWITCHCONTROLSCHEMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

