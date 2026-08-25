#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define STARTSENDINGMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFC920)

	inline static constexpr unsigned int StartSendingMsg_TypeDefinitionIndex = 28506;

	class StartSendingMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::PVOID))((::PBYTE)hIl2Cpp + STARTSENDINGMSG_PROCESS_OFFSET))(arg, nullptr);
		}

	};

