#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWCHANGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9742D80)

namespace System::Data
{
	inline static constexpr unsigned int DataRowChangeEventArgs_TypeDefinitionIndex = 32216;

	class DataRowChangeEventArgs : public Il2CppObject
	{
	public:
		::System::Data::DataRow* _Row_k__BackingField; // 0x10
		::System::Data::DataRowAction* _Action_k__BackingField; // 0x18

		::System::Void .ctor(::System::Data::DataRow* arg, ::System::Data::DataRowAction* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataRowAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

