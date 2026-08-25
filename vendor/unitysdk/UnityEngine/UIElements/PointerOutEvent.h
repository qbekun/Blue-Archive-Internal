#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDFB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOutEvent_TypeDefinitionIndex = 30540;

	class PointerOutEvent : public ::NPA::Editor::Auth::View::NXPTermsView
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

