#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontReference_TypeDefinitionIndex = 37521;

	class FontReference : public Il2CppObject
	{
	public:
		::System::String* familyName; // 0x10
		::System::String* styleName; // 0x18
		::System::Int32 faceIndex; // 0x20
		::System::String* filePath; // 0x28

	};
}

