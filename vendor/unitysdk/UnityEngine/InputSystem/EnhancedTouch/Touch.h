#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::EnhancedTouch { class Finger; }
namespace UnityEngine::InputSystem { class TouchPhase; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::LowLevel { class TouchState&; }
namespace UnityEngine::InputSystem::EnhancedTouch { class TouchHistory; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Touch; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET UNITYSDK_OFFSET(0x9F4AED0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET UNITYSDK_OFFSET(0x9F4BFC0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9F4AFA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET UNITYSDK_OFFSET(0x9F4C010)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F4C110)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x9F4C390)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x9F4AF10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9F4C550)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9F4C5E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9F4C670)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9F4C700)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET UNITYSDK_OFFSET(0x9F4C740)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F4BB90)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F4C7B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x9F4C840)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9F4C8D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET UNITYSDK_OFFSET(0x9F4C960)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9F4CA10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F4B370)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x9F4B490)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9F4AAA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9F4BFD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x9F4CAA0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET UNITYSDK_OFFSET(0x9F4CAE0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET UNITYSDK_OFFSET(0x9F4CC20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET UNITYSDK_OFFSET(0x9F4D430)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET UNITYSDK_OFFSET(0x9F4D4C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET UNITYSDK_OFFSET(0x9F4D6E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x9F4D770)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET UNITYSDK_OFFSET(0x9F4D840)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x9F4D910)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET UNITYSDK_OFFSET(0x9F4D9E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x9F4DAB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET UNITYSDK_OFFSET(0x9F4DB80)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET UNITYSDK_OFFSET(0x9F4B9E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4B0B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F4DC50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F4E230)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F4E2A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F4E390)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x9F4A300)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x9F4A390)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET UNITYSDK_OFFSET(0x9F4E620)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x9F4E6D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x9F4E710)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F4EA00)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 28684;

	class Touch : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger; // 0x10
		Il2CppObject* m_TouchRecord; // 0x18
		GlobalState* s_GlobalState; // 0x0

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_VALID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::Finger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGER_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::TouchPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::TouchPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Boolean get_began()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_BEGAN_OFFSET))(nullptr);
		}

		::System::Boolean get_inProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_INPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_ended()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ENDED_OFFSET))(nullptr);
		}

		::System::Int32 get_touchId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TOUCHID_OFFSET))(nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_PRESSURE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_radius()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Double get_startTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TIME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Touchscreen* get_screen()
		{
			return (return (::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREEN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_screenPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_startScreenPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STARTSCREENPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_delta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Int32 get_tapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_TAPCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isTap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISTAP_OFFSET))(nullptr);
		}

		::System::Int32 get_displayIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_DISPLAYINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_isInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ISINPROGRESS_OFFSET))(nullptr);
		}

		::System::UInt32 get_updateStepCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UPDATESTEPCOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 get_uniqueId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState&* get_state()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::TouchState&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_STATE_OFFSET))(nullptr);
		}

		ExtraDataPerTouchState&* get_extraData()
		{
			return (return (ExtraDataPerTouchState&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_EXTRADATA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory* get_history()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_HISTORY_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeTouches()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVETOUCHES_OFFSET))(nullptr);
		}

		Il2CppObject* get_fingers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_FINGERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeFingers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_ACTIVEFINGERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_screens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_SCREENS_OFFSET))(nullptr);
		}

		::System::Void add_onFingerDown(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onFingerDown(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void add_onFingerUp(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERUP_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onFingerUp(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERUP_OFFSET))(arg, nullptr);
		}

		::System::Void add_onFingerMove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADD_ONFINGERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onFingerMove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVE_ONFINGERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxHistoryLengthPerFinger()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GET_MAXHISTORYLENGTHPERFINGER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::EnhancedTouch::Finger*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::EnhancedTouch::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_ADDTOUCHSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_REMOVETOUCHSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void BeginUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_BEGINUPDATE_OFFSET))(nullptr);
		}

		GlobalState* CreateGlobalState()
		{
			return (return (GlobalState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_CREATEGLOBALSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return (return (::UnityEngine::InputSystem::Utilities::ISavedState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_SAVEANDRESETSTATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

