#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D6720)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97D9BA0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97DA020)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97DA1D0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97DA330)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97DA470)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97DA4E0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97DA5D0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97DA9B0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97DAAE0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97DAB80)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97DAC40)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97DAC80)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97DADE0)
#define SYSTEM_DATA_COMMON_DATETIMESTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97DB010)

namespace System::Data::Common
{
	inline static constexpr unsigned int DateTimeStorage_TypeDefinitionIndex = 32360;

	class DateTimeStorage : public Il2CppObject
	{
	public:
		::System::DateTime* s_defaultValue; // 0x0
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATETIMESTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

