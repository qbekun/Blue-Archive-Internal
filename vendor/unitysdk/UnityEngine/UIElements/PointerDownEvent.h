#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E6200)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E6240)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E6340)
#define UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E6380)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDownEvent_TypeDefinitionIndex = 30531;

	class PointerDownEvent : public <>c__DisplayClass40_0
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDOWNEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

