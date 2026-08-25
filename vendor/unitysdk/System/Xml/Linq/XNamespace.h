#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XNAMESPACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x985C190)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x985C290)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET UNITYSDK_OFFSET(0x9857AC0)
#define SYSTEM_XML_LINQ_XNAMESPACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x985C2A0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x985C040)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XML_OFFSET UNITYSDK_OFFSET(0x985C3D0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XMLNS_OFFSET UNITYSDK_OFFSET(0x985C420)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET UNITYSDK_OFFSET(0x985A580)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x985C470)
#define SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET UNITYSDK_OFFSET(0x985C480)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x985C490)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9859250)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x985C4A0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET UNITYSDK_OFFSET(0x985BF40)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET UNITYSDK_OFFSET(0x985BB40)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET UNITYSDK_OFFSET(0x985C4B0)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x985C4D0)
#define SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET UNITYSDK_OFFSET(0x985C2B0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XNamespace_TypeDefinitionIndex = 37310;

	class XNamespace : public Il2CppObject
	{
	public:
		Il2CppObject* s_namespaces; // 0x0
		::System::WeakReference* s_refNone; // 0x8
		::System::WeakReference* s_refXml; // 0x10
		::System::WeakReference* s_refXmlns; // 0x18
		::System::String* _namespaceName; // 0x10
		::System::Int32 _hashCode; // 0x18
		Il2CppObject* _names; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_NamespaceName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XName* GetName(::System::String* str)
		{
			return (return (::System::Xml::Linq::XName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XNamespace* get_None()
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_NONE_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XNamespace* get_Xml()
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_XML_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XNamespace* get_Xmlns()
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_XMLNS_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XNamespace* Get(::System::String* str)
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET))(str, nullptr);
		}

		::System::Xml::Linq::XNamespace* op_Implicit(::System::String* str)
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Xml::Linq::XNamespace* arg, ::System::Xml::Linq::XNamespace* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Xml::Linq::XNamespace* arg, ::System::Xml::Linq::XNamespace* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Linq::XName* GetName(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Xml::Linq::XName*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Xml::Linq::XNamespace* Get(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ExtractLocalName(::System::Xml::Linq::XName* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET))(arg, nullptr);
		}

		::System::String* ExtractNamespace(::System::WeakReference* arg)
		{
			return (return (::System::String*(*)(::System::WeakReference*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNamespace* EnsureNamespace(::System::WeakReference&* arg, ::System::String* str)
		{
			return (return (::System::Xml::Linq::XNamespace*(*)(::System::WeakReference&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET))(arg, str, nullptr);
		}

	};
}

