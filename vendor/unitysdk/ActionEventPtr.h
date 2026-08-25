#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionPhase; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class IInputInteraction; }

#define ACTIONEVENTPTR_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9E7DF80)
#define ACTIONEVENTPTR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E7DFB0)
#define ACTIONEVENTPTR_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9E7DFC0)
#define ACTIONEVENTPTR_GET_INTERACTION_OFFSET UNITYSDK_OFFSET(0x9E7E000)
#define ACTIONEVENTPTR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9E7E060)
#define ACTIONEVENTPTR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E7E080)
#define ACTIONEVENTPTR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9E7E090)
#define ACTIONEVENTPTR_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E7E0C0)
#define ACTIONEVENTPTR_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E7E0D0)
#define ACTIONEVENTPTR_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E7E340)
#define ACTIONEVENTPTR_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ACTIONEVENTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E7D680)

	inline static constexpr unsigned int ActionEventPtr_TypeDefinitionIndex = 28904;

	class ActionEventPtr : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::System::Object** m_Ptr; // 0x18

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_ACTION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::InputActionPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_PHASE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_CONTROL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::IInputInteraction* get_interaction()
		{
			return (return (::UnityEngine::InputSystem::IInputInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_INTERACTION_OFFSET))(nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_TIME_OFFSET))(nullptr);
		}

		::System::Double get_startTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Object* ReadValueAsObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_READVALUEASOBJECT_OFFSET))(nullptr);
		}

		::System::Void ReadValue(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_READVALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENTPTR_TOSTRING_OFFSET))(nullptr);
		}

	};

