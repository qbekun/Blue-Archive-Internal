#pragma once
#include "unitysdk.h"

class UIEventNoticeScrollViewController;

#define UIPOPUP_EVENTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B94B0)
#define UIPOPUP_EVENTNOTICE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24B94C0)
#define UIPOPUP_EVENTNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24B9500)
#define UIPOPUP_EVENTNOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24BA710)

	inline static constexpr unsigned int UIPopup_EventNotice_TypeDefinitionIndex = 5875;

	class UIPopup_EventNotice : public Il2CppObject
	{
	public:
		UIEventNoticeScrollViewController* EventNoticeScrollView; // 0xD8
		::System::Action* closeCallback; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTNOTICE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EVENTNOTICE_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

