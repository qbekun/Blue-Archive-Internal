#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputRemoting; }

#define NEWDEVICEMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EFD050)
#define NEWDEVICEMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFB920)

	inline static constexpr unsigned int NewDeviceMsg_TypeDefinitionIndex = 28513;

	class NewDeviceMsg : public Il2CppObject
	{
	public:
		Message* Create(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Message*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + NEWDEVICEMSG_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + NEWDEVICEMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

	};

