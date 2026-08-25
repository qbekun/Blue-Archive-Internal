#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB8C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEvent_TypeDefinitionIndex = 30446;

	class PointerCaptureEvent : public ::NPA::Editor::Auth::View::NXPAccountSettingsView
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

