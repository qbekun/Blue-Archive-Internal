#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x98E8C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x98E8CA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x98E8E10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURSSTRING_OFFSET UNITYSDK_OFFSET(0x98E8F40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x98E9190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x98E91A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x98E9320)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x98E9330)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x98E9520)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x98E95A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E95E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E9750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98E97C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_TypeDefinitionIndex = 28190;

	class XmlSchemaParticle : public Il2CppObject
	{
	public:
		::System::Decimal* minOccurs; // 0x50
		::System::Decimal* maxOccurs; // 0x60
		Occurs* flags; // 0x70
		::System::Xml::Schema::XmlSchemaParticle* Empty; // 0x0

		::System::String* get_MinOccursString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURSSTRING_OFFSET))(nullptr);
		}

		::System::Void set_MinOccursString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURSSTRING_OFFSET))(str, nullptr);
		}

		::System::String* get_MaxOccursString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURSSTRING_OFFSET))(nullptr);
		}

		::System::Void set_MaxOccursString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURSSTRING_OFFSET))(str, nullptr);
		}

		::System::Decimal* get_MinOccurs()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MINOCCURS_OFFSET))(nullptr);
		}

		::System::Void set_MinOccurs(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MINOCCURS_OFFSET))(arg, nullptr);
		}

		::System::Decimal* get_MaxOccurs()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_MAXOCCURS_OFFSET))(nullptr);
		}

		::System::Void set_MaxOccurs(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_SET_MAXOCCURS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::String* get_NameString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GET_NAMESTRING_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* GetQualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_GETQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

