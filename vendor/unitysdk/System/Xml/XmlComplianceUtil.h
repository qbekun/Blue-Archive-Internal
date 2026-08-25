#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x99BB410)
#define SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x99BB740)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComplianceUtil_TypeDefinitionIndex = 27807;

	class XmlComplianceUtil : public Il2CppObject
	{
	public:
		::System::String* NonCDataNormalize(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET))(str, nullptr);
		}

		::System::String* CDataNormalize(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET))(str, nullptr);
		}

	};
}

