#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97F6960)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97F6A80)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97F7BA0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97F7C50)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97F7D10)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97F7D80)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97F7DD0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97F7E40)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97F7EC0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97F7F10)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97F7FC0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97F82C0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97F8570)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97F85B0)
#define SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97F86B0)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlMoneyStorage_TypeDefinitionIndex = 32379;

	class SqlMoneyStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLMONEYSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

