#pragma once
#include "unitysdk.h"

#define DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823190)
#define DATETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98231E0)

	inline static constexpr unsigned int DateTime_TypeDefinitionIndex = 36700;

	class DateTime : public Il2CppObject
	{
	public:
		Il2CppObject* ToString; // 0x0

		::System::Boolean TryParse(::System::String* str, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + DATETIME_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATETIME_.CCTOR_OFFSET))(nullptr);
		}

	};

