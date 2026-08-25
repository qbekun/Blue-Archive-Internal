#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E49B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DetachFromPanelEvent_TypeDefinitionIndex = 30520;

	class DetachFromPanelEvent : public ::NPA::Editor::Auth::View::NXPAccountLinkPickerItemAttributeData
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DETACHFROMPANELEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

