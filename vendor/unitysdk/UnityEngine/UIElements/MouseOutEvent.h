#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E4000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOutEvent_TypeDefinitionIndex = 30505;

	class MouseOutEvent : public ::NPA::NXPAuthError
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

