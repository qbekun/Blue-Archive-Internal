#pragma once
#include "../../../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_BITOPERATIONS_ROUNDUPTOPOWEROF2_OFFSET UNITYSDK_OFFSET(0x2889390)

namespace CommunityToolkit::HighPerformance::Helpers::Internals
{
	inline static constexpr unsigned int BitOperations_TypeDefinitionIndex = 37761;

	class BitOperations : public Il2CppObject
	{
	public:
		::System::UInt32 RoundUpToPowerOf2(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_BITOPERATIONS_ROUNDUPTOPOWEROF2_OFFSET))(arg, nullptr);
		}

	};
}

