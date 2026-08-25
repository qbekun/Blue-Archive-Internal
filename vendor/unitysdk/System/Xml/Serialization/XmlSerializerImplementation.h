#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x99FF360)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerImplementation_TypeDefinitionIndex = 27923;

	class XmlSerializerImplementation : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlSerializationWriter* get_Writer()
		{
			return (return (::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET))(nullptr);
		}

	};
}

