#pragma once
#include "unitysdk.h"

#define HOST_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823520)

	inline static constexpr unsigned int Host_TypeDefinitionIndex = 36702;

	class Host : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + HOST_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

