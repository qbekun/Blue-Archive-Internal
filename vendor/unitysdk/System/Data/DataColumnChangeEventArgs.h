#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9732580)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x97325E0)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_GET_PROPOSEDVALUE_OFFSET UNITYSDK_OFFSET(0x9732670)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_SET_PROPOSEDVALUE_OFFSET UNITYSDK_OFFSET(0x9732680)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_INITIALIZECOLUMNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9732690)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnChangeEventArgs_TypeDefinitionIndex = 32201;

	class DataColumnChangeEventArgs : public Il2CppObject
	{
	public:
		::System::Data::DataColumn* _column; // 0x10
		::System::Data::DataRow* _Row_k__BackingField; // 0x18
		::System::Object* _ProposedValue_k__BackingField; // 0x20

		::System::Void .ctor(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataRow* arg, ::System::Data::DataColumn* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_ProposedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_GET_PROPOSEDVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ProposedValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_SET_PROPOSEDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeColumnChangeEvent(::System::Data::DataColumn* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_INITIALIZECOLUMNCHANGEEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

