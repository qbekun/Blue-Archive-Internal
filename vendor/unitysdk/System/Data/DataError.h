#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9735EB0)
#define SYSTEM_DATA_DATAERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9735F10)
#define SYSTEM_DATA_DATAERROR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9736010)
#define SYSTEM_DATA_DATAERROR_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9736020)
#define SYSTEM_DATA_DATAERROR_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x9736080)
#define SYSTEM_DATA_DATAERROR_SETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x97360B0)
#define SYSTEM_DATA_DATAERROR_GETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x9736440)
#define SYSTEM_DATA_DATAERROR_CLEAR_OFFSET UNITYSDK_OFFSET(0x97361D0)
#define SYSTEM_DATA_DATAERROR_CLEAR_OFFSET UNITYSDK_OFFSET(0x97364D0)
#define SYSTEM_DATA_DATAERROR_GETCOLUMNSINERROR_OFFSET UNITYSDK_OFFSET(0x9736580)
#define SYSTEM_DATA_DATAERROR_SETTEXT_OFFSET UNITYSDK_OFFSET(0x9735FB0)
#define SYSTEM_DATA_DATAERROR_INDEXOF_OFFSET UNITYSDK_OFFSET(0x97362E0)

namespace System::Data
{
	inline static constexpr unsigned int DataError_TypeDefinitionIndex = 32206;

	class DataError : public Il2CppObject
	{
	public:
		::System::String* _rowError; // 0x10
		::System::Int32 _count; // 0x18
		::Il2CppArray<::System::Object*>* _errorList; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasErrors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GET_HASERRORS_OFFSET))(nullptr);
		}

		::System::Void SetColumnError(::System::Data::DataColumn* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SETCOLUMNERROR_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetColumnError(::System::Data::DataColumn* arg)
		{
			return (return (::System::String*(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GETCOLUMNERROR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_CLEAR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetColumnsInError()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GETCOLUMNSINERROR_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Int32 IndexOf(::System::Data::DataColumn* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_INDEXOF_OFFSET))(arg, nullptr);
		}

	};
}

