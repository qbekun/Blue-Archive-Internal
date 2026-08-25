#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpDeliveryMethod_TypeDefinitionIndex = 29937;

	class SmtpDeliveryMethod : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Mail::SmtpDeliveryMethod* Network; // 0x0
		::System::Net::Mail::SmtpDeliveryMethod* SpecifiedPickupDirectory; // 0x0
		::System::Net::Mail::SmtpDeliveryMethod* PickupDirectoryFromIis; // 0x0

	};
}

