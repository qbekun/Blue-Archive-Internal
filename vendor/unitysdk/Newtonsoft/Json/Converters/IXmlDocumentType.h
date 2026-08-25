#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IXmlDocumentType_TypeDefinitionIndex = 32112;

	class IXmlDocumentType : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_System()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_SYSTEM_OFFSET))(nullptr);
		}

		::System::String* get_Public()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_PUBLIC_OFFSET))(nullptr);
		}

		::System::String* get_InternalSubset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET))(nullptr);
		}

	};
}

