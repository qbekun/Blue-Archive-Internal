#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D0630)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97D0890)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97D08C0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97D0AA0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x97D0C00)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTFROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x97D12C0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97D1AF0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97D1B90)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97D1C60)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97D1D50)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97D1EF0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97D20B0)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97D2150)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97D2220)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97D2260)
#define SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97D2370)

namespace System::Data::Common
{
	inline static constexpr unsigned int BigIntegerStorage_TypeDefinitionIndex = 32353;

	class BigIntegerStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Numerics::BigInteger* ConvertToBigInteger(::System::Object* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Numerics::BigInteger*(*)(::System::Object*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTTOBIGINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFromBigInteger(::System::Numerics::BigInteger* arg, ::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Numerics::BigInteger*, ::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTFROMBIGINTEGER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_BIGINTEGERSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

