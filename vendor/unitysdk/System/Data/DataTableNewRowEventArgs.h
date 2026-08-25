#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLENEWROWEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9746F60)

namespace System::Data
{
	inline static constexpr unsigned int DataTableNewRowEventArgs_TypeDefinitionIndex = 32230;

	class DataTableNewRowEventArgs : public Il2CppObject
	{
	public:
		::System::Data::DataRow* _Row_k__BackingField; // 0x10

		::System::Void .ctor(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

