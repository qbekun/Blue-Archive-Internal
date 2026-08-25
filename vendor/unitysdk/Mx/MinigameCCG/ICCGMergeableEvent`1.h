#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ICCGMERGEABLEEVENT`1_TRYMERGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGMergeableEvent`1_TypeDefinitionIndex = 20517;

	class ICCGMergeableEvent`1 : public Il2CppObject
	{
	public:
		::System::Boolean TryMerge(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGMERGEABLEEVENT`1_TRYMERGE_OFFSET))(arg, nullptr);
		}

	};
}

