#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define CHANGEUSAGEMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFC360)
#define CHANGEUSAGEMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EFD410)

	inline static constexpr unsigned int ChangeUsageMsg_TypeDefinitionIndex = 28517;

	class ChangeUsageMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEUSAGEMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		Message* Create(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Message*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEUSAGEMSG_CREATE_OFFSET))(arg, nullptr);
		}

	};

