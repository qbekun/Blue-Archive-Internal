#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathResultType_TypeDefinitionIndex = 27846;

	class XPathResultType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::XPath::XPathResultType* Number; // 0x0
		::System::Xml::XPath::XPathResultType* String; // 0x0
		::System::Xml::XPath::XPathResultType* Boolean; // 0x0
		::System::Xml::XPath::XPathResultType* NodeSet; // 0x0
		::System::Xml::XPath::XPathResultType* Navigator; // 0x0
		::System::Xml::XPath::XPathResultType* Any; // 0x0
		::System::Xml::XPath::XPathResultType* Error; // 0x0

	};
}

