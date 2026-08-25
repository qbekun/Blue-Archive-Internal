#pragma once
#include "../unitysdk.h"

namespace NPA { class NPSnsType; }

namespace NPA
{
	inline static constexpr unsigned int NPSnsType_TypeDefinitionIndex = 25664;

	class NPSnsType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NPSnsType* NPSnsTypeFaceBook; // 0x0
		::NPA::NPSnsType* NPSnsTypeTwitter; // 0x0
		::NPA::NPSnsType* NPSnsTypeGooglePlus; // 0x0
		::NPA::NPSnsType* NPSnsTypeAmazon; // 0x0

	};
}

