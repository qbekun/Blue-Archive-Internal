#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLECLEAREVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9744400)

namespace System::Data
{
	inline static constexpr unsigned int DataTableClearEventArgs_TypeDefinitionIndex = 32227;

	class DataTableClearEventArgs : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _Table_k__BackingField; // 0x10

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

