#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYENDBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBFD0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyEndBanner_TypeDefinitionIndex = 27377;

	class NXPToyEndBanner : public Il2CppObject
	{
	public:
		::System::String* sn; // 0x10
		::System::String* landType; // 0x18
		::System::String* buttonText; // 0x20
		::System::String* landInfo; // 0x28
		::System::String* landURL; // 0x30
		::System::String* imgURL; // 0x38
		::System::String* imgLandType; // 0x40
		::System::String* imgLandInfo; // 0x48
		::System::String* imgLandURL; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYENDBANNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

