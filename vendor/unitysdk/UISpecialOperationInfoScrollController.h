#pragma once
#include "unitysdk.h"

#define UISPECIALOPERATIONINFOSCROLLCONTROLLER_GET_EVENTCURRPOINT_OFFSET UNITYSDK_OFFSET(0x24607C0)
#define UISPECIALOPERATIONINFOSCROLLCONTROLLER_SETSPECIALOPERATIONITEMDATA_OFFSET UNITYSDK_OFFSET(0x24603D0)
#define UISPECIALOPERATIONINFOSCROLLCONTROLLER_SET_EVENTCURRPOINT_OFFSET UNITYSDK_OFFSET(0x24607D0)
#define UISPECIALOPERATIONINFOSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24607E0)

	inline static constexpr unsigned int UISpecialOperationInfoScrollController_TypeDefinitionIndex = 5599;

	class UISpecialOperationInfoScrollController : public ::System::Xml::DocumentXPathNodeIterator_ElemChildren_AndSelf
	{
	public:
		::System::Int64 eventCurrPoint; // 0x90

		::System::Int64 get_EventCurrPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLCONTROLLER_GET_EVENTCURRPOINT_OFFSET))(nullptr);
		}

		::System::Void SetSpecialOperationItemData(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLCONTROLLER_SETSPECIALOPERATIONITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_EventCurrPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLCONTROLLER_SET_EVENTCURRPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONINFOSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

