#pragma once
#include "unitysdk.h"

#define MAILBOXSCROLLCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26843A0)
#define MAILBOXSCROLLCONTROLLER_REQUESTADDITIONALMAILS_OFFSET UNITYSDK_OFFSET(0x2684490)
#define MAILBOXSCROLLCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2684520)
#define MAILBOXSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26845C0)

	inline static constexpr unsigned int MailBoxScrollController_TypeDefinitionIndex = 6757;

	class MailBoxScrollController : public ::System::Xml::XmlEntityReference
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RequestAdditionalMails()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLCONTROLLER_REQUESTADDITIONALMAILS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

