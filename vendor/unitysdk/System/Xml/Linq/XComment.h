#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XCOMMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98535B0)
#define SYSTEM_XML_LINQ_XCOMMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853650)
#define SYSTEM_XML_LINQ_XCOMMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x98536E0)
#define SYSTEM_XML_LINQ_XCOMMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98536F0)
#define SYSTEM_XML_LINQ_XCOMMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9853700)
#define SYSTEM_XML_LINQ_XCOMMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9853920)
#define SYSTEM_XML_LINQ_XCOMMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x98539A0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XComment_TypeDefinitionIndex = 37289;

	class XComment : public Il2CppObject
	{
	public:
		::System::String* value; // 0x28

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XComment* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XComment*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCOMMENT_CLONENODE_OFFSET))(nullptr);
		}

	};
}

