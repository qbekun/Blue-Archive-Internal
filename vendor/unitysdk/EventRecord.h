#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

	inline static constexpr unsigned int EventRecord_TypeDefinitionIndex = 30093;

	class EventRecord : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EventBase* m_Event; // 0x10
		::UnityEngine::UIElements::IPanel* m_Panel; // 0x18

	};

