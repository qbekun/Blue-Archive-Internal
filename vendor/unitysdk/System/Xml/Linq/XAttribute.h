#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9852010)
#define SYSTEM_XML_LINQ_XATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9852710)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_ISNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x98527B0)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9852850)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9852860)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9852870)
#define SYSTEM_XML_LINQ_XATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9852880)
#define SYSTEM_XML_LINQ_XATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9852BE0)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x9852FB0)
#define SYSTEM_XML_LINQ_XATTRIBUTE_VALIDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98524C0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XAttribute_TypeDefinitionIndex = 37287;

	class XAttribute : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XAttribute* next; // 0x20
		::System::Xml::Linq::XName* name; // 0x28
		::System::String* value; // 0x30

		::System::Void .ctor(::System::Xml::Linq::XName* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XName*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNamespaceDeclaration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_ISNAMESPACEDECLARATION_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XName* get_Name()
		{
			return (return (::System::Xml::Linq::XName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GETPREFIXOFNAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateAttribute(::System::Xml::Linq::XName* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Linq::XName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_VALIDATEATTRIBUTE_OFFSET))(arg, str, nullptr);
		}

	};
}

