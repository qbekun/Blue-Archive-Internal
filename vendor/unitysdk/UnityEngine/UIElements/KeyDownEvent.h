#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_GETEQUIVALENTIMGUIEVENT_OFFSET UNITYSDK_OFFSET(0xA3E1B10)
#define UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1BD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyDownEvent_TypeDefinitionIndex = 30486;

	class KeyDownEvent : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate
	{
	public:
		::System::Void GetEquivalentImguiEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_GETEQUIVALENTIMGUIEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYDOWNEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

