#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }

#define UIPOPUP_DREAMMAKER_SCHEDULELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0DD00)
#define UIPOPUP_DREAMMAKER_SCHEDULELIST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xD0DE20)
#define UIPOPUP_DREAMMAKER_SCHEDULELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xD0E080)
#define UIPOPUP_DREAMMAKER_SCHEDULELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xD0E090)

	inline static constexpr unsigned int UIPopup_DreamMaker_ScheduleList_TypeDefinitionIndex = 623;

	class UIPopup_DreamMaker_ScheduleList : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		::UnityEngine::Animation* scheduleListOpenAnimation; // 0x20
		Il2CppObject* scheduleUnitList; // 0x28

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_SCHEDULELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_SCHEDULELIST_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_SCHEDULELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_SCHEDULELIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

