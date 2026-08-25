#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class MouseLeaveWindowEvent; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E3AA0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E3B70)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E3C10)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E3CE0)
#define UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E3E90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseLeaveWindowEvent_TypeDefinitionIndex = 30503;

	class MouseLeaveWindowEvent : public ::NPA::NXPArenaRegion
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (::UnityEngine::UIElements::MouseLeaveWindowEvent*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSELEAVEWINDOWEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

