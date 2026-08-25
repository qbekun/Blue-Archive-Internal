#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_INULLABLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int INullable_TypeDefinitionIndex = 32324;

	class INullable : public Il2CppObject
	{
	public:
		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_INULLABLE_GET_ISNULL_OFFSET))(nullptr);
		}

	};
}

