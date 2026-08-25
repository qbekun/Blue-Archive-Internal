#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdEntityInfo_TypeDefinitionIndex = 27641;

	class IDtdEntityInfo : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_ISEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_ISDECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnparsedEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_ISUNPARSEDENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsParameterEntity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_ISPARAMETERENTITY_OFFSET))(nullptr);
		}

		::System::String* get_BaseUriString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_BASEURISTRING_OFFSET))(nullptr);
		}

		::System::String* get_DeclaredUriString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_DECLAREDURISTRING_OFFSET))(nullptr);
		}

		::System::String* get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::String* get_PublicId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_PUBLICID_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDENTITYINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

