#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_ZBINNINGJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA076130)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ZBinningJob_TypeDefinitionIndex = 32767;

	class ZBinningJob : public Il2CppObject
	{
	public:
		::System::Int32 batchCount; // 0x0
		Il2CppObject* bins; // 0x10
		Il2CppObject* minMaxZs; // 0x20
		::System::Int32 binOffset; // 0x30
		::System::Single zFactor; // 0x34

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZBINNINGJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

