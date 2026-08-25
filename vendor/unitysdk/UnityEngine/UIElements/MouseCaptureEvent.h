#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB940)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureEvent_TypeDefinitionIndex = 30449;

	class MouseCaptureEvent : public ::ToyWebViewShared::Messages::RequestSendMouseClickEvent
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

