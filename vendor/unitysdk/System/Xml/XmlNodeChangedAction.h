#pragma once
#include "../../unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedAction_TypeDefinitionIndex = 27765;

	class XmlNodeChangedAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::XmlNodeChangedAction* Insert; // 0x0
		::System::Xml::XmlNodeChangedAction* Remove; // 0x0
		::System::Xml::XmlNodeChangedAction* Change; // 0x0

	};
}

