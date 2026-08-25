#pragma once
#include "unitysdk.h"

#define ELEMENTSCOPE_SET_OFFSET UNITYSDK_OFFSET(0x9977F80)
#define ELEMENTSCOPE_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x99799E0)
#define ELEMENTSCOPE_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9979D20)

	inline static constexpr unsigned int ElementScope_TypeDefinitionIndex = 27717;

	class ElementScope : public Il2CppObject
	{
	public:
		::System::Int32 prevNSTop; // 0x10
		::System::String* prefix; // 0x18
		::System::String* localName; // 0x20
		::System::String* namespaceUri; // 0x28
		::System::Xml::XmlSpace* xmlSpace; // 0x30
		::System::String* xmlLang; // 0x38

		::System::Void Set(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELEMENTSCOPE_SET_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void WriteEndElement(::System::Xml::XmlRawWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlRawWriter*, ::PVOID))((::PBYTE)hIl2Cpp + ELEMENTSCOPE_WRITEENDELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteFullEndElement(::System::Xml::XmlRawWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlRawWriter*, ::PVOID))((::PBYTE)hIl2Cpp + ELEMENTSCOPE_WRITEFULLENDELEMENT_OFFSET))(arg, nullptr);
		}

	};

