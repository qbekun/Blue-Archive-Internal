#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyBannerCommunity; }

#define NPA_PROMOTION_NXPTOYCONDITIONALBANNERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBF90)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyConditionalBannerButton_TypeDefinitionIndex = 27371;

	class NXPToyConditionalBannerButton : public Il2CppObject
	{
	public:
		::System::String* pid; // 0x10
		::System::String* meta; // 0x18
		::System::String* url; // 0x20
		::System::String* urlScheme; // 0x28
		::System::Int32 linkId; // 0x30
		::System::Int32 left; // 0x34
		::System::Int32 top; // 0x38
		::System::Int32 right; // 0x3C
		::System::Int32 bottom; // 0x40
		::System::Int32 type; // 0x44
		::NPA::Promotion::NXPToyBannerCommunity* community; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCONDITIONALBANNERBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

