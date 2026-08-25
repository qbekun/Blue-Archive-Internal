#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FDC80)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FDE00)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETSTATICNULLFORUDTTYPE_OFFSET UNITYSDK_OFFSET(0x97FDCF0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_ISNULL_OFFSET UNITYSDK_OFFSET(0x97FDF70)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x97FE090)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPARE_OFFSET UNITYSDK_OFFSET(0x97FE0C0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPAREVALUETO_OFFSET UNITYSDK_OFFSET(0x97FE100)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPY_OFFSET UNITYSDK_OFFSET(0x97FE3E0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x97FE470)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x97FE4A0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x97FE620)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97FE6E0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x97FEA40)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97FECE0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET UNITYSDK_OFFSET(0x97FF010)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETEMPTYSTORAGE_OFFSET UNITYSDK_OFFSET(0x97FF170)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPYVALUE_OFFSET UNITYSDK_OFFSET(0x97FF1B0)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETSTORAGE_OFFSET UNITYSDK_OFFSET(0x97FF300)
#define SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97FF3A0)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlUdtStorage_TypeDefinitionIndex = 32387;

	class SqlUdtStorage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _values; // 0x50
		::System::Boolean _implementsIXmlSerializable; // 0x58
		::System::Boolean _implementsIComparable; // 0x59
		Il2CppObject* s_typeToNull; // 0x0

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetStaticNullForUdtType(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETSTATICNULLFORUDTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Object* Aggregate(::Il2CppArray<::System::Object*>* arg, ::System::Data::AggregateType* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::System::Data::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_AGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareValueTo(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COMPAREVALUETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTXMLTOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ConvertObjectToXml(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertObjectToXml(::System::Object* arg, ::System::Xml::XmlWriter* arg, ::System::Xml::Serialization::XmlRootAttribute* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_CONVERTOBJECTTOXML_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetEmptyStorage(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_GETEMPTYSTORAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyValue(::System::Int32 arg, ::System::Object* arg, ::System::Collections::BitArray* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Collections::BitArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_COPYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStorage(::System::Object* arg, ::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_SETSTORAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLUDTSTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

