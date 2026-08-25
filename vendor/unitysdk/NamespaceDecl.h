#pragma once
#include "unitysdk.h"

#define NAMESPACEDECL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9847980)

	inline static constexpr unsigned int NamespaceDecl_TypeDefinitionIndex = 27620;

	class NamespaceDecl : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* uri; // 0x18
		NamespaceDecl* scopeLink; // 0x20
		NamespaceDecl* prevLink; // 0x28
		::System::Int32 scope; // 0x30
		::System::Boolean implied; // 0x34

		::System::Void .ctor(::System::String* str, ::System::String* str, NamespaceDecl* arg, NamespaceDecl* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, NamespaceDecl*, NamespaceDecl*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACEDECL_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

	};

