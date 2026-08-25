#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPEVENTBUILDERLINKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB560)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPEventBuilderLinkInfo_TypeDefinitionIndex = 27362;

	class NXPEventBuilderLinkInfo : public Il2CppObject
	{
	public:
		::System::Int32 linkType; // 0x10
		::System::String* url; // 0x18
		::System::String* meta; // 0x20
		::System::String* pid; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERLINKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

