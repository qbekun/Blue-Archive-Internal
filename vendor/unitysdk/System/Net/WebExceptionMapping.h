#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x9BA91D0)
#define SYSTEM_NET_WEBEXCEPTIONMAPPING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BA93B0)

namespace System::Net
{
	inline static constexpr unsigned int WebExceptionMapping_TypeDefinitionIndex = 29698;

	class WebExceptionMapping : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_Mapping; // 0x0

		::System::String* GetWebStatusString(::System::Net::WebExceptionStatus* arg)
		{
			return (return (::System::String*(*)(::System::Net::WebExceptionStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING_GETWEBSTATUSSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTIONMAPPING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

