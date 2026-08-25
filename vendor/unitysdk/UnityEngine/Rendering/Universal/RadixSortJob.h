#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_RADIXSORTJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA074FB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RadixSortJob_TypeDefinitionIndex = 32757;

	class RadixSortJob : public Il2CppObject
	{
	public:
		Il2CppObject* keys; // 0x10
		Il2CppObject* indices; // 0x20

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RADIXSORTJOB_EXECUTE_OFFSET))(nullptr);
		}

	};
}

