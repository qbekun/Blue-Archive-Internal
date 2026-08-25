#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9742D40)

namespace System::Data
{
	inline static constexpr unsigned int DataRowBuilder_TypeDefinitionIndex = 32214;

	class DataRowBuilder : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Int32 _record; // 0x18

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

