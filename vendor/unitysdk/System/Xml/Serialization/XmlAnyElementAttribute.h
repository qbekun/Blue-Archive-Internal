#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D9920)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99D9930)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99D9990)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99D99A0)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99D99B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttribute_TypeDefinitionIndex = 27877;

	class XmlAnyElementAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* elementName; // 0x10
		::System::String* ns; // 0x18
		::System::Int32 order; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

