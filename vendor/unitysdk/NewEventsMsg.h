#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define NEWEVENTSMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFC110)
#define NEWEVENTSMSG_CREATERESETEVENT_OFFSET UNITYSDK_OFFSET(0x9EFD630)
#define NEWEVENTSMSG_CREATESTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EFD7A0)
#define NEWEVENTSMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EFD960)

	inline static constexpr unsigned int NewEventsMsg_TypeDefinitionIndex = 28514;

	class NewEventsMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + NEWEVENTSMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		Message* CreateResetEvent(::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			return (return (Message*(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWEVENTSMSG_CREATERESETEVENT_OFFSET))(arg, arg, nullptr);
		}

		Message* CreateStateEvent(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Message*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + NEWEVENTSMSG_CREATESTATEEVENT_OFFSET))(arg, nullptr);
		}

		Message* Create(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (Message*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWEVENTSMSG_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};

