#pragma once
#include "unitysdk.h"

#define XSDATTRIBUTEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FEC0)

	inline static constexpr unsigned int XsdAttributeEntry_TypeDefinitionIndex = 28232;

	class XsdAttributeEntry : public Il2CppObject
	{
	public:
		Token* Attribute; // 0x10
		XsdBuildFunction* BuildFunc; // 0x18

		::System::Void .ctor(Token* arg, XsdBuildFunction* arg)
		{
			((::System::Void(*)(Token*, XsdBuildFunction*, ::PVOID))((::PBYTE)hIl2Cpp + XSDATTRIBUTEENTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

