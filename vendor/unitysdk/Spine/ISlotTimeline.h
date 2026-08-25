#pragma once
#include "../unitysdk.h"

#define SPINE_ISLOTTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int ISlotTimeline_TypeDefinitionIndex = 34954;

	class ISlotTimeline : public Il2CppObject
	{
	public:
		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ISLOTTIMELINE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

	};
}

