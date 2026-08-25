#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FFFC0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x98000D0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x9800D70)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x9800EF0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9801060)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x9801230)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x98012C0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x9801310)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x9801400)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x98014C0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x9801580)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x98015F0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x9801690)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x98016D0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x98017C0)
#define SYSTEM_DATA_COMMON_TIMESPANSTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9801870)

namespace System::Data::Common
{
	inline static constexpr unsigned int TimeSpanStorage_TypeDefinitionIndex = 32389;

	class TimeSpanStorage : public Il2CppObject
	{
	public:
		::System::TimeSpan* s_defaultValue; // 0x0
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* ConvertToTimeSpan(::System::Object* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTTOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_TIMESPANSTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

