#pragma once
#include "../../../unitysdk.h"

#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_HASHCODE`1_COMBINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_HASHCODE`1_COMBINEVALUES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace CommunityToolkit::HighPerformance::Helpers
{
	inline static constexpr unsigned int HashCode`1_TypeDefinitionIndex = 37758;

	class HashCode`1 : public Il2CppObject
	{
	public:
		::System::Int32 Combine(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_HASHCODE`1_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CombineValues(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMUNITYTOOLKIT_HIGHPERFORMANCE_HELPERS_HASHCODE`1_COMBINEVALUES_OFFSET))(arg, nullptr);
		}

	};
}

