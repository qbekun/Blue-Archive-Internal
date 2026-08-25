#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_SOURCEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_SOURCEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMouseEventInternal_TypeDefinitionIndex = 30493;

	class IMouseEventInternal : public Il2CppObject
	{
	public:
		::System::Boolean get_triggeredByOS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_TRIGGEREDBYOS_OFFSET))(nullptr);
		}

		::System::Void set_triggeredByOS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_TRIGGEREDBYOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_recomputeTopElementUnderMouse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET))(nullptr);
		}

		::System::Void set_recomputeTopElementUnderMouse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IPointerEvent* get_sourcePointerEvent()
		{
			return (return (::UnityEngine::UIElements::IPointerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_GET_SOURCEPOINTEREVENT_OFFSET))(nullptr);
		}

		::System::Void set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENTINTERNAL_SET_SOURCEPOINTEREVENT_OFFSET))(arg, nullptr);
		}

	};
}

