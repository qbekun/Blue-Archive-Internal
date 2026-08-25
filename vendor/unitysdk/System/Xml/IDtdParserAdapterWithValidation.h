#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDPARSERADAPTERWITHVALIDATION_GET_DTDVALIDATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSERADAPTERWITHVALIDATION_GET_VALIDATIONEVENTHANDLING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdParserAdapterWithValidation_TypeDefinitionIndex = 27644;

	class IDtdParserAdapterWithValidation : public Il2CppObject
	{
	public:
		::System::Boolean get_DtdValidation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTERWITHVALIDATION_GET_DTDVALIDATION_OFFSET))(nullptr);
		}

		::System::Xml::IValidationEventHandling* get_ValidationEventHandling()
		{
			return (return (::System::Xml::IValidationEventHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSERADAPTERWITHVALIDATION_GET_VALIDATIONEVENTHANDLING_OFFSET))(nullptr);
		}

	};
}

