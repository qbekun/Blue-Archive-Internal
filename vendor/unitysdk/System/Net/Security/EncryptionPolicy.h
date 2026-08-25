#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int EncryptionPolicy_TypeDefinitionIndex = 29942;

	class EncryptionPolicy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Security::EncryptionPolicy* RequireEncryption; // 0x0
		::System::Net::Security::EncryptionPolicy* AllowNoEncryption; // 0x0
		::System::Net::Security::EncryptionPolicy* NoEncryption; // 0x0

	};
}

