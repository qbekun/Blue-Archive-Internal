#pragma once
#include "../../unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int InternalCodePageDataItem_TypeDefinitionIndex = 25009;

	class InternalCodePageDataItem : public Il2CppObject
	{
	public:
		::System::UInt16 codePage; // 0x10
		::System::UInt16 uiFamilyCodePage; // 0x12
		::System::UInt32 flags; // 0x14
		::System::String* Names; // 0x18

	};
}

