#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FILEWEBREQUESTCREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4BE30)
#define SYSTEM_NET_FILEWEBREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9A625F0)

namespace System::Net
{
	inline static constexpr unsigned int FileWebRequestCreator_TypeDefinitionIndex = 29742;

	class FileWebRequestCreator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUESTCREATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUESTCREATOR_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

