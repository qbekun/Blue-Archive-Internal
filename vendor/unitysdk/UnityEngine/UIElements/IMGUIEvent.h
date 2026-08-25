#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IMGUIEvent; }
namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3FEE80)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FEF20)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FEF60)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEF70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEvent_TypeDefinitionIndex = 30552;

	class IMGUIEvent : public <>c__DisplayClass48_3
	{
	public:
		::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (::UnityEngine::UIElements::IMGUIEvent*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

