#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E1C50)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E1CF0)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E1D70)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_OLDRECT_OFFSET UNITYSDK_OFFSET(0xA3E1DC0)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_OLDRECT_OFFSET UNITYSDK_OFFSET(0xA3E1DD0)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_NEWRECT_OFFSET UNITYSDK_OFFSET(0xA3E1DE0)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_NEWRECT_OFFSET UNITYSDK_OFFSET(0xA3E1DF0)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_LAYOUTPASS_OFFSET UNITYSDK_OFFSET(0xA3E1E00)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_LAYOUTPASS_OFFSET UNITYSDK_OFFSET(0xA3E1E10)
#define UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1E20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GeometryChangedEvent_TypeDefinitionIndex = 30488;

	class GeometryChangedEvent : public <>c__DisplayClass48_2
	{
	public:
		::UnityEngine::Rect* _oldRect_k__BackingField; // 0x80
		::UnityEngine::Rect* _newRect_k__BackingField; // 0x90
		::System::Int32 _layoutPass_k__BackingField; // 0xA0

		::UnityEngine::UIElements::GeometryChangedEvent* GetPooled(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::UIElements::GeometryChangedEvent*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_oldRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_OLDRECT_OFFSET))(nullptr);
		}

		::System::Void set_oldRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_OLDRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_newRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_NEWRECT_OFFSET))(nullptr);
		}

		::System::Void set_newRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_NEWRECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_layoutPass()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_GET_LAYOUTPASS_OFFSET))(nullptr);
		}

		::System::Void set_layoutPass(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_SET_LAYOUTPASS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GEOMETRYCHANGEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

