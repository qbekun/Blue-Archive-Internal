#pragma once
#include "../../unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int WriteState_TypeDefinitionIndex = 27727;

	class WriteState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::WriteState* Start; // 0x0
		::System::Xml::WriteState* Prolog; // 0x0
		::System::Xml::WriteState* Element; // 0x0
		::System::Xml::WriteState* Attribute; // 0x0
		::System::Xml::WriteState* Content; // 0x0
		::System::Xml::WriteState* Closed; // 0x0
		::System::Xml::WriteState* Error; // 0x0

	};
}

