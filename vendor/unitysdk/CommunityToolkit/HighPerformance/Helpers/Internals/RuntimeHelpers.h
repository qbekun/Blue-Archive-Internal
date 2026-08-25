#pragma once
#include "../../../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_RUNTIMEHELPERS_GETARRAYDATABYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace CommunityToolkit::HighPerformance::Helpers::Internals
{
	inline static constexpr unsigned int RuntimeHelpers_TypeDefinitionIndex = 37763;

	class RuntimeHelpers : public Il2CppObject
	{
	public:
		::System::Int32 GetArrayDataByteOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_RUNTIMEHELPERS_GETARRAYDATABYTEOFFSET_OFFSET))(nullptr);
		}

	};
}

