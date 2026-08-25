#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DATETIMECONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9227C30)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DateTimeConstantAttribute_TypeDefinitionIndex = 24745;

	class DateTimeConstantAttribute : public Il2CppObject
	{
	public:
		::System::DateTime* _date; // 0x10

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DATETIMECONSTANTATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

