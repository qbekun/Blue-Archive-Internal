#pragma once
#include "unitysdk.h"

#define CONTENTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9855AF0)
#define CONTENTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9856500)
#define CONTENTREADER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x9855B20)
#define CONTENTREADER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x98565F0)

	inline static constexpr unsigned int ContentReader_TypeDefinitionIndex = 37290;

	class ContentReader : public Il2CppObject
	{
	public:
		::System::Xml::Linq::NamespaceCache* _eCache; // 0x10
		::System::Xml::Linq::NamespaceCache* _aCache; // 0x20
		::System::Xml::IXmlLineInfo* _lineInfo; // 0x30
		::System::Xml::Linq::XContainer* _currentContainer; // 0x38
		::System::String* _baseUri; // 0x40

		::System::Void .ctor(::System::Xml::Linq::XContainer* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XContainer*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XContainer* arg, ::System::Xml::XmlReader* arg, ::System::Xml::Linq::LoadOptions* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XContainer*, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTREADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReadContentFrom(::System::Xml::Linq::XContainer* arg, ::System::Xml::XmlReader* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XContainer*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTREADER_READCONTENTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadContentFrom(::System::Xml::Linq::XContainer* arg, ::System::Xml::XmlReader* arg, ::System::Xml::Linq::LoadOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Linq::XContainer*, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTREADER_READCONTENTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

	};

