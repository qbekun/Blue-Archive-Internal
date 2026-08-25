#pragma once
#include "unitysdk.h"

#define DECLBASEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D3950)
#define DECLBASEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x98D3F00)

	inline static constexpr unsigned int DeclBaseInfo_TypeDefinitionIndex = 28107;

	class DeclBaseInfo : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* _Name; // 0x10
		::System::String* _Prefix; // 0x18
		::System::Xml::XmlQualifiedName* _TypeName; // 0x20
		::System::String* _TypePrefix; // 0x28
		::System::Object* _Default; // 0x30
		::System::Object* _Revises; // 0x38
		::System::UInt32 _MaxOccurs; // 0x40
		::System::UInt32 _MinOccurs; // 0x44
		::System::Boolean _Checking; // 0x48
		::System::Xml::Schema::SchemaElementDecl* _ElementDecl; // 0x50
		::System::Xml::Schema::SchemaAttDef* _Attdef; // 0x58
		DeclBaseInfo* _Next; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECLBASEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECLBASEINFO_RESET_OFFSET))(nullptr);
		}

	};

