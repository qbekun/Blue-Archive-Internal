#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ClickEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }

#define UNITYENGINE_UIELEMENTS_CLICKEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FDD60)
#define UNITYENGINE_UIELEMENTS_CLICKEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FDDA0)
#define UNITYENGINE_UIELEMENTS_CLICKEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FDDB0)
#define UNITYENGINE_UIELEMENTS_CLICKEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3FDDF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ClickEvent_TypeDefinitionIndex = 30536;

	class ClickEvent : public <>c__DisplayClass18_1
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKEVENT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ClickEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::ClickEvent*(*)(::UnityEngine::UIElements::PointerUpEvent*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKEVENT_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

	};
}

