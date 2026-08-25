#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureEventBase`1_TypeDefinitionIndex = 30447;

	class MouseCaptureEventBase`1 : public LocalizationResource
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

