#pragma once
#include "unitysdk.h"

#define ATTRIBUTECONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE670)

	inline static constexpr unsigned int AttributeContent_TypeDefinitionIndex = 28110;

	class AttributeContent : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SchemaAttDef* _AttDef; // 0x10
		::System::Xml::XmlQualifiedName* _Name; // 0x18
		::System::String* _Prefix; // 0x20
		::System::Boolean _Required; // 0x28
		::System::UInt32 _MinVal; // 0x2C
		::System::UInt32 _MaxVal; // 0x30
		::System::UInt32 _MaxLength; // 0x34
		::System::UInt32 _MinLength; // 0x38
		::System::Boolean _EnumerationRequired; // 0x3C
		::System::Boolean _HasDataType; // 0x3D
		::System::Boolean _Global; // 0x3E
		::System::Object* _Default; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTECONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

