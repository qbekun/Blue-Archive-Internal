#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FDE50)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FDE90)
#define UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDEA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEnterEvent_TypeDefinitionIndex = 30537;

	class PointerEnterEvent : public <>c__DisplayClass45_0
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERENTEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

