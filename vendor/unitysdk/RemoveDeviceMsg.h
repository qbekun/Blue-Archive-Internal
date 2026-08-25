#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define REMOVEDEVICEMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFC800)
#define REMOVEDEVICEMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EFD380)

	inline static constexpr unsigned int RemoveDeviceMsg_TypeDefinitionIndex = 28518;

	class RemoveDeviceMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEDEVICEMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		Message* Create(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Message*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + REMOVEDEVICEMSG_CREATE_OFFSET))(arg, nullptr);
		}

	};

