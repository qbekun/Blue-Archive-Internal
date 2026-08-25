#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT_GET_CREATOR_OFFSET UNITYSDK_OFFSET(0x9BA7460)
#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT_SET_CREATOR_OFFSET UNITYSDK_OFFSET(0x9BA76B0)
#define SYSTEM_NET_WEBREQUESTPREFIXELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA76C0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequestPrefixElement_TypeDefinitionIndex = 29687;

	class WebRequestPrefixElement : public Il2CppObject
	{
	public:
		::System::String* Prefix; // 0x10
		::System::Net::IWebRequestCreate* creator; // 0x18
		::System::Type* creatorType; // 0x20

		::System::Net::IWebRequestCreate* get_Creator()
		{
			return (return (::System::Net::IWebRequestCreate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT_GET_CREATOR_OFFSET))(nullptr);
		}

		::System::Void set_Creator(::System::Net::IWebRequestCreate* arg)
		{
			((::System::Void(*)(::System::Net::IWebRequestCreate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT_SET_CREATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Net::IWebRequestCreate* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::IWebRequestCreate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTPREFIXELEMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

