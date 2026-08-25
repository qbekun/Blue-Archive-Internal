#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x985B830)
#define SYSTEM_XML_LINQ_XNAME_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x985B8F0)
#define SYSTEM_XML_LINQ_XNAME_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x985B900)
#define SYSTEM_XML_LINQ_XNAME_GET_NAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x9852830)
#define SYSTEM_XML_LINQ_XNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x985B910)
#define SYSTEM_XML_LINQ_XNAME_GET_OFFSET UNITYSDK_OFFSET(0x985B990)
#define SYSTEM_XML_LINQ_XNAME_GET_OFFSET UNITYSDK_OFFSET(0x985C0A0)
#define SYSTEM_XML_LINQ_XNAME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x985C0D0)
#define SYSTEM_XML_LINQ_XNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x985C0E0)
#define SYSTEM_XML_LINQ_XNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x985C0F0)
#define SYSTEM_XML_LINQ_XNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9852100)
#define SYSTEM_XML_LINQ_XNAME_SYSTEM.IEQUATABLE_SYSTEM.XML.LINQ.XNAME_.EQUALS_OFFSET UNITYSDK_OFFSET(0x985C100)
#define SYSTEM_XML_LINQ_XNAME_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x985C110)
#define SYSTEM_XML_LINQ_XNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x985C160)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XName_TypeDefinitionIndex = 37309;

	class XName : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XNamespace* _ns; // 0x10
		::System::String* _localName; // 0x18
		::System::Int32 _hashCode; // 0x20

		::System::Void .ctor(::System::Xml::Linq::XNamespace* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Linq::XNamespace*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XNamespace* get_Namespace()
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_NAMESPACENAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XName* Get(::System::String* str)
		{
			return (return (::System::Xml::Linq::XName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_OFFSET))(str, nullptr);
		}

		::System::Xml::Linq::XName* Get(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Linq::XName*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GET_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Linq::XName* op_Implicit(::System::String* str)
		{
			return (return (::System::Xml::Linq::XName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Xml::Linq::XName* arg, ::System::Xml::Linq::XName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XName*, ::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.IEquatable_System.Xml.Linq.XName_.Equals(::System::Xml::Linq::XName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_SYSTEM.IEQUATABLE_SYSTEM.XML.LINQ.XNAME_.EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

