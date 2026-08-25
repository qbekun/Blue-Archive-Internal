#pragma once
#include "unitysdk.h"

#define XDRATTRIBUTEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D82B0)
#define XDRATTRIBUTEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8340)

	inline static constexpr unsigned int XdrAttributeEntry_TypeDefinitionIndex = 28115;

	class XdrAttributeEntry : public Il2CppObject
	{
	public:
		Token* _Attribute; // 0x10
		::System::Int32 _SchemaFlags; // 0x14
		::System::Xml::Schema::XmlSchemaDatatype* _Datatype; // 0x18
		XdrBuildFunction* _BuildFunc; // 0x20

		::System::Void .ctor(Token* arg, ::System::Xml::XmlTokenizedType* arg, XdrBuildFunction* arg)
		{
			((::System::Void(*)(Token*, ::System::Xml::XmlTokenizedType*, XdrBuildFunction*, ::PVOID))((::PBYTE)hIl2Cpp + XDRATTRIBUTEENTRY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Token* arg, ::System::Xml::XmlTokenizedType* arg, ::System::Int32 arg, XdrBuildFunction* arg)
		{
			((::System::Void(*)(Token*, ::System::Xml::XmlTokenizedType*, ::System::Int32, XdrBuildFunction*, ::PVOID))((::PBYTE)hIl2Cpp + XDRATTRIBUTEENTRY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

