#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define CONNECTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFB6D0)

	inline static constexpr unsigned int ConnectMsg_TypeDefinitionIndex = 28505;

	class ConnectMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTMSG_PROCESS_OFFSET))(arg, nullptr);
		}

	};

