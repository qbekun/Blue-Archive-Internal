#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99DEBC0)
#define SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_HASWRAPPERELEMENT_OFFSET UNITYSDK_OFFSET(0x99DEBE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMembersMapping_TypeDefinitionIndex = 27896;

	class XmlMembersMapping : public Il2CppObject
	{
	public:
		::System::Boolean _hasWrapperElement; // 0x48
		::Il2CppArray<::System::Object*>* _mapping; // 0x50

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasWrapperElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERSMAPPING_GET_HASWRAPPERELEMENT_OFFSET))(nullptr);
		}

	};
}

