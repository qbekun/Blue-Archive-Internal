#pragma once
#include "unitysdk.h"

#define CSVRECORDCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1036C40)
#define CSVRECORDCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1037E00)

	inline static constexpr unsigned int CsvRecordComparer_TypeDefinitionIndex = 12836;

	class CsvRecordComparer : public Il2CppObject
	{
	public:
		::System::Int32 _field; // 0x10
		::System::ComponentModel::ListSortDirection* _direction; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::ComponentModel::ListSortDirection* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + CSVRECORDCOMPARER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVRECORDCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

	};

