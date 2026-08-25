#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BA6A70)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BA69D0)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_TIMEOUTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B9F390)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BA5110)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B9B3B0)

namespace System::Net
{
	inline static constexpr unsigned int ExceptionHelper_TypeDefinitionIndex = 29686;

	class ExceptionHelper : public Il2CppObject
	{
	public:
		::System::NotImplementedException* get_MethodNotImplementedException()
		{
			return (return (::System::NotImplementedException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTIMPLEMENTEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::NotImplementedException* get_PropertyNotImplementedException()
		{
			return (return (::System::NotImplementedException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTIMPLEMENTEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Net::WebException* get_TimeoutException()
		{
			return (return (::System::Net::WebException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_TIMEOUTEXCEPTION_OFFSET))(nullptr);
		}

		::System::NotSupportedException* get_PropertyNotSupportedException()
		{
			return (return (::System::NotSupportedException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Net::WebException* get_RequestAbortedException()
		{
			return (return (::System::Net::WebException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET))(nullptr);
		}

	};
}

