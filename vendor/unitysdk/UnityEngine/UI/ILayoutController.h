#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_ILAYOUTCONTROLLER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ILAYOUTCONTROLLER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ILayoutController_TypeDefinitionIndex = 34810;

	class ILayoutController : public Il2CppObject
	{
	public:
		::System::Void SetLayoutVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTCONTROLLER_SETLAYOUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Void SetLayoutHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTCONTROLLER_SETLAYOUTHORIZONTAL_OFFSET))(nullptr);
		}

	};
}

