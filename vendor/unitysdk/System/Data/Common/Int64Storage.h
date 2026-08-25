#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_INT64STORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D6340)
#define SYSTEM_DATA_COMMON_INT64STORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97DFB80)
#define SYSTEM_DATA_COMMON_INT64STORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97E0340)
#define SYSTEM_DATA_COMMON_INT64STORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97E0410)
#define SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97E04F0)
#define SYSTEM_DATA_COMMON_INT64STORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97E0630)
#define SYSTEM_DATA_COMMON_INT64STORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97E06A0)
#define SYSTEM_DATA_COMMON_INT64STORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97E0730)
#define SYSTEM_DATA_COMMON_INT64STORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97E08B0)
#define SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97E09E0)
#define SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97E0A50)
#define SYSTEM_DATA_COMMON_INT64STORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97E0AF0)
#define SYSTEM_DATA_COMMON_INT64STORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97E0B30)
#define SYSTEM_DATA_COMMON_INT64STORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97E0C20)

namespace System::Data::Common
{
	inline static constexpr unsigned int Int64Storage_TypeDefinitionIndex = 32365;

	class Int64Storage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_INT64STORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

