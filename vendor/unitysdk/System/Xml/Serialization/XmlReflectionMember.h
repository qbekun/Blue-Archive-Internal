#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99E4740)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_ISRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x99E6D60)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x99E6D70)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x99E6D80)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x99E36B0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x99E6D90)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x99E6DA0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionMember_TypeDefinitionIndex = 27900;

	class XmlReflectionMember : public Il2CppObject
	{
	public:
		::System::Boolean isReturnValue; // 0x10
		::System::String* memberName; // 0x18
		::System::Type* memberType; // 0x20
		::System::Xml::Serialization::XmlAttributes* xmlAttributes; // 0x28
		::System::Type* declaringType; // 0x30

		::System::Void .ctor(::System::String* str, ::System::Type* arg, ::System::Xml::Serialization::XmlAttributes* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlAttributes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean get_IsReturnValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_ISRETURNVALUE_OFFSET))(nullptr);
		}

		::System::String* get_MemberName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERNAME_OFFSET))(nullptr);
		}

		::System::Type* get_MemberType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Serialization::XmlAttributes* get_XmlAttributes()
		{
			return (return (::System::Xml::Serialization::XmlAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_XMLATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DeclaringType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONMEMBER_SET_DECLARINGTYPE_OFFSET))(arg, nullptr);
		}

	};
}

