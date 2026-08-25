#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class TouchHistory; }
namespace UnityEngine::InputSystem::EnhancedTouch { class Touch; }
namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GETTOUCHHISTORY_OFFSET UNITYSDK_OFFSET(0x9F4A670)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_FINDTOUCH_OFFSET UNITYSDK_OFFSET(0x9F4AB30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_CURRENTTOUCH_OFFSET UNITYSDK_OFFSET(0x9F4B0E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_LASTTOUCH_OFFSET UNITYSDK_OFFSET(0x9F4B2C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREEN_OFFSET UNITYSDK_OFFSET(0x9F4B520)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9F4B530)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_TOUCHHISTORY_OFFSET UNITYSDK_OFFSET(0x9F4B5D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4B630)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F4BA30)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_ONTOUCHRECORDED_OFFSET UNITYSDK_OFFSET(0x9F4BC20)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_SHOULDRECORDTOUCH_OFFSET UNITYSDK_OFFSET(0x9F4BEF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9F4BFB0)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Finger_TypeDefinitionIndex = 28679;

	class Finger : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Touchscreen* _screen_k__BackingField; // 0x10
		::System::Int32 _index_k__BackingField; // 0x18
		Il2CppObject* m_StateHistory; // 0x20

		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory* GetTouchHistory(::UnityEngine::InputSystem::EnhancedTouch::Touch* arg)
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory*(*)(::UnityEngine::InputSystem::EnhancedTouch::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GETTOUCHHISTORY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch* FindTouch(::System::UInt32 arg)
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::Touch*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_FINDTOUCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch* get_currentTouch()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::Touch*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_CURRENTTOUCH_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::Touch* get_lastTouch()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::Touch*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_LASTTOUCH_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Touchscreen* get_screen()
		{
			return (return (::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREEN_OFFSET))(nullptr);
		}

		::System::Boolean get_isActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::TouchHistory* get_touchHistory()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::TouchHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_TOUCHHISTORY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::Touchscreen* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* get_screenPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_SCREENPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnTouchRecorded(Record* arg)
		{
			((::System::Void(*)(Record*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_ONTOUCHRECORDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldRecordTouch(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_SHOULDRECORDTOUCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_FINGER_GET_INDEX_OFFSET))(nullptr);
		}

	};
}

