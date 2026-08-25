#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputRemoting; }

#define NEWLAYOUTMSG_PROCESS_OFFSET UNITYSDK_OFFSET(0x9EFB7A0)
#define NEWLAYOUTMSG_CREATE_OFFSET UNITYSDK_OFFSET(0x9EFA9A0)

	inline static constexpr unsigned int NewLayoutMsg_TypeDefinitionIndex = 28510;

	class NewLayoutMsg : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputRemoting* arg, Message* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputRemoting*, Message*, ::PVOID))((::PBYTE)hIl2Cpp + NEWLAYOUTMSG_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::InputSystem::InputRemoting* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputRemoting*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWLAYOUTMSG_CREATE_OFFSET))(arg, str, nullptr);
		}

	};

