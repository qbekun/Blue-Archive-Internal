#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_GET_ISHANDLEDBYDRAGGABLE_OFFSET UNITYSDK_OFFSET(0xA3E6610)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_SET_ISHANDLEDBYDRAGGABLE_OFFSET UNITYSDK_OFFSET(0xA3E6620)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E6630)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E6670)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E6770)
#define UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E67B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerMoveEvent_TypeDefinitionIndex = 30532;

	class PointerMoveEvent : public <>c
	{
	public:
		::System::Boolean _isHandledByDraggable_k__BackingField; // 0xF8

		::System::Boolean get_isHandledByDraggable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_GET_ISHANDLEDBYDRAGGABLE_OFFSET))(nullptr);
		}

		::System::Void set_isHandledByDraggable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_SET_ISHANDLEDBYDRAGGABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERMOVEEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

