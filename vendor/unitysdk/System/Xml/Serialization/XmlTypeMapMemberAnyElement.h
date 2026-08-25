#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET UNITYSDK_OFFSET(0x99FD3C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET UNITYSDK_OFFSET(0x9A00A90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00E70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAnyElement_TypeDefinitionIndex = 27934;

	class XmlTypeMapMemberAnyElement : public Il2CppObject
	{
	public:
		::System::Boolean IsElementDefined(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_ISELEMENTDEFINED_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_IsDefaultAny()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_GET_ISDEFAULTANY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

