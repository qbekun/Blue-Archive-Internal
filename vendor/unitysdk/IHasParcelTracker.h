#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;

#define IHASPARCELTRACKER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IHasParcelTracker_TypeDefinitionIndex = 6916;

	class IHasParcelTracker : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHASPARCELTRACKER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

	};

