#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E38E0)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E3920)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3930)
#define UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E3970)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEnterWindowEvent_TypeDefinitionIndex = 30502;

	class MouseEnterWindowEvent : public ::NPA::NPLoginType
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEENTERWINDOWEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

