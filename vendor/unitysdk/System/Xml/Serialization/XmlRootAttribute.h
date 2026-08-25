#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E6DB0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E6DC0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99E6DF0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99E6E50)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99E2550)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99E6E60)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99E6E70)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99E6E80)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99E6E90)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99E6EA0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DC9E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlRootAttribute_TypeDefinitionIndex = 27901;

	class XmlRootAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* dataType; // 0x10
		::System::String* elementName; // 0x18
		::System::Boolean isNullable; // 0x20
		::System::String* ns; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_DataType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Void set_DataType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_DATATYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_ElementName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ELEMENTNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNullable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ISNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

