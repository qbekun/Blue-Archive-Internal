#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_HLSLARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBEFE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HLSLArray_TypeDefinitionIndex = 34007;

	class HLSLArray : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 arraySize; // 0x10
		::System::Type* elementType; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HLSLARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

