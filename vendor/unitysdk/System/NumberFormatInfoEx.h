#pragma once
#include "../unitysdk.h"

#define SYSTEM_NUMBERFORMATINFOEX_HASINVARIANTNUMBERSIGNS_OFFSET UNITYSDK_OFFSET(0xA4C8FC0)

namespace System
{
	inline static constexpr unsigned int NumberFormatInfoEx_TypeDefinitionIndex = 34665;

	class NumberFormatInfoEx : public Il2CppObject
	{
	public:
		::System::Boolean HasInvariantNumberSigns(::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATINFOEX_HASINVARIANTNUMBERSIGNS_OFFSET))(arg, nullptr);
		}

	};
}

