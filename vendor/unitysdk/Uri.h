#pragma once
#include "unitysdk.h"

#define URI_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823AD0)

	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 36708;

	class Uri : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::Uri&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Uri&*, ::PVOID))((::PBYTE)hIl2Cpp + URI_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

