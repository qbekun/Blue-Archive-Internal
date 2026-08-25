#pragma once
#include "unitysdk.h"

#define UTF8ENCODINGSEALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x916E5C0)
#define UTF8ENCODINGSEALED_GET_PREAMBLE_OFFSET UNITYSDK_OFFSET(0x916E610)

	inline static constexpr unsigned int UTF8EncodingSealed_TypeDefinitionIndex = 24256;

	class UTF8EncodingSealed : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UTF8ENCODINGSEALED_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Preamble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8ENCODINGSEALED_GET_PREAMBLE_OFFSET))(nullptr);
		}

	};

