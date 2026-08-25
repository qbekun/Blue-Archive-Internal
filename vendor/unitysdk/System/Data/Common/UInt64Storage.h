#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_UINT64STORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9803B70)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x9803C60)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x9804410)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x9804510)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x98045F0)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x9804730)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_GET_OFFSET UNITYSDK_OFFSET(0x9804780)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_SET_OFFSET UNITYSDK_OFFSET(0x9804830)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x98049B0)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x9804A70)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x9804AE0)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x9804B80)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x9804BC0)
#define SYSTEM_DATA_COMMON_UINT64STORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x9804CB0)

namespace System::Data::Common
{
	inline static constexpr unsigned int UInt64Storage_TypeDefinitionIndex = 32392;

	class UInt64Storage : public Il2CppObject
	{
	public:
		::System::UInt64 s_defaultValue; // 0x0
		::Il2CppArray<::System::Object*>* _values; // 0x50

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_UINT64STORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

