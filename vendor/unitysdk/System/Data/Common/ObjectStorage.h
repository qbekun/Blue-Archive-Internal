#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97CB8F0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97CBA80)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97CBAB0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97CC110)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97CC310)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREWITHFAMILIES_OFFSET UNITYSDK_OFFSET(0x97CBCA0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97CC5C0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97CC640)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETFAMILY_OFFSET UNITYSDK_OFFSET(0x97CC4D0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97CC680)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97CC6B0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97CCFB0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97CD060)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97CD690)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97CE4D0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97CEA30)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97CEBA0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97CEBE0)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97CEE10)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_VERIFYIDYNAMICMETAOBJECTPROVIDER_OFFSET UNITYSDK_OFFSET(0x97CF040)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET UNITYSDK_OFFSET(0x97CD620)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET UNITYSDK_OFFSET(0x97CDD50)
#define SYSTEM_DATA_COMMON_OBJECTSTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97CF160)

namespace System::Data::Common
{
	inline static constexpr unsigned int ObjectStorage_TypeDefinitionIndex = 32351;

	class ObjectStorage : public Il2CppObject
	{
	public:
		::System::Object* s_defaultValue; // 0x0
		::Il2CppArray<::System::Object*>* _values; // 0x50
		::System::Boolean _implementsIXmlSerializable; // 0x58
		::System::Object* s_tempAssemblyCacheLock; // 0x8
		Il2CppObject* s_tempAssemblyCache; // 0x10
		::System::Xml::Serialization::XmlSerializerFactory* s_serializerFactory; // 0x18

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPARETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareWithFamilies(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COMPAREWITHFAMILIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		Families* GetFamily(::System::Type* arg)
		{
			return (return (Families*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETFAMILY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertObjectToXml(::System::Object* arg, ::System::Xml::XmlWriter* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void VerifyIDynamicMetaObjectProvider(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_VERIFYIDYNAMICMETAOBJECTPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			return (return (::System::Xml::Serialization::XmlSerializer*(*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_GETXMLSERIALIZER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_OBJECTSTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

