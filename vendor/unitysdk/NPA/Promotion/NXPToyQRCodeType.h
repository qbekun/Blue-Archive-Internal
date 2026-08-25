#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyQRCodeType; }

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyQRCodeType_TypeDefinitionIndex = 27364;

	class NXPToyQRCodeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Promotion::NXPToyQRCodeType* URLWithNPACode; // 0x0
		::NPA::Promotion::NXPToyQRCodeType* NPACode; // 0x0

	};
}

