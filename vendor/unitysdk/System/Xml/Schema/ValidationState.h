#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_VALIDATIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE2F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationState_TypeDefinitionIndex = 28106;

	class ValidationState : public Il2CppObject
	{
	public:
		::System::Boolean IsNill; // 0x10
		::System::Boolean IsDefault; // 0x11
		::System::Boolean NeedValidateChildren; // 0x12
		::System::Boolean CheckRequiredAttribute; // 0x13
		::System::Boolean ValidationSkipped; // 0x14
		::System::Xml::Schema::XmlSchemaContentProcessing* ProcessContents; // 0x18
		::System::Xml::Schema::XmlSchemaValidity* Validity; // 0x1C
		::System::Xml::Schema::SchemaElementDecl* ElementDecl; // 0x20
		::System::Xml::Schema::SchemaElementDecl* ElementDeclBeforeXsi; // 0x28
		::System::String* LocalName; // 0x30
		::System::String* Namespace; // 0x38
		::Il2CppArray<::System::Object*>* Constr; // 0x40
		::System::Xml::Schema::StateUnion* CurrentState; // 0x48
		::System::Boolean HasMatched; // 0x4C
		::Il2CppArray<::System::Object*>* CurPos; // 0x50
		::System::Xml::Schema::BitSet* AllElementsSet; // 0x58
		Il2CppObject* RunningPositions; // 0x60
		::System::Boolean TooComplex; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

