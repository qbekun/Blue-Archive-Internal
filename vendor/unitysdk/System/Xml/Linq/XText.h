#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853390)
#define SYSTEM_XML_LINQ_XTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853430)
#define SYSTEM_XML_LINQ_XTEXT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x985D4D0)
#define SYSTEM_XML_LINQ_XTEXT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x985D4E0)
#define SYSTEM_XML_LINQ_XTEXT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x98556E0)
#define SYSTEM_XML_LINQ_XTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x985D4F0)
#define SYSTEM_XML_LINQ_XTEXT_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x985D5E0)
#define SYSTEM_XML_LINQ_XTEXT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x985D610)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XText_TypeDefinitionIndex = 37317;

	class XText : public Il2CppObject
	{
	public:
		::System::String* text; // 0x28

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XText* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XText*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void AppendText(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_APPENDTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XTEXT_CLONENODE_OFFSET))(nullptr);
		}

	};
}

