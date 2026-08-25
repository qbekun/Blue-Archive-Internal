#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D6890)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97D8AD0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97D8FF0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97D9220)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97D93B0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97D9430)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97D94B0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97D95D0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97D96E0)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97D9810)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97D9890)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97D9940)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97D9980)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97D9A80)
#define SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97D9B30)

namespace System::Data::Common
{
	inline static constexpr unsigned int DateTimeOffsetStorage_TypeDefinitionIndex = 32359;

	class DateTimeOffsetStorage : public Il2CppObject
	{
	public:
		::System::DateTimeOffset* s_defaultValue; // 0x0
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMEOFFSETSTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

