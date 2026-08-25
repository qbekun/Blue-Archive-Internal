#pragma once
#include "unitysdk.h"

class MailBoxCategory;

	inline static constexpr unsigned int MailBoxCategory_TypeDefinitionIndex = 1708;

	class MailBoxCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		MailBoxCategory* UnreadNormal; // 0x0
		MailBoxCategory* UnreadSemiPermanent; // 0x0
		MailBoxCategory* Read; // 0x0

	};

