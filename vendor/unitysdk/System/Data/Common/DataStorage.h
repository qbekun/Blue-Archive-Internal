#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D0800)
#define SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D5500)
#define SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97D53B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GET_DATETIMEMODE_OFFSET UNITYSDK_OFFSET(0x97D5590)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x97D1B70)
#define SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97D2870)
#define SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATECOUNT_OFFSET UNITYSDK_OFFSET(0x97D55B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREBITS_OFFSET UNITYSDK_OFFSET(0x97D0A30)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTVALUE_OFFSET UNITYSDK_OFFSET(0x97D5650)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPYBITS_OFFSET UNITYSDK_OFFSET(0x97D1C20)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETBITS_OFFSET UNITYSDK_OFFSET(0x97D1D20)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x97D5660)
#define SYSTEM_DATA_COMMON_DATASTORAGE_HASVALUE_OFFSET UNITYSDK_OFFSET(0x97D0BD0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97D5670)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLBIT_OFFSET UNITYSDK_OFFSET(0x97D1ED0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97D2020)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97D5690)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97D56E0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_CREATESTORAGE_OFFSET UNITYSDK_OFFSET(0x97D5730)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETSTORAGETYPE_OFFSET UNITYSDK_OFFSET(0x97D7060)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPESTORAGE_OFFSET UNITYSDK_OFFSET(0x97D71B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET UNITYSDK_OFFSET(0x97D7240)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET UNITYSDK_OFFSET(0x97D5530)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET UNITYSDK_OFFSET(0x97D72A0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET UNITYSDK_OFFSET(0x97D72B0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_DETERMINEIFVALUETYPE_OFFSET UNITYSDK_OFFSET(0x97D5550)
#define SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINTERFACES_OFFSET UNITYSDK_OFFSET(0x97D73C0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_INSPECTTYPEFORINTERFACES_OFFSET UNITYSDK_OFFSET(0x97D7540)
#define SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINULLABLEVALUE_OFFSET UNITYSDK_OFFSET(0x97D76D0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTNULL_OFFSET UNITYSDK_OFFSET(0x97D7790)
#define SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTSQLNULL_OFFSET UNITYSDK_OFFSET(0x97D78D0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x97D7980)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x97D79A0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x97D79D0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLSTORAGE_OFFSET UNITYSDK_OFFSET(0x97D79F0)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x97D7A00)
#define SYSTEM_DATA_COMMON_DATASTORAGE_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x97D7B10)
#define SYSTEM_DATA_COMMON_DATASTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97D7B80)

namespace System::Data::Common
{
	inline static constexpr unsigned int DataStorage_TypeDefinitionIndex = 32358;

	class DataStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_storageClassType; // 0x0
		::System::Data::DataColumn* _column; // 0x10
		::System::Data::DataTable* _table; // 0x18
		::System::Type* _dataType; // 0x20
		::System::Data::Common::StorageType* _storageTypeCode; // 0x28
		::System::Collections::BitArray* _dbNullBits; // 0x30
		::System::Object* _defaultValue; // 0x38
		::System::Object* _nullValue; // 0x40
		::System::Boolean _isCloneable; // 0x48
		::System::Boolean _isCustomDefinedType; // 0x49
		::System::Boolean _isStringType; // 0x4A
		::System::Boolean _isValueType; // 0x4B
		Il2CppObject* s_inspectTypeForInterfaces; // 0x8
		Il2CppObject* s_typeImplementsInterface; // 0x10

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg, ::System::Object* arg, ::System::Data::Common::StorageType* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg, ::System::Object* arg, ::System::Object* arg, ::System::Data::Common::StorageType* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg, ::System::Object* arg, ::System::Object* arg, ::System::Boolean arg, ::System::Data::Common::StorageType* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Data::DataSetDateTime* get_DateTimeMode()
		{
			return (return (::System::Data::DataSetDateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GET_DATETIMEMODE_OFFSET))(nullptr);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return (return (::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GET_FORMATPROVIDER_OFFSET))(nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* AggregateCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_AGGREGATECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareBits(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREBITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyBits(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPYBITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* GetBits(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETBITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStringLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasValue(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_HASVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetNullBit(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLBIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTXMLTOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertObjectToXml(::System::Object* arg, ::System::Xml::XmlWriter* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::Common::DataStorage* CreateStorage(::System::Data::DataColumn* arg, ::System::Type* arg, ::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Data::Common::DataStorage*(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_CREATESTORAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::Common::StorageType* GetStorageType(::System::Type* arg)
		{
			return (return (::System::Data::Common::StorageType*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETSTORAGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetTypeStorage(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Type*(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPESTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTypeCustomType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTypeCustomType(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISTYPECUSTOMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSqlType(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSqlType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISSQLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean DetermineIfValueType(::System::Data::Common::StorageType* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_DETERMINEIFVALUETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImplementsInterfaces(::System::Data::Common::StorageType* arg, ::System::Type* arg, bool&* arg, bool&* arg, bool&* arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Data::Common::StorageType*, ::System::Type*, bool&*, bool&*, bool&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINTERFACES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InspectTypeForInterfaces(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_INSPECTTYPEFORINTERFACES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ImplementsINullableValue(::System::Data::Common::StorageType* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_IMPLEMENTSINULLABLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsObjectNull(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTNULL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsObjectSqlNull(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_ISOBJECTSQLNULL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetEmptyStorageInternal(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValueInternal(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorageInternal(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetNullStorage(::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_SETNULLSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETTYPE_OFFSET))(str, nullptr);
		}

		::System::String* GetQualifiedName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_GETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_DATASTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

