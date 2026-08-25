#pragma once
#include "../../unitysdk.h"

#define MX_TIMELINE_SUBTIMELINEENVIRONMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE21FD0)
#define MX_TIMELINE_SUBTIMELINEENVIRONMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE22250)

namespace Mx::Timeline
{
	inline static constexpr unsigned int SubTimelineEnvironment_TypeDefinitionIndex = 10368;

	class SubTimelineEnvironment : public Il2CppObject
	{
	public:
		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_SUBTIMELINEENVIRONMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_SUBTIMELINEENVIRONMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

