#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IREVERTIBLECHANGETRACKING_REJECTCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IRevertibleChangeTracking_TypeDefinitionIndex = 29475;

	class IRevertibleChangeTracking : public Il2CppObject
	{
	public:
		::System::Void RejectChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IREVERTIBLECHANGETRACKING_REJECTCHANGES_OFFSET))(nullptr);
		}

	};
}

