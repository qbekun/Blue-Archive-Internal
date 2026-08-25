#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853640)
#define SYSTEM_XML_LINQ_XNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x985C560)
#define SYSTEM_XML_LINQ_XNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x985C5D0)
#define SYSTEM_XML_LINQ_XNODE_WRITETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XNODE_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x985CB00)
#define SYSTEM_XML_LINQ_XNODE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XNODE_GETXMLSTRING_OFFSET UNITYSDK_OFFSET(0x985C6C0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XNode_TypeDefinitionIndex = 37311;

	class XNode : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XNode* next; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_REMOVE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void AppendText(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_APPENDTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_CLONENODE_OFFSET))(nullptr);
		}

		::System::String* GetXmlString(::System::Xml::Linq::SaveOptions* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::SaveOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNODE_GETXMLSTRING_OFFSET))(arg, nullptr);
		}

	};
}

