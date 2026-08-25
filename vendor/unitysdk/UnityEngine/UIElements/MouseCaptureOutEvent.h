#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB900)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureOutEvent_TypeDefinitionIndex = 30448;

	class MouseCaptureOutEvent : public ::ToyWebViewShared::Messages::RequestSendMouseMoveEvent
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREOUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

