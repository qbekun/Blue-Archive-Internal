#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E6EB0)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x99E6EE0)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_ISANY_OFFSET UNITYSDK_OFFSET(0x99E6EF0)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_SET_ISANY_OFFSET UNITYSDK_OFFSET(0x99E6F00)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSchemaProviderAttribute_TypeDefinitionIndex = 27902;

	class XmlSchemaProviderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _methodName; // 0x10
		::System::Boolean _isAny; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAny()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_ISANY_OFFSET))(nullptr);
		}

		::System::Void set_IsAny(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_SET_ISANY_OFFSET))(arg, nullptr);
		}

	};
}

