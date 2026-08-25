#pragma once
#include "../unitysdk.h"

#define SYSTEM_IFORMATPROVIDER_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IFormatProvider_TypeDefinitionIndex = 23774;

	class IFormatProvider : public Il2CppObject
	{
	public:
		::System::Object* GetFormat(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IFORMATPROVIDER_GETFORMAT_OFFSET))(arg, nullptr);
		}

	};
}

