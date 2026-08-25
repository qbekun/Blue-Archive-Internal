#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class NavigationMoveEvent; }

#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E4500)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E4580)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA3E4590)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_SET_MOVE_OFFSET UNITYSDK_OFFSET(0xA3E45A0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E45B0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E46D0)
#define UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E4750)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int NavigationMoveEvent_TypeDefinitionIndex = 30513;

	class NavigationMoveEvent : public <>c__DisplayClass74_0
	{
	public:
		Direction* _direction_k__BackingField; // 0x80
		::UnityEngine::Vector2* _move_k__BackingField; // 0x84

		Direction* DetermineMoveDirection(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Direction*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_DETERMINEMOVEDIRECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		Direction* get_direction()
		{
			return (return (Direction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_direction(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_move(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_SET_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::NavigationMoveEvent*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATIONMOVEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

