#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define STOPSENDINGMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFC940)

	inline static constexpr unsigned int StopSendingMsg_TypeDefinitionIndex = 28507;

	class StopSendingMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::PVOID))((::PBYTE)hIl2Cpp + STOPSENDINGMSG_PROCESS_OFFSET))(arg, nullptr);
		}

	};

