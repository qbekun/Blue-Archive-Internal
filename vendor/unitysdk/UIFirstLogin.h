#pragma once
#include "unitysdk.h"

class UIEventTrigger;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Collider; }
class ServerWaitingState;

#define UIFIRSTLOGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xB704D0)

	inline static constexpr unsigned int UIFirstLogin_TypeDefinitionIndex = 8463;

	class UIFirstLogin : public Il2CppObject
	{
	public:
		UIEventTrigger* screenEventTrigger; // 0xD8
		::UnityEngine::GameObject* startIndicator; // 0xE0
		::UnityEngine::Collider* screenEventTriggerCollider; // 0xE8
		ServerWaitingState* serverWaitingState; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFIRSTLOGIN_.CTOR_OFFSET))(nullptr);
		}

	};

