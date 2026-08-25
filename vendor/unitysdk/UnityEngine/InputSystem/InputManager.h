#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class TypeTable; }
namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine::InputSystem::LowLevel { class InputStateBuffers; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventStream; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }
namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }
namespace UnityEngine::InputSystem::LowLevel { class InputMetrics; }
namespace UnityEngine::InputSystem { class InputSettings; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommandDelegate; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceFindControlLayoutDelegate; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription&; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer&; }
namespace UnityEngine::InputSystem::LowLevel { class InputStateBlock&; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand&; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9EFD6A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x9F03B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9F03B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_COMPOSITES_OFFSET UNITYSDK_OFFSET(0x9F03B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x9F03B90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9F03D30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9F03D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x9F045C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x9F045D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEFAULTUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x9F04810)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9F04830)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9F04840)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9EFCE10)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9EFB4E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F04970)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F049C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x9F04A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x9F04A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F04AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F05050)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x9EFCE60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x9EFB530)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9EFCDC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9EFB490)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F050A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F051F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F05240)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F05290)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x9F052E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x9F05330)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_ISPROCESSINGEVENTS_OFFSET UNITYSDK_OFFSET(0x9F05380)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEISPLAYING_OFFSET UNITYSDK_OFFSET(0x9F05390)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x9F053A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMESHOULDGETINPUTREGARDLESSOFFOCUS_OFFSET UNITYSDK_OFFSET(0x9F053D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F05400)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EFE360)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTBUILDER_OFFSET UNITYSDK_OFFSET(0x9F062F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PERFORMLAYOUTPOSTREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9F05B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERPRECOMPILEDLAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F064F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLORCHILDUSINGLAYOUTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9F068B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLUSINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F067A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x9F06180)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x9F07520)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUTWITHINFERIORMATCH_OFFSET UNITYSDK_OFFSET(0x9F06B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x9F069A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESMATCHINGDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9F06EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVECONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F083E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F08630)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EFE950)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYFINDMATCHINGCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F07750)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FINDORREGISTERDEVICELAYOUTFORTYPE_OFFSET UNITYSDK_OFFSET(0x9F08860)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISDEVICELAYOUTMARKEDASSUPPORTEDINSETTINGS_OFFSET UNITYSDK_OFFSET(0x9F08910)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_LISTCONTROLLAYOUTS_OFFSET UNITYSDK_OFFSET(0x9F08A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETCONTROLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SETDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9F08AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9EFEAE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9EFED60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_NOTIFYUSAGECHANGED_OFFSET UNITYSDK_OFFSET(0x9F08D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F08DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9EFE980)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F081C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F07C20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F09A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F09A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F09CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x9EFDD20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLUSHDISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F09F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETDEVICE_OFFSET UNITYSDK_OFFSET(0x9F09F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET UNITYSDK_OFFSET(0x9F0A840)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x9F0A960)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET UNITYSDK_OFFSET(0x9F0AA00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICEBYID_OFFSET UNITYSDK_OFFSET(0x9EFAF30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETUNSUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F0AA70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ENABLEORDISABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x9F095C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x9F0ACE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x9EFED50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F0ADB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F0AE90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F0AF40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x9F0CAD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x9F0AF90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLRUNTIME_OFFSET UNITYSDK_OFFSET(0x9F0C0D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLGLOBALS_OFFSET UNITYSDK_OFFSET(0x9F0C800)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UNINSTALLGLOBALS_OFFSET UNITYSDK_OFFSET(0x9F0CBE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_MAKEDEVICENAMEUNIQUE_OFFSET UNITYSDK_OFFSET(0x9F08EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETCONTROLPATHSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9F0D000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ASSIGNUNIQUEDEVICEID_OFFSET UNITYSDK_OFFSET(0x9F09070)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REALLOCATESTATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x9F045F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9F0D0B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x9F09260)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONNATIVEDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x9F0D270)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYMATCHDISCONNECTEDDEVICE_OFFSET UNITYSDK_OFFSET(0x9F0D890)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLBEFOREUPDATEHOOKIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9F050F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESTOREDEVICESAFTERDOMAINRELOADIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9F0D880)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WARNABOUTDEVICESFAILINGTORECREATEAFTERDOMAINRELOAD_OFFSET UNITYSDK_OFFSET(0x9F0DA90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F0DAA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x9F03E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_EXECUTEGLOBALCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESTHATARENOWRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x9F04B00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNDEVICEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9F09580)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9F0DC90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x9F0DF30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9F0DF50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INVOKEAFTERUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x9F0F910)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DONTMAKECURRENTLYUPDATINGDEVICECURRENT_OFFSET UNITYSDK_OFFSET(0x9F0FAA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x9F0F970)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x9F0A5B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WRITESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F0FE40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLIPBUFFERSFORDEVICEIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9F0FDB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F104E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x9F09DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F10640)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9F107B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9F108A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SORTSTATECHANGEMONITORSIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9F0FAB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SIGNALSTATECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F109B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x9F10AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x9F0FB00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x9F10010)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORTIMEOUTS_OFFSET UNITYSDK_OFFSET(0x9F0F660)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F10BF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__TRYFINDMATCHINGCONTROLLAYOUT_B__72_0_OFFSET UNITYSDK_OFFSET(0x9F10C00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_TypeDefinitionIndex = 28548;

	class InputManager : public Il2CppObject
	{
	public:
		::System::Int32 m_LayoutRegistrationVersion; // 0x10
		::System::Single m_PollingFrequency; // 0x14
		Collection* m_Layouts; // 0x18
		::UnityEngine::InputSystem::Utilities::TypeTable* m_Processors; // 0x58
		::UnityEngine::InputSystem::Utilities::TypeTable* m_Interactions; // 0x60
		::UnityEngine::InputSystem::Utilities::TypeTable* m_Composites; // 0x68
		::System::Int32 m_DevicesCount; // 0x70
		::Il2CppArray<::System::Object*>* m_Devices; // 0x78
		Il2CppObject* m_DevicesById; // 0x80
		::System::Int32 m_AvailableDeviceCount; // 0x88
		::Il2CppArray<::System::Object*>* m_AvailableDevices; // 0x90
		::System::Int32 m_DisconnectedDevicesCount; // 0x98
		::Il2CppArray<::System::Object*>* m_DisconnectedDevices; // 0xA0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* m_UpdateMask; // 0xA8
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* m_CurrentUpdate; // 0xAC
		::UnityEngine::InputSystem::LowLevel::InputStateBuffers* m_StateBuffers; // 0xB0
		Il2CppObject* m_DeviceChangeListeners; // 0xE0
		Il2CppObject* m_DeviceStateChangeListeners; // 0x130
		Il2CppObject* m_DeviceFindLayoutCallbacks; // 0x180
		Il2CppObject* m_DeviceCommandCallbacks; // 0x1D0
		Il2CppObject* m_LayoutChangeListeners; // 0x220
		Il2CppObject* m_EventListeners; // 0x270
		Il2CppObject* m_BeforeUpdateListeners; // 0x2C0
		Il2CppObject* m_AfterUpdateListeners; // 0x310
		Il2CppObject* m_SettingsChangedListeners; // 0x360
		::System::Boolean m_NativeBeforeUpdateHooked; // 0x3B0
		::System::Boolean m_HaveDevicesWithStateCallbackReceivers; // 0x3B1
		::System::Boolean m_HasFocus; // 0x3B2
		::UnityEngine::InputSystem::LowLevel::InputEventStream* m_InputEventStream; // 0x3B8
		::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* m_DeviceFindExecuteCommandDelegate; // 0x430
		::System::Int32 m_DeviceFindExecuteCommandDeviceId; // 0x438
		::UnityEngine::InputSystem::LowLevel::IInputRuntime* m_Runtime; // 0x440
		::UnityEngine::InputSystem::LowLevel::InputMetrics* m_Metrics; // 0x448
		::UnityEngine::InputSystem::InputSettings* m_Settings; // 0x480
		::System::Boolean m_ShouldMakeCurrentlyUpdatingDeviceCurrent; // 0x488
		::Il2CppArray<::System::Object*>* m_StateChangeMonitors; // 0x490
		Il2CppObject* m_StateChangeMonitorTimeouts; // 0x498

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEVICES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable* get_processors()
		{
			return (return (::UnityEngine::InputSystem::Utilities::TypeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_PROCESSORS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable* get_interactions()
		{
			return (return (::UnityEngine::InputSystem::Utilities::TypeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_INTERACTIONS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable* get_composites()
		{
			return (return (::UnityEngine::InputSystem::Utilities::TypeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_COMPOSITES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputMetrics* get_metrics()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputMetrics*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_METRICS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputSettings* get_settings()
		{
			return (return (::UnityEngine::InputSystem::InputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_settings(::UnityEngine::InputSystem::InputSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_SETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType* get_updateMask()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputUpdateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_UPDATEMASK_OFFSET))(nullptr);
		}

		::System::Void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_UPDATEMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType* get_defaultUpdateType()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputUpdateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEFAULTUPDATETYPE_OFFSET))(nullptr);
		}

		::System::Single get_pollingFrequency()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_POLLINGFREQUENCY_OFFSET))(nullptr);
		}

		::System::Void set_pollingFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_POLLINGFREQUENCY_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceStateChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICESTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceStateChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICESTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onLayoutChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONLAYOUTCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onLayoutChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONLAYOUTCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_onBeforeUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onBeforeUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onAfterUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONAFTERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onAfterUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONAFTERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onSettingsChange(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONSETTINGSCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onSettingsChange(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONSETTINGSCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isProcessingEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_ISPROCESSINGEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_gameIsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_gameHasFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEHASFOCUS_OFFSET))(nullptr);
		}

		::System::Boolean get_gameShouldGetInputRegardlessOfFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMESHOULDGETINPUTREGARDLESSOFFOCUS_OFFSET))(nullptr);
		}

		::System::Void RegisterControlLayout(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET))(str, arg, nullptr);
		}

		::System::Void RegisterControlLayout(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void RegisterControlLayoutBuilder(Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTBUILDER_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PERFORMLAYOUTPOSTREGISTRATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterPrecompiledLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERPRECOMPILEDLAYOUT_OFFSET))(str, nullptr);
		}

		::System::Void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLORCHILDUSINGLAYOUTRECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsControlUsingLayout(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLUSINGLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterControlLayoutMatcher(::System::String* str, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET))(str, arg, nullptr);
		}

		::System::Void RegisterControlLayoutMatcher(::System::Type* arg, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::System::Type*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUTWITHINFERIORMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void RecreateDevice(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESMATCHINGDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveControlLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVECONTROLLAYOUT_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* TryFindMatchingControlLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYFINDMATCHINGCONTROLLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* FindOrRegisterDeviceLayoutForType(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FINDORREGISTERDEVICELAYOUTFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISDEVICELAYOUTMARKEDASSUPPORTEDINSETTINGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ListControlLayouts(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_LISTCONTROLLAYOUTS_OFFSET))(str, nullptr);
		}

		::System::Int32 GetControls(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETCONTROLS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SETDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_NOTIFYUSAGECHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::System::String* str, ::System::String* str, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(str, str, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::Int32 arg, ::System::String* str, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, DeviceFlags* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::Int32, ::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, DeviceFlags*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Void AddDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, ::System::Boolean arg, ::System::String* str, ::System::Int32 arg, DeviceFlags* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::System::Boolean, ::System::String*, ::System::Int32, DeviceFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::String* str, ::System::Int32 arg, DeviceFlags* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::System::String*, ::System::Int32, DeviceFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void RemoveDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FlushDisconnectedDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLUSHDISCONNECTEDDEVICES_OFFSET))(nullptr);
		}

		::System::Void ResetDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETDEVICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* GetDevice(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETDEVICE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICEBYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUnsupportedDevices(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETUNSUPPORTEDDEVICES_OFFSET))(arg, nullptr);
		}

		::System::Void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg, DeviceDisableScope* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, DeviceDisableScope*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ENABLEORDISABLEDEVICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QueueEvent(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void QueueEvent(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime* arg, ::UnityEngine::InputSystem::InputSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DESTROY_OFFSET))(nullptr);
		}

		::System::Void InitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLRUNTIME_OFFSET))(arg, nullptr);
		}

		::System::Void InstallGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLGLOBALS_OFFSET))(nullptr);
		}

		::System::Void UninstallGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UNINSTALLGLOBALS_OFFSET))(nullptr);
		}

		::System::Void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_MAKEDEVICENAMEUNIQUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETCONTROLPATHSRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ASSIGNUNIQUEDEVICEID_OFFSET))(arg, nullptr);
		}

		::System::Void ReallocateStateBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REALLOCATESTATEBUFFERS_OFFSET))(nullptr);
		}

		::System::Void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEFAULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEVICESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNativeDeviceDiscovered(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONNATIVEDEVICEDISCOVERED_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYMATCHDISCONNECTEDDEVICE_OFFSET))(str, nullptr);
		}

		::System::Void InstallBeforeUpdateHookIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLBEFOREUPDATEHOOKIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void RestoreDevicesAfterDomainReloadIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESTOREDEVICESAFTERDOMAINRELOADIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void WarnAboutDevicesFailingToRecreateAfterDomainReload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WARNABOUTDEVICESFAILINGTORECREATEAFTERDOMAINRELOAD_OFFSET))(nullptr);
		}

		::System::Void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplySettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_APPLYSETTINGS_OFFSET))(nullptr);
		}

		::System::Int64 ExecuteGlobalCommand(Il2CppObject&* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_EXECUTEGLOBALCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void AddAvailableDevicesThatAreNowRecognized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESTHATARENOWRECOGNIZED_OFFSET))(nullptr);
		}

		::System::Boolean ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNDEVICEINBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocusChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONFOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INVOKEAFTERUPDATECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void DontMakeCurrentlyUpdatingDeviceCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DONTMAKECURRENTLYUPDATINGDEVICECURRENT_OFFSET))(nullptr);
		}

		::System::Boolean UpdateState(::UnityEngine::InputSystem::InputDevice* arg, ::System::Object** arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Object**, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateState(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::System::Object**, ::System::UInt32, ::System::UInt32, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteStateChange(DoubleBuffers* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::LowLevel::InputStateBlock&* arg, ::System::UInt32 arg, ::System::Object** arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(DoubleBuffers*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBlock&*, ::System::UInt32, ::System::Object**, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WRITESTATECHANGE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLIPBUFFERSFORDEVICEIFNECESSARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Double arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Double, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITORTIMEOUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORTIMEOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortStateChangeMonitorsIfNecessary(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SORTSTATECHANGEMONITORSIFNECESSARY_OFFSET))(arg, nullptr);
		}

		::System::Void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SIGNALSTATECHANGEMONITOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FireStateChangeNotifications()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Boolean ProcessStateChangeMonitors(::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Object**, ::System::Object**, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FireStateChangeNotifications(::System::Int32 arg, ::System::Double arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Double, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessStateChangeMonitorTimeouts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORTIMEOUTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 _TryFindMatchingControlLayout_b__72_0(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__TRYFINDMATCHINGCONTROLLAYOUT_B__72_0_OFFSET))(arg, nullptr);
		}

	};
}

