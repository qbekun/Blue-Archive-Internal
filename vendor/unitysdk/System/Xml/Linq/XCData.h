#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XCDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853380)
#define SYSTEM_XML_LINQ_XCDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853420)
#define SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x98534C0)
#define SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET UNITYSDK_OFFSET(0x98534D0)
#define SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9853550)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XCData_TypeDefinitionIndex = 37288;

	class XCData : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XCData* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XCData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCDATA_CLONENODE_OFFSET))(nullptr);
		}

	};
}

