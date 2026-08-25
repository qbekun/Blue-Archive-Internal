#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3500)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextClickEvent_TypeDefinitionIndex = 30498;

	class ContextClickEvent : public ::ToyWebViewShared::Messages::RequestStopWebViewServer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTCLICKEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

