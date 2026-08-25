#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_LISTBUFFEREXTENSIONS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListBufferExtensions_TypeDefinitionIndex = 33913;

	class ListBufferExtensions : public Il2CppObject
	{
	public:
		::System::Void QuickSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTBUFFEREXTENSIONS_QUICKSORT_OFFSET))(arg, nullptr);
		}

	};
}

