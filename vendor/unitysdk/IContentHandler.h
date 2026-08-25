#pragma once
#include "unitysdk.h"

namespace Mono::Xml { class SmallXmlParser; }

#define ICONTENTHANDLER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTENTHANDLER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IContentHandler_TypeDefinitionIndex = 23593;

	class IContentHandler : public Il2CppObject
	{
	public:
		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONSTARTPARSING_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONENDPARSING_OFFSET))(arg, nullptr);
		}

		::System::Void OnStartElement(::System::String* str, IAttrList* arg)
		{
			((::System::Void(*)(::System::String*, IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONSTARTELEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnEndElement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONENDELEMENT_OFFSET))(str, nullptr);
		}

		::System::Void OnProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void OnChars(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONCHARS_OFFSET))(str, nullptr);
		}

		::System::Void OnIgnorableWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTENTHANDLER_ONIGNORABLEWHITESPACE_OFFSET))(str, nullptr);
		}

	};

