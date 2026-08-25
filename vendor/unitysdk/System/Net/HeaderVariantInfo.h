#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HEADERVARIANTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A59660)
#define SYSTEM_NET_HEADERVARIANTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A59680)
#define SYSTEM_NET_HEADERVARIANTINFO_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x9A59690)

namespace System::Net
{
	inline static constexpr unsigned int HeaderVariantInfo_TypeDefinitionIndex = 29736;

	class HeaderVariantInfo : public Il2CppObject
	{
	public:
		::System::String* m_name; // 0x10
		::System::Net::CookieVariant* m_variant; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Net::CookieVariant* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::CookieVariant*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Net::CookieVariant* get_Variant()
		{
			return (return (::System::Net::CookieVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO_GET_VARIANT_OFFSET))(nullptr);
		}

	};
}

