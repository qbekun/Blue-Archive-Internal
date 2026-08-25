#pragma once
#include "../../unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ReadState_TypeDefinitionIndex = 27658;

	class ReadState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::ReadState* Initial; // 0x0
		::System::Xml::ReadState* Interactive; // 0x0
		::System::Xml::ReadState* Error; // 0x0
		::System::Xml::ReadState* EndOfFile; // 0x0
		::System::Xml::ReadState* Closed; // 0x0

	};
}

