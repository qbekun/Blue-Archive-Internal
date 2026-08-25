#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C9D30)
#define SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C9E40)
#define SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99C9D80)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99C9E90)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99C9EA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99C9EB0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x99CA190)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99CA1D0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x99CA230)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x99CA410)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x99CA360)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99CA480)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x99C9FD0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET UNITYSDK_OFFSET(0x99CA4E0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x99CA5C0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET UNITYSDK_OFFSET(0x99CA5F0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_SETNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99CA630)
#define SYSTEM_XML_XMLQUALIFIEDNAME_VERIFY_OFFSET UNITYSDK_OFFSET(0x99CA640)
#define SYSTEM_XML_XMLQUALIFIEDNAME_ATOMIZE_OFFSET UNITYSDK_OFFSET(0x99CA760)
#define SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET UNITYSDK_OFFSET(0x99CA7E0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x99CA980)
#define SYSTEM_XML_XMLQUALIFIEDNAME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99CAA00)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_TypeDefinitionIndex = 27837;

	class XmlQualifiedName : public Il2CppObject
	{
	public:
		HashCodeOfStringDelegate* hashCodeDelegate; // 0x0
		::System::String* name; // 0x10
		::System::String* ns; // 0x18
		::System::Int32 hash; // 0x20
		::System::Xml::XmlQualifiedName* Empty; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Xml::XmlQualifiedName* arg, ::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Xml::XmlQualifiedName* arg, ::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET))(str, str, nullptr);
		}

		HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return (return (HashCodeOfStringDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET))(nullptr);
		}

		::System::Boolean IsRandomizedHashingDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCodeOfString(::System::String* str, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Init(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET))(str, str, nullptr);
		}

		::System::Void SetNamespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_SETNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void Verify()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_VERIFY_OFFSET))(nullptr);
		}

		::System::Void Atomize(::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_ATOMIZE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* Parse(::System::String* str, ::System::Xml::IXmlNamespaceResolver* arg, ::System::String&* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* Clone()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_CLONE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

