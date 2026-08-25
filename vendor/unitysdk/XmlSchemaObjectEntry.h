#pragma once
#include "unitysdk.h"

#define XMLSCHEMAOBJECTENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E79C0)

	inline static constexpr unsigned int XmlSchemaObjectEntry_TypeDefinitionIndex = 28183;

	class XmlSchemaObjectEntry : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* qname; // 0x10
		::System::Xml::Schema::XmlSchemaObject* xso; // 0x18

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + XMLSCHEMAOBJECTENTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

