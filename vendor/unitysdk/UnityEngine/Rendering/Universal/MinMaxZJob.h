#pragma once
#include "../../../unitysdk.h"

namespace Unity::Mathematics { class float4x4; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MINMAXZJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0746D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MinMaxZJob_TypeDefinitionIndex = 32756;

	class MinMaxZJob : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float4x4* worldToViewMatrix; // 0x10
		Il2CppObject* lights; // 0x50
		Il2CppObject* minMaxZs; // 0x60
		Il2CppObject* meanZs; // 0x70

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MINMAXZJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

