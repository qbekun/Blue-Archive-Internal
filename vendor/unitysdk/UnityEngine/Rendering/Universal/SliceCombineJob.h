#pragma once
#include "../../../unitysdk.h"

namespace Unity::Mathematics { class int2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SLICECOMBINEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA075600)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SliceCombineJob_TypeDefinitionIndex = 32759;

	class SliceCombineJob : public Il2CppObject
	{
	public:
		::Unity::Mathematics::int2* tileResolution; // 0x10
		::System::Int32 wordsPerTile; // 0x18
		Il2CppObject* sliceLightMasksH; // 0x20
		Il2CppObject* sliceLightMasksV; // 0x30
		Il2CppObject* lightMasks; // 0x40

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SLICECOMBINEJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

