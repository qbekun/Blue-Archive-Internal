#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNODECHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A5820)
#define SYSTEM_XML_XMLNODECHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x99A58F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedEventArgs_TypeDefinitionIndex = 27775;

	class XmlNodeChangedEventArgs : public Il2CppObject
	{
	public:
		::System::Xml::XmlNodeChangedAction* action; // 0x10
		::System::Xml::XmlNode* node; // 0x18
		::System::Xml::XmlNode* oldParent; // 0x20
		::System::Xml::XmlNode* newParent; // 0x28
		::System::String* oldValue; // 0x30
		::System::String* newValue; // 0x38

		::System::Void .ctor(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg, ::System::String* str, ::System::String* str, ::System::Xml::XmlNodeChangedAction* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, str, str, arg, nullptr);
		}

		::System::Xml::XmlNodeChangedAction* get_Action()
		{
			return (return (::System::Xml::XmlNodeChangedAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

	};
}

