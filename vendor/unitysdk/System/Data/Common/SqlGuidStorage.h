#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97F0660)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97F0780)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97F0990)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97F0A20)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97F0AD0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97F0B30)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97F0B80)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97F0BF0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97F0C60)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97F0CB0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97F0D60)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97F1030)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97F12E0)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97F1320)
#define SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97F1420)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlGuidStorage_TypeDefinitionIndex = 32375;

	class SqlGuidStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLGUIDSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

