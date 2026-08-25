#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E4970)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AttachToPanelEvent_TypeDefinitionIndex = 30519;

	class AttachToPanelEvent : public ::NPA::Editor::Auth::View::NXPAccountLinkLoginSelectView
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATTACHTOPANELEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

