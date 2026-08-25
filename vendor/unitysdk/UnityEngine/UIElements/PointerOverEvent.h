#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDF70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerOverEvent_TypeDefinitionIndex = 30539;

	class PointerOverEvent : public ::NPA::Editor::Auth::JavaScriptInterface::InsignJavaScriptInterface
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEROVEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

