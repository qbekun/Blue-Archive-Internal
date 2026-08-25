#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x96DAB20)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int NoReflectionHelper_TypeDefinitionIndex = 29082;

	class NoReflectionHelper : public Il2CppObject
	{
	public:
		::System::Object* GetProvider()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_NOREFLECTIONHELPER_GETPROVIDER_OFFSET))(nullptr);
		}

	};
}

