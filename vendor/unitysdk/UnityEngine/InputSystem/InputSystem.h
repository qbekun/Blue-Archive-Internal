#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputManager; }
namespace UnityEngine::InputSystem { class InputRemoting; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommandDelegate; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceFindControlLayoutDelegate; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventListener; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine::InputSystem { class InputSettings; }
namespace UnityEngine::InputSystem::LowLevel { class InputMetrics; }
namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }

#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x9E94110)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x9E94260)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E943B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E94550)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9E94660)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x9E94700)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTBUILDER_OFFSET UNITYSDK_OFFSET(0x9E94790)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPRECOMPILEDLAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVELAYOUT_OFFSET UNITYSDK_OFFSET(0x9E94920)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYFINDMATCHINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E949B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTS_OFFSET UNITYSDK_OFFSET(0x9E94A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTSBASEDON_OFFSET UNITYSDK_OFFSET(0x9E94AE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E94BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETNAMEOFBASELAYOUT_OFFSET UNITYSDK_OFFSET(0x9E94CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ISFIRSTLAYOUTBASEDONSECOND_OFFSET UNITYSDK_OFFSET(0x9E94DD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9E94F60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETPROCESSOR_OFFSET UNITYSDK_OFFSET(0x9E953A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9E95480)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E95510)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9E955A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9E95660)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9E95810)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x9E959C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x9E95B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9E95D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9E95E70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9E95FC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9E96040)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E960D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E961E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E962F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x9E963B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FLUSHDISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9E96440)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x9E964C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96550)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICEBYID_OFFSET UNITYSDK_OFFSET(0x9E96870)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9E96900)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9E96A00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYSYNCDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96BC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96D60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYRESETDEVICE_OFFSET UNITYSDK_OFFSET(0x9E96E00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9E96F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9E970F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9E972B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E97470)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E97570)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E97610)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E976B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E97750)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x9E977F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E97890)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E97A20)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ISPROCESSINGEVENTS_OFFSET UNITYSDK_OFFSET(0x9E97A90)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9E97B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9E97B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONANYBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x9E97B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x9E97D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUESTATEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEDELTASTATEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUECONFIGCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9E97E50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUETEXTEVENT_OFFSET UNITYSDK_OFFSET(0x9E98050)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E98260)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E982E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9E984C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9E98610)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9E98760)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9E988B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9E98440)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9E98A00)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x9E98B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x9E98BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E98C70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E98D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E98DD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E98F60)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9E99040)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E990D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9E99260)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEALLENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x9E99340)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x9E99350)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x9E993E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_REMOTING_OFFSET UNITYSDK_OFFSET(0x9E99450)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9E994A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9E99510)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9E99610)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x9E99710)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E997A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x9E99980)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E92360)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_INITIALIZEINPLAYER_OFFSET UNITYSDK_OFFSET(0x9E997B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALUPDATE_OFFSET UNITYSDK_OFFSET(0x9E99A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PERFORMDEFAULTPLUGININITIALIZATION_OFFSET UNITYSDK_OFFSET(0x9E99A10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSystem_TypeDefinitionIndex = 28458;

	class InputSystem : public Il2CppObject
	{
	public:
		::System::String* kAssemblyVersion; // 0x0
		::System::String* kDocUrl; // 0x0
		::UnityEngine::InputSystem::InputManager* s_Manager; // 0x0
		::UnityEngine::InputSystem::InputRemoting* s_Remote; // 0x8

		::System::Void add_onLayoutChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONLAYOUTCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onLayoutChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONLAYOUTCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterLayout(::System::Type* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RegisterLayout(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET))(str, arg, nullptr);
		}

		::System::Void RegisterLayout(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void RegisterLayoutOverride(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTOVERRIDE_OFFSET))(str, str, nullptr);
		}

		::System::Void RegisterLayoutMatcher(::System::String* str, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET))(str, arg, nullptr);
		}

		::System::Void RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTMATCHER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterLayoutBuilder(Il2CppObject* arg, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERLAYOUTBUILDER_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void RegisterPrecompiledLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPRECOMPILEDLAYOUT_OFFSET))(str, nullptr);
		}

		::System::Void RemoveLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVELAYOUT_OFFSET))(str, nullptr);
		}

		::System::String* TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYFINDMATCHINGLAYOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ListLayouts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTS_OFFSET))(nullptr);
		}

		Il2CppObject* ListLayoutsBasedOn(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTLAYOUTSBASEDON_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LOADLAYOUT_OFFSET))(nullptr);
		}

		::System::String* GetNameOfBaseLayout(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETNAMEOFBASELAYOUT_OFFSET))(str, nullptr);
		}

		::System::Boolean IsFirstLayoutBasedOnSecond(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ISFIRSTLAYOUTBASEDONSECOND_OFFSET))(str, str, nullptr);
		}

		::System::Void RegisterProcessor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void RegisterProcessor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERPROCESSOR_OFFSET))(str, nullptr);
		}

		::System::Type* TryGetProcessor(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETPROCESSOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* ListProcessors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTPROCESSORS_OFFSET))(nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DEVICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_disconnectedDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_DISCONNECTEDDEVICES_OFFSET))(nullptr);
		}

		::System::Void add_onDeviceChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONDEVICECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONDEVICECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONFINDLAYOUTFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONFINDLAYOUTFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Single get_pollingFrequency()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_POLLINGFREQUENCY_OFFSET))(nullptr);
		}

		::System::Void set_pollingFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_POLLINGFREQUENCY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET))(str, str, str, nullptr);
		}

		Il2CppObject* AddDevice(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void FlushDisconnectedDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FLUSHDISCONNECTEDDEVICES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* GetDevice(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetDevice()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* GetDevice(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDevice(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDevice(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* GetDeviceById(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETDEVICEBYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetUnsupportedDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET))(nullptr);
		}

		::System::Int32 GetUnsupportedDevices(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GETUNSUPPORTEDDEVICES_OFFSET))(arg, nullptr);
		}

		::System::Void EnableDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENABLEDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TrySyncDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYSYNCDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryResetDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYRESETDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void PauseHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PAUSEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void ResumeHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESUMEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void ResetHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RESETHAPTICS_OFFSET))(nullptr);
		}

		::System::Void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SETDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADDDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVEDEVICEUSAGE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* FindControl(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROL_OFFSET))(str, nullptr);
		}

		Il2CppObject* FindControls(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET))(str, nullptr);
		}

		Il2CppObject* FindControls(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET))(str, nullptr);
		}

		::System::Int32 FindControls(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_FINDCONTROLS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_isProcessingEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ISPROCESSINGEVENTS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventListener* get_onEvent()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONEVENT_OFFSET))(nullptr);
		}

		::System::Void set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_ONEVENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_onAnyButtonPress()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_ONANYBUTTONPRESS_OFFSET))(nullptr);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void QueueEvent(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void QueueStateEvent(::UnityEngine::InputSystem::InputDevice* arg, Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUESTATEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUEDELTASTATEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUECONFIGCHANGEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QueueTextEvent(::UnityEngine::InputSystem::InputDevice* arg, ::System::Char arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Char, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_QUEUETEXTEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onBeforeUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onBeforeUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onAfterUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONAFTERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onAfterUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONAFTERUPDATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputSettings* get_settings()
		{
			return (return (::UnityEngine::InputSystem::InputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_settings(::UnityEngine::InputSystem::InputSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_SETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void add_onSettingsChange(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONSETTINGSCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onSettingsChange(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONSETTINGSCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onActionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ADD_ONACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onActionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REMOVE_ONACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterInteraction(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET))(arg, str, nullptr);
		}

		::System::Void RegisterInteraction(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERINTERACTION_OFFSET))(str, nullptr);
		}

		::System::Type* TryGetInteraction(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETINTERACTION_OFFSET))(str, nullptr);
		}

		Il2CppObject* ListInteractions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTINTERACTIONS_OFFSET))(nullptr);
		}

		::System::Void RegisterBindingComposite(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET))(arg, str, nullptr);
		}

		::System::Void RegisterBindingComposite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_REGISTERBINDINGCOMPOSITE_OFFSET))(str, nullptr);
		}

		::System::Type* TryGetBindingComposite(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_TRYGETBINDINGCOMPOSITE_OFFSET))(str, nullptr);
		}

		::System::Void DisableAllEnabledActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_DISABLEALLENABLEDACTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* ListEnabledActions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET))(nullptr);
		}

		::System::Int32 ListEnabledActions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_LISTENABLEDACTIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputRemoting* get_remoting()
		{
			return (return (::UnityEngine::InputSystem::InputRemoting*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_REMOTING_OFFSET))(nullptr);
		}

		::System::Version* get_version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_runInBackground()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_RUNINBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void set_runInBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_SET_RUNINBACKGROUND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputMetrics* get_metrics()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputMetrics*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_GET_METRICS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RunInitializeInPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALIZEINPLAYER_OFFSET))(nullptr);
		}

		::System::Void EnsureInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_ENSUREINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime* arg, ::UnityEngine::InputSystem::InputSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_INITIALIZEINPLAYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RunInitialUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_RUNINITIALUPDATE_OFFSET))(nullptr);
		}

		::System::Void PerformDefaultPluginInitialization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM_PERFORMDEFAULTPLUGININITIALIZATION_OFFSET))(nullptr);
		}

	};
}

