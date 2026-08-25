#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYCONDITIONALBANNERIMAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBFA0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyConditionalBannerImage_TypeDefinitionIndex = 27372;

	class NXPToyConditionalBannerImage : public Il2CppObject
	{
	public:
		::System::String* imgURL; // 0x10
		::System::Int32 left; // 0x18
		::System::Int32 top; // 0x1C
		::System::Int32 right; // 0x20
		::System::Int32 bottom; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCONDITIONALBANNERIMAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

