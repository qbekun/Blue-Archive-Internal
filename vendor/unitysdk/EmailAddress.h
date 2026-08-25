#pragma once
#include "unitysdk.h"

#define EMAILADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823410)

	inline static constexpr unsigned int EmailAddress_TypeDefinitionIndex = 36701;

	class EmailAddress : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + EMAILADDRESS_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

