#pragma once
#include "unitysdk.h"

#define NAMESPACEDECLARATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x985B820)

	inline static constexpr unsigned int NamespaceDeclaration_TypeDefinitionIndex = 37304;

	class NamespaceDeclaration : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::Xml::Linq::XNamespace* ns; // 0x18
		::System::Int32 scope; // 0x20
		NamespaceDeclaration* prev; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEDECLARATION_.CTOR_OFFSET))(nullptr);
		}

	};

