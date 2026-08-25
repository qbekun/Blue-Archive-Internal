#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB880)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureOutEvent_TypeDefinitionIndex = 30445;

	class PointerCaptureOutEvent : public ::NPA::Editor::Auth::View::NXPLinkNexonAccountAlertView
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREOUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

