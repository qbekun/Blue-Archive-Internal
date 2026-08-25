#pragma once
#include "unitysdk.h"

#define ELEMINFO_SET_OFFSET UNITYSDK_OFFSET(0x984C290)
#define ELEMINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x984AC80)

	inline static constexpr unsigned int ElemInfo_TypeDefinitionIndex = 27618;

	class ElemInfo : public Il2CppObject
	{
	public:
		QName* name; // 0x10
		::System::String* xmlLang; // 0x28
		::System::Xml::XmlSpace* xmlSpace; // 0x30
		::System::Boolean xmlspacePreserve; // 0x34
		NamespaceDecl* nsdecls; // 0x38

		::System::Void Set(QName* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(QName*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELEMINFO_SET_OFFSET))(arg, arg, nullptr);
		}

		NamespaceDecl* Clear()
		{
			return (return (NamespaceDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMINFO_CLEAR_OFFSET))(nullptr);
		}

	};

