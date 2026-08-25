#pragma once
#include "unitysdk.h"

#define ELEMENTCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE660)

	inline static constexpr unsigned int ElementContent_TypeDefinitionIndex = 28109;

	class ElementContent : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SchemaElementDecl* _ElementDecl; // 0x10
		::System::Int32 _ContentAttr; // 0x18
		::System::Int32 _OrderAttr; // 0x1C
		::System::Boolean _MasterGroupRequired; // 0x20
		::System::Boolean _ExistTerminal; // 0x21
		::System::Boolean _AllowDataType; // 0x22
		::System::Boolean _HasDataType; // 0x23
		::System::Boolean _HasType; // 0x24
		::System::Boolean _EnumerationRequired; // 0x25
		::System::UInt32 _MinVal; // 0x28
		::System::UInt32 _MaxVal; // 0x2C
		::System::UInt32 _MaxLength; // 0x30
		::System::UInt32 _MinLength; // 0x34
		::System::Collections::Hashtable* _AttDefList; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMENTCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

