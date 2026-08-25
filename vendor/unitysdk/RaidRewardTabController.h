#pragma once
#include "unitysdk.h"

#define RAIDREWARDTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x278A5F0)

	inline static constexpr unsigned int RaidRewardTabController_TypeDefinitionIndex = 7414;

	class RaidRewardTabController : public ::MS::Internal::Xml::XPath::CacheAxisQuery
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

