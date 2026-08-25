#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class IInputActionCollection; }
namespace UnityEngine::InputSystem { class InputControlScheme&; }
namespace UnityEngine::InputSystem { class InputControlScheme; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Users { class InputUserAccountHandle; }
namespace UnityEngine::InputSystem::Users { class InputUser; }
namespace UnityEngine::InputSystem::Users { class InputUserPairingOptions; }
namespace UnityEngine::InputSystem::Users { class InputUserChange; }
namespace UnityEngine::InputSystem { class InputActionChange; }
namespace UnityEngine::InputSystem { class InputDeviceChange; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9F18B00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9F29040)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F29250)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTHANDLE_OFFSET UNITYSDK_OFFSET(0x9F29260)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x9F292E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9F29350)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PAIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F19A70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LOSTDEVICES_OFFSET UNITYSDK_OFFSET(0x9F293C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x9F29470)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F18B90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEMEMATCH_OFFSET UNITYSDK_OFFSET(0x9F294E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F19C20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ALL_OFFSET UNITYSDK_OFFSET(0x9F29590)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F1D6B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F1E310)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x9F1DA60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONUNPAIREDDEVICEUSED_OFFSET UNITYSDK_OFFSET(0x9F1DD10)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F1DB30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F1DE00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F1DBE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9F1DC20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F29800)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ASSOCIATEACTIONSWITHUSER_OFFSET UNITYSDK_OFFSET(0x9F1C660)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1CE50)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F2A1A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1A870)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9F1CCC0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F29C70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICE_OFFSET UNITYSDK_OFFSET(0x9F1F560)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICES_OFFSET UNITYSDK_OFFSET(0x9F1BCA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVELOSTDEVICESFORUSER_OFFSET UNITYSDK_OFFSET(0x9F2B260)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICESANDREMOVEUSER_OFFSET UNITYSDK_OFFSET(0x9F1CC30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET UNITYSDK_OFFSET(0x9F1C4D0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET UNITYSDK_OFFSET(0x9F2BD20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERPAIREDTODEVICE_OFFSET UNITYSDK_OFFSET(0x9F2BF40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2C120)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CREATEUSERWITHOUTPAIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F1CC60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_PERFORMPAIRINGWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x9F1BEF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTION_OFFSET UNITYSDK_OFFSET(0x9F2C4B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F2D1A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F2D1B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F2D220)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9F1E8C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9F2C4A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDUSER_OFFSET UNITYSDK_OFFSET(0x9F2C370)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEUSER_OFFSET UNITYSDK_OFFSET(0x9F2B980)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x9F2A440)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET UNITYSDK_OFFSET(0x9F291C0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET UNITYSDK_OFFSET(0x9F2C260)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET UNITYSDK_OFFSET(0x9F2C040)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDDEVICETOUSER_OFFSET UNITYSDK_OFFSET(0x9F2C630)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEDEVICEFROMUSER_OFFSET UNITYSDK_OFFSET(0x9F2B3E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATECONTROLSCHEMEMATCH_OFFSET UNITYSDK_OFFSET(0x9F2A730)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATEPLATFORMUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2CB40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_QUERYPAIREDPLATFORMUSERACCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2D3B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTIONATPLATFORMLEVEL_OFFSET UNITYSDK_OFFSET(0x9F2CFB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F2D600)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9F2D720)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDLOSTDEVICE_OFFSET UNITYSDK_OFFSET(0x9F2DC00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9F2DCE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x9F2E240)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F29B40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F2D2E0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTODEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9F2D070)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9F2D230)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOEVENTS_OFFSET UNITYSDK_OFFSET(0x9F29600)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F29740)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_DISPOSEANDRESETGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x9F2E4A0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_RESETGLOBALS_OFFSET UNITYSDK_OFFSET(0x9F2E550)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_TypeDefinitionIndex = 28616;

	class InputUser : public Il2CppObject
	{
	public:
		::System::UInt32 InvalidId; // 0x0
		::System::UInt32 m_Id; // 0x10
		GlobalState* s_GlobalState; // 0x0

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_VALID_OFFSET))(nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_INDEX_OFFSET))(nullptr);
		}

		::System::UInt32 get_id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_platformUserAccountHandle()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTHANDLE_OFFSET))(nullptr);
		}

		::System::String* get_platformUserAccountName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTNAME_OFFSET))(nullptr);
		}

		::System::String* get_platformUserAccountId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PLATFORMUSERACCOUNTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_pairedDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_PAIREDDEVICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_lostDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LOSTDEVICES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::IInputActionCollection* get_actions()
		{
			return (return (::UnityEngine::InputSystem::IInputActionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ACTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_controlScheme()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEME_OFFSET))(nullptr);
		}

		MatchResult* get_controlSchemeMatch()
		{
			return (return (MatchResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_CONTROLSCHEMEMATCH_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_all()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_ALL_OFFSET))(nullptr);
		}

		::System::Void add_onChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onUnpairedDeviceUsed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONUNPAIREDDEVICEUSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onUnpairedDeviceUsed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONUNPAIREDDEVICEUSED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onPrefilterUnpairedDeviceActivity(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADD_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onPrefilterUnpairedDeviceActivity(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVE_ONPREFILTERUNPAIREDDEVICEACTIVITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_listenForUnpairedDeviceActivity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET))(nullptr);
		}

		::System::Void set_listenForUnpairedDeviceActivity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SET_LISTENFORUNPAIREDDEVICEACTIVITY_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::IInputActionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ASSOCIATEACTIONSWITHUSER_OFFSET))(arg, nullptr);
		}

		ControlSchemeChangeSyntax* ActivateControlScheme(::System::String* str)
		{
			return (return (ControlSchemeChangeSyntax*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Boolean TryFindControlScheme(::System::String* str, ::UnityEngine::InputSystem::InputControlScheme&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::InputControlScheme&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDCONTROLSCHEME_OFFSET))(str, arg, nullptr);
		}

		::System::Void FindControlScheme(::System::String* str, ::UnityEngine::InputSystem::InputControlScheme&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::InputControlScheme&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDCONTROLSCHEME_OFFSET))(str, arg, nullptr);
		}

		ControlSchemeChangeSyntax* ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (ControlSchemeChangeSyntax*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEME_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateControlSchemeInternal(::System::Int32 arg, ::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ACTIVATECONTROLSCHEMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnpairDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnpairDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICES_OFFSET))(nullptr);
		}

		::System::Void RemoveLostDevicesForUser(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVELOSTDEVICESFORUSER_OFFSET))(arg, nullptr);
		}

		::System::Void UnpairDevicesAndRemoveUser()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNPAIRDEVICESANDREMOVEUSER_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnpairedInputDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET))(nullptr);
		}

		::System::Int32 GetUnpairedInputDevices(Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETUNPAIREDINPUTDEVICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERPAIREDTODEVICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDUSERBYACCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Users::InputUser* CreateUserWithoutPairedDevices()
		{
			return (return (::UnityEngine::InputSystem::Users::InputUser*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_CREATEUSERWITHOUTPAIREDDEVICES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Users::InputUser* PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Users::InputUser* arg, ::UnityEngine::InputSystem::Users::InputUserPairingOptions* arg)
		{
			return (return (::UnityEngine::InputSystem::Users::InputUser*(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUser*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_PERFORMPAIRINGWITHDEVICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InitiateUserAccountSelection(::System::Int32 arg, ::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Users::InputUserPairingOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Users::InputUser* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUser*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Users::InputUser* arg, ::UnityEngine::InputSystem::Users::InputUser* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUser*, ::UnityEngine::InputSystem::Users::InputUser*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Users::InputUser* arg, ::UnityEngine::InputSystem::Users::InputUser* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUser*, ::UnityEngine::InputSystem::Users::InputUser*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddUser()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDUSER_OFFSET))(nullptr);
		}

		::System::Void RemoveUser(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEUSER_OFFSET))(arg, nullptr);
		}

		::System::Void Notify(::System::Int32 arg, ::UnityEngine::InputSystem::Users::InputUserChange* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::Users::InputUserChange*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_NOTIFY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 TryFindUserIndex(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 TryFindUserIndex(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_TRYFINDUSERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void AddDeviceToUser(::System::Int32 arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ADDDEVICETOUSER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveDeviceFromUser(::System::Int32 arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_REMOVEDEVICEFROMUSER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateControlSchemeMatch(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATECONTROLSCHEMEMATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 UpdatePlatformUserAccount(::System::Int32 arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UPDATEPLATFORMUSERACCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice* arg, Il2CppObject&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::InputSystem::InputDevice*, Il2CppObject&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_QUERYPAIREDPLATFORMUSERACCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_INITIATEUSERACCOUNTSELECTIONATPLATFORMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnActionChange(::System::Object* arg, ::UnityEngine::InputSystem::InputActionChange* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONACTIONCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDeviceChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONDEVICECHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindLostDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_FINDLOSTDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_ONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return (return (::UnityEngine::InputSystem::Utilities::ISavedState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_SAVEANDRESETSTATE_OFFSET))(nullptr);
		}

		::System::Void HookIntoActionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOACTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void UnhookFromActionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMACTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void HookIntoDeviceChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTODEVICECHANGE_OFFSET))(nullptr);
		}

		::System::Void UnhookFromDeviceChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICECHANGE_OFFSET))(nullptr);
		}

		::System::Void HookIntoEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_HOOKINTOEVENTS_OFFSET))(nullptr);
		}

		::System::Void UnhookFromDeviceStateChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_UNHOOKFROMDEVICESTATECHANGE_OFFSET))(nullptr);
		}

		::System::Void DisposeAndResetGlobalState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_DISPOSEANDRESETGLOBALSTATE_OFFSET))(nullptr);
		}

		::System::Void ResetGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER_RESETGLOBALS_OFFSET))(nullptr);
		}

	};
}

