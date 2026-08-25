#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPWEBREQUESTCREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA5BF0)
#define SYSTEM_NET_FTPWEBREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9BA5C00)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequestCreator_TypeDefinitionIndex = 29667;

	class FtpWebRequestCreator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUESTCREATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUESTCREATOR_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

