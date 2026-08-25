#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x985B680)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x985B780)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADD_OFFSET UNITYSDK_OFFSET(0x985B690)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x985B4B0)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x985B340)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NamespaceResolver_TypeDefinitionIndex = 37305;

	class NamespaceResolver : public Il2CppObject
	{
	public:
		::System::Int32 _scope; // 0x10
		NamespaceDeclaration* _declaration; // 0x18
		NamespaceDeclaration* _rover; // 0x20

		::System::Void PushScope()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_PUSHSCOPE_OFFSET))(nullptr);
		}

		::System::Void PopScope()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_POPSCOPE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Xml::Linq::XNamespace* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddFirst(::System::String* str, ::System::Xml::Linq::XNamespace* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADDFIRST_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::XNamespace*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_GETPREFIXOFNAMESPACE_OFFSET))(arg, arg, nullptr);
		}

	};
}

