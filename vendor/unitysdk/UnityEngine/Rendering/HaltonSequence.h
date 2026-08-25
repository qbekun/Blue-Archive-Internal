#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET UNITYSDK_OFFSET(0x9FDC480)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HaltonSequence_TypeDefinitionIndex = 34068;

	class HaltonSequence : public Il2CppObject
	{
	public:
		::System::Single Get(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET))(arg, arg, nullptr);
		}

	};
}

