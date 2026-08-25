#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define DISCONNECTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFB720)

	inline static constexpr unsigned int DisconnectMsg_TypeDefinitionIndex = 28508;

	class DisconnectMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + DISCONNECTMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

	};

