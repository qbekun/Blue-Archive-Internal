#pragma once
#include "../unitysdk.h"

namespace FlatData { class MailSortingRule; }

namespace FlatData
{
	inline static constexpr unsigned int MailSortingRule_TypeDefinitionIndex = 9543;

	class MailSortingRule : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MailSortingRule* ReceiptDate; // 0x0
		::FlatData::MailSortingRule* ExpireDate; // 0x0

	};
}

