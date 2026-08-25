#pragma once
#include "../../unitysdk.h"

#define MXFIELD_DISPATCH_IPLAYERINPUTBLOCKER_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_DISPATCH_IPLAYERINPUTBLOCKER_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int IPlayerInputBlocker_TypeDefinitionIndex = 10892;

	class IPlayerInputBlocker : public Il2CppObject
	{
	public:
		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_IPLAYERINPUTBLOCKER_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_IPLAYERINPUTBLOCKER_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

	};
}

