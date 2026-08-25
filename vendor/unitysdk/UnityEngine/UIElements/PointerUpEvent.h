#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E7030)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E7070)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E7170)
#define UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E71B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerUpEvent_TypeDefinitionIndex = 30534;

	class PointerUpEvent : public ::NPA::Editor::Auth::Interface::Account
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERUPEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

