#pragma once
#include "unitysdk.h"

#define MD5_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98236B0)
#define MD5_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98237B0)

	inline static constexpr unsigned int MD5_TypeDefinitionIndex = 36706;

	class MD5 : public Il2CppObject
	{
	public:
		Il2CppObject* ToString; // 0x0

		::System::Boolean TryParse(::System::String* str, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MD5_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MD5_.CCTOR_OFFSET))(nullptr);
		}

	};

