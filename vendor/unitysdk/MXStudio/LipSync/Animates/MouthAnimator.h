#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_ANIMATES_MOUTHANIMATOR_ANIMATE_OFFSET UNITYSDK_OFFSET(0x943AB10)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int MouthAnimator_TypeDefinitionIndex = 36870;

	class MouthAnimator : public Il2CppObject
	{
	public:
		Il2CppObject* Animate(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_MOUTHANIMATOR_ANIMATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

