#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpDeliveryFormat_TypeDefinitionIndex = 29936;

	class SmtpDeliveryFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Mail::SmtpDeliveryFormat* SevenBit; // 0x0
		::System::Net::Mail::SmtpDeliveryFormat* International; // 0x0

	};
}

