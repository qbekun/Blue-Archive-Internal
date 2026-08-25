#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_ICREDENTIALS_GETCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int ICredentials_TypeDefinitionIndex = 29680;

	class ICredentials : public Il2CppObject
	{
	public:
		::System::Net::NetworkCredential* GetCredential(::System::Uri* arg, ::System::String* str)
		{
			return (return (::System::Net::NetworkCredential*(*)(::System::Uri*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ICREDENTIALS_GETCREDENTIAL_OFFSET))(arg, str, nullptr);
		}

	};
}

