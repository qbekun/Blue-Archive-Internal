#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D6F20)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97ECD10)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97EDE60)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97EDF20)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97EDFE0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97EE040)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97EE0A0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97EE120)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97EE1A0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97EE1F0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97EE2A0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97EE5A0)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97EE850)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97EE890)
#define SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97EE9A0)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlDecimalStorage_TypeDefinitionIndex = 32373;

	class SqlDecimalStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLDECIMALSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

