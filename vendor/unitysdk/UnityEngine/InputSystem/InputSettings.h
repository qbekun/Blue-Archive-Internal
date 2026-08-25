#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BUTTONRELEASETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9F12490)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DISABLEREDUNDANTEVENTSMERGING_OFFSET UNITYSDK_OFFSET(0x9F124A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DISABLEREDUNDANTEVENTSMERGING_OFFSET UNITYSDK_OFFSET(0x9F12580)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXEVENTBYTESPERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F12590)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MULTITAPDELAYTIME_OFFSET UNITYSDK_OFFSET(0x9F125A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SHORTCUTKEYSCONSUMEINPUT_OFFSET UNITYSDK_OFFSET(0x9F125B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXQUEUEDEVENTSPERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F125D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXEVENTBYTESPERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F125E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_COMPENSATEFORSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F125F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_FILTERNOISEONCURRENT_OFFSET UNITYSDK_OFFSET(0x9F12600)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTHOLDTIME_OFFSET UNITYSDK_OFFSET(0x9F12610)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SHORTCUTKEYSCONSUMEINPUT_OFFSET UNITYSDK_OFFSET(0x9F12620)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_FILTERNOISEONCURRENT_OFFSET UNITYSDK_OFFSET(0x9F12630)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MULTITAPDELAYTIME_OFFSET UNITYSDK_OFFSET(0x9F12640)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMAX_OFFSET UNITYSDK_OFFSET(0x9F12660)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SETINTERNALFEATUREFLAG_OFFSET UNITYSDK_OFFSET(0x9F12680)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET UNITYSDK_OFFSET(0x9F128B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F128C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTHOLDTIME_OFFSET UNITYSDK_OFFSET(0x9F12910)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x9F12930)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x9F12940)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMIN_OFFSET UNITYSDK_OFFSET(0x9F12950)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTSLOWTAPTIME_OFFSET UNITYSDK_OFFSET(0x9F12970)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BACKGROUNDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F12980)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTBUTTONPRESSPOINT_OFFSET UNITYSDK_OFFSET(0x9F12990)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ISFEATUREENABLED_OFFSET UNITYSDK_OFFSET(0x9F129A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_COMPENSATEFORSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F12A10)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F12A30)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMAX_OFFSET UNITYSDK_OFFSET(0x9F12A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BUTTONRELEASETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9F12A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET UNITYSDK_OFFSET(0x9F12AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMIN_OFFSET UNITYSDK_OFFSET(0x9F12AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTBUTTONPRESSPOINT_OFFSET UNITYSDK_OFFSET(0x9F12AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x9F12B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTTAPTIME_OFFSET UNITYSDK_OFFSET(0x9F12C80)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXQUEUEDEVENTSPERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F12C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_TAPRADIUS_OFFSET UNITYSDK_OFFSET(0x9F12CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTSLOWTAPTIME_OFFSET UNITYSDK_OFFSET(0x9F12CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F124C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BACKGROUNDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9F12CD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_TAPRADIUS_OFFSET UNITYSDK_OFFSET(0x9F12CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTTAPTIME_OFFSET UNITYSDK_OFFSET(0x9F12D00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSettings_TypeDefinitionIndex = 28552;

	class InputSettings : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_SupportedDevices; // 0x18
		UpdateMode* m_UpdateMode; // 0x20
		::System::Int32 m_MaxEventBytesPerUpdate; // 0x24
		::System::Int32 m_MaxQueuedEventsPerUpdate; // 0x28
		::System::Boolean m_CompensateForScreenOrientation; // 0x2C
		BackgroundBehavior* m_BackgroundBehavior; // 0x30
		EditorInputBehaviorInPlayMode* m_EditorInputBehaviorInPlayMode; // 0x34
		::System::Single m_DefaultDeadzoneMin; // 0x38
		::System::Single m_DefaultDeadzoneMax; // 0x3C
		::System::Single m_DefaultButtonPressPoint; // 0x40
		::System::Single m_ButtonReleaseThreshold; // 0x44
		::System::Single m_DefaultTapTime; // 0x48
		::System::Single m_DefaultSlowTapTime; // 0x4C
		::System::Single m_DefaultHoldTime; // 0x50
		::System::Single m_TapRadius; // 0x54
		::System::Single m_MultiTapDelayTime; // 0x58
		::System::Boolean m_DisableRedundantEventsMerging; // 0x5C
		::System::Boolean m_ShortcutKeysConsumeInputs; // 0x5D
		Il2CppObject* m_FeatureFlags; // 0x60
		::System::Boolean optimizedControlsFeatureEnabled; // 0x0
		::System::Boolean readValueCachingFeatureEnabled; // 0x1
		::System::Boolean paranoidReadValueCachingChecksEnabled; // 0x2
		::System::Int32 s_OldUnsupportedFixedAndDynamicUpdateSetting; // 0x0

		::System::Single get_buttonReleaseThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BUTTONRELEASETHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_disableRedundantEventsMerging(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DISABLEREDUNDANTEVENTSMERGING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disableRedundantEventsMerging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DISABLEREDUNDANTEVENTSMERGING_OFFSET))(nullptr);
		}

		::System::Int32 get_maxEventBytesPerUpdate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXEVENTBYTESPERUPDATE_OFFSET))(nullptr);
		}

		::System::Single get_multiTapDelayTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MULTITAPDELAYTIME_OFFSET))(nullptr);
		}

		::System::Void set_shortcutKeysConsumeInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SHORTCUTKEYSCONSUMEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxQueuedEventsPerUpdate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXQUEUEDEVENTSPERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxEventBytesPerUpdate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MAXEVENTBYTESPERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_compensateForScreenOrientation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_COMPENSATEFORSCREENORIENTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_filterNoiseOnCurrent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_FILTERNOISEONCURRENT_OFFSET))(nullptr);
		}

		::System::Single get_defaultHoldTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTHOLDTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_shortcutKeysConsumeInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SHORTCUTKEYSCONSUMEINPUT_OFFSET))(nullptr);
		}

		::System::Void set_filterNoiseOnCurrent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_FILTERNOISEONCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_multiTapDelayTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_MULTITAPDELAYTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultDeadzoneMax(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMAX_OFFSET))(arg, nullptr);
		}

		::System::Void SetInternalFeatureFlag(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SETINTERNALFEATUREFLAG_OFFSET))(str, arg, nullptr);
		}

		EditorInputBehaviorInPlayMode* get_editorInputBehaviorInPlayMode()
		{
			return (return (EditorInputBehaviorInPlayMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET))(nullptr);
		}

		Il2CppObject* get_supportedDevices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_SUPPORTEDDEVICES_OFFSET))(nullptr);
		}

		::System::Void set_defaultHoldTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTHOLDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_updateMode(UpdateMode* arg)
		{
			((::System::Void(*)(UpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		UpdateMode* get_updateMode()
		{
			return (return (UpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_defaultDeadzoneMin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTDEADZONEMIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_defaultSlowTapTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTSLOWTAPTIME_OFFSET))(nullptr);
		}

		::System::Void set_backgroundBehavior(BackgroundBehavior* arg)
		{
			((::System::Void(*)(BackgroundBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BACKGROUNDBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_defaultButtonPressPoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTBUTTONPRESSPOINT_OFFSET))(nullptr);
		}

		::System::Boolean IsFeatureEnabled(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ISFEATUREENABLED_OFFSET))(str, nullptr);
		}

		::System::Void set_compensateForScreenOrientation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_COMPENSATEFORSCREENORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_defaultDeadzoneMax()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMAX_OFFSET))(nullptr);
		}

		::System::Void set_buttonReleaseThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_BUTTONRELEASETHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Void set_editorInputBehaviorInPlayMode(EditorInputBehaviorInPlayMode* arg)
		{
			((::System::Void(*)(EditorInputBehaviorInPlayMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_EDITORINPUTBEHAVIORINPLAYMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_defaultDeadzoneMin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTDEADZONEMIN_OFFSET))(nullptr);
		}

		::System::Void set_defaultButtonPressPoint(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTBUTTONPRESSPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_supportedDevices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_SUPPORTEDDEVICES_OFFSET))(arg, nullptr);
		}

		::System::Single get_defaultTapTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_DEFAULTTAPTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_maxQueuedEventsPerUpdate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_MAXQUEUEDEVENTSPERUPDATE_OFFSET))(nullptr);
		}

		::System::Single get_tapRadius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_TAPRADIUS_OFFSET))(nullptr);
		}

		::System::Void set_defaultSlowTapTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTSLOWTAPTIME_OFFSET))(arg, nullptr);
		}

		::System::Void OnChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_ONCHANGE_OFFSET))(nullptr);
		}

		BackgroundBehavior* get_backgroundBehavior()
		{
			return (return (BackgroundBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_GET_BACKGROUNDBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_tapRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_TAPRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultTapTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSETTINGS_SET_DEFAULTTAPTIME_OFFSET))(arg, nullptr);
		}

	};
}

