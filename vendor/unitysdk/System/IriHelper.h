#pragma once
#include "../unitysdk.h"

#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET UNITYSDK_OFFSET(0x9AD0DD0)
#define SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET UNITYSDK_OFFSET(0x9AD0E40)
#define SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET UNITYSDK_OFFSET(0x9AD13A0)
#define SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x9AD14B0)

namespace System
{
	inline static constexpr unsigned int IriHelper_TypeDefinitionIndex = 29169;

	class IriHelper : public Il2CppObject
	{
	public:
		::System::Boolean CheckIriUnicodeRange(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckIriUnicodeRange(::System::Char arg, ::System::Char arg, bool&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Char, bool&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKIRIUNICODERANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckIsReserved(::System::Char arg, ::System::UriComponents* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::UriComponents*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_CHECKISRESERVED_OFFSET))(arg, arg, nullptr);
		}

		::System::String* EscapeUnescapeIri(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::UriComponents* arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::System::Int32, ::System::Int32, ::System::UriComponents*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IRIHELPER_ESCAPEUNESCAPEIRI_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

