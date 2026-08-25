#pragma once
#include "unitysdk.h"

class UIMail;
class MailObject;

#define MAILBOXSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2684600)
#define MAILBOXSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2684640)

	inline static constexpr unsigned int MailBoxScrollElement_TypeDefinitionIndex = 6758;

	class MailBoxScrollElement : public ::System::Xml::XPath::XPathNodeIterator
	{
	public:
		UIMail* uiUnreadMail; // 0x28
		UIMail* uiReadMail; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(MailObject* arg)
		{
			((::System::Void(*)(MailObject*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

