#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class MouseMoveEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E3430)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E3470)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3480)
#define UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E34C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseMoveEvent_TypeDefinitionIndex = 30497;

	class MouseMoveEvent : public ::NPA::NXPLoginResultType
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			return (return (::UnityEngine::UIElements::MouseMoveEvent*(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEMOVEEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

	};
}

