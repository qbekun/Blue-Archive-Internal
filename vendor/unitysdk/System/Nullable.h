#pragma once
#include "../unitysdk.h"

#define SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x935E240)

namespace System
{
	inline static constexpr unsigned int Nullable_TypeDefinitionIndex = 23808;

	class Nullable : public Il2CppObject
	{
	public:
		::System::Type* GetUnderlyingType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLABLE_GETUNDERLYINGTYPE_OFFSET))(arg, nullptr);
		}

	};
}

