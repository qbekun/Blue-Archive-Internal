#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class NavigationTabEvent; }

#define UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E47A0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E47B0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E47D0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E4850)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E48A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int NavigationTabEvent_TypeDefinitionIndex = 30515;

	class NavigationTabEvent : public <>c__DisplayClass76_0
	{
	public:
		Direction* _direction_k__BackingField; // 0x80

		::System::Void set_direction(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		Direction* DetermineMoveDirection(::System::Int32 arg)
		{
			return (return (Direction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_DETERMINEMOVEDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::NavigationTabEvent* GetPooled(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::NavigationTabEvent*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONTABEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

