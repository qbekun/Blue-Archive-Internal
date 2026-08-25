#pragma once
#include "unitysdk.h"

#define NAMESPACE_SET_OFFSET UNITYSDK_OFFSET(0x9977F40)
#define NAMESPACE_WRITEDECL_OFFSET UNITYSDK_OFFSET(0x997E200)

	inline static constexpr unsigned int Namespace_TypeDefinitionIndex = 27719;

	class Namespace : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* namespaceUri; // 0x18
		NamespaceKind* kind; // 0x20
		::System::Int32 prevNsIndex; // 0x24

		::System::Void Set(::System::String* str, ::System::String* str, NamespaceKind* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, NamespaceKind*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACE_SET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void WriteDecl(::System::Xml::XmlWriter* arg, ::System::Xml::XmlRawWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Xml::XmlRawWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACE_WRITEDECL_OFFSET))(arg, arg, nullptr);
		}

	};

