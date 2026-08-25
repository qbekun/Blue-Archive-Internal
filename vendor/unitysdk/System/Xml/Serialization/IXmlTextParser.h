#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_IXMLTEXTPARSER_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SERIALIZATION_IXMLTEXTPARSER_SET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int IXmlTextParser_TypeDefinitionIndex = 27866;

	class IXmlTextParser : public Il2CppObject
	{
	public:
		::System::Boolean get_Normalized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_IXMLTEXTPARSER_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Normalized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_IXMLTEXTPARSER_SET_NORMALIZED_OFFSET))(arg, nullptr);
		}

	};
}

