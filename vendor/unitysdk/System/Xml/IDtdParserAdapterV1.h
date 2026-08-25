#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDPARSERADAPTERV1_GET_V1COMPATIBILITYMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTERV1_GET_NORMALIZATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTERV1_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdParserAdapterV1_TypeDefinitionIndex = 27645;

	class IDtdParserAdapterV1 : public Il2CppObject
	{
	public:
		::System::Boolean get_V1CompatibilityMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTERV1_GET_V1COMPATIBILITYMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_Normalization()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTERV1_GET_NORMALIZATION_OFFSET))(nullptr);
		}

		::System::Boolean get_Namespaces()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTERV1_GET_NAMESPACES_OFFSET))(nullptr);
		}

	};
}

