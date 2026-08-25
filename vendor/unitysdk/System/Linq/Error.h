#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET UNITYSDK_OFFSET(0x962EA70)
#define SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x962EAD0)
#define SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET UNITYSDK_OFFSET(0x962EB30)
#define SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x962EBA0)
#define SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x962EC10)
#define SYSTEM_LINQ_ERROR_NOMATCH_OFFSET UNITYSDK_OFFSET(0x962EC80)
#define SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x962ECF0)

namespace System::Linq
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 32921;

	class Error : public Il2CppObject
	{
	public:
		::System::Exception* ArgumentNull(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTNULL_OFFSET))(str, nullptr);
		}

		::System::Exception* ArgumentOutOfRange(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(str, nullptr);
		}

		::System::Exception* MoreThanOneElement()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEELEMENT_OFFSET))(nullptr);
		}

		::System::Exception* MoreThanOneMatch()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_MORETHANONEMATCH_OFFSET))(nullptr);
		}

		::System::Exception* NoElements()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOELEMENTS_OFFSET))(nullptr);
		}

		::System::Exception* NoMatch()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOMATCH_OFFSET))(nullptr);
		}

		::System::Exception* NotSupported()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ERROR_NOTSUPPORTED_OFFSET))(nullptr);
		}

	};
}

