#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FA290)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97FA3F0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97FA770)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97FA800)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97FA930)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97FAA10)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97FAA80)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97FAAE0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x97FAB60)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97FAC20)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97FACA0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97FAD10)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97FADC0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97FB0C0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97FB370)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97FB3B0)
#define SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97FB4E0)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlStringStorage_TypeDefinitionIndex = 32381;

	class SqlStringStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStringLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLSTRINGSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

