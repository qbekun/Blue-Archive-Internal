#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_PUNYCODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C48E0)

namespace System::Globalization
{
	inline static constexpr unsigned int Punycode_TypeDefinitionIndex = 25017;

	class Punycode : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_PUNYCODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

