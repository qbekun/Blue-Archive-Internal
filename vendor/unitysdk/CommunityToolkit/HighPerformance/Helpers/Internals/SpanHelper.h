#pragma once
#include "../../../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_SPANHELPER_GETDJB2HASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_SPANHELPER_GETDJB2LIKEBYTEHASH_OFFSET UNITYSDK_OFFSET(0x28893C0)

namespace CommunityToolkit::HighPerformance::Helpers::Internals
{
	inline static constexpr unsigned int SpanHelper_TypeDefinitionIndex = 37764;

	class SpanHelper : public Il2CppObject
	{
	public:
		::System::Int32 GetDjb2HashCode(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_SPANHELPER_GETDJB2HASHCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDjb2LikeByteHash(uint8_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(uint8_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_INTERNALS_SPANHELPER_GETDJB2LIKEBYTEHASH_OFFSET))(arg, arg, nullptr);
		}

	};
}

