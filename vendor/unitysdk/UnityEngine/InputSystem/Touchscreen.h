#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class TouchControl; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class TouchState&; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F01E20)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F01E30)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x9F02570)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F02580)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F026A0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x9F02700)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F02710)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F02760)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x9F027A0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET UNITYSDK_OFFSET(0x9F02810)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F01E40)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F028C0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x9F02C50)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x9F02F10)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.ICUSTOMDEVICERESET.RESET_OFFSET UNITYSDK_OFFSET(0x9F02F30)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x9F03370)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F03390)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F028D0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F033A0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F03860)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F02590)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Touchscreen_TypeDefinitionIndex = 28536;

	class Touchscreen : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField; // 0x1A0
		Il2CppObject* _touches_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Touchscreen* _current_k__BackingField; // 0x0
		::System::Single s_TapTime; // 0x8
		::System::Single s_TapDelayTime; // 0xC
		::System::Single s_TapRadiusSquared; // 0x10

		::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch()
		{
			return (return (::UnityEngine::InputSystem::Controls::TouchControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_touches()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_touchControlArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Touchscreen* get_current()
		{
			return (return (::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_touchControlArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* arg, ::UnityEngine::InputSystem::LowLevel::TouchState&* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::UnityEngine::InputSystem::LowLevel::TouchState&*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.GETSTATEOFFSETFOREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.ICUSTOMDEVICERESET.RESET_OFFSET))(nullptr);
		}

		::System::Void set_touches(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

