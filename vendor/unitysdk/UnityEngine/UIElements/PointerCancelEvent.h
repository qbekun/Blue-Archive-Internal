#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FD8B0)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FD8F0)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FD9F0)
#define UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3FDA30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCancelEvent_TypeDefinitionIndex = 30535;

	class PointerCancelEvent : public ::NPA::Editor::Auth::View::NXPTermsItemView
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCANCELEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

