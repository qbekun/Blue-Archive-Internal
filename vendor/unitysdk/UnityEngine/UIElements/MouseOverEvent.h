#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3FC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOverEvent_TypeDefinitionIndex = 30504;

	class MouseOverEvent : public ::NPA::NXPPolicy
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

