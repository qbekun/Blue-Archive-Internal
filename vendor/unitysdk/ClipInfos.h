#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimatorStateInfo; }

#define CLIPINFOS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9607B70)

	inline static constexpr unsigned int ClipInfos_TypeDefinitionIndex = 35311;

	class ClipInfos : public Il2CppObject
	{
	public:
		::System::Boolean isInterruptionActive; // 0x10
		::System::Boolean isLastFrameOfInterruption; // 0x11
		::System::Int32 clipInfoCount; // 0x14
		::System::Int32 nextClipInfoCount; // 0x18
		::System::Int32 interruptingClipInfoCount; // 0x1C
		Il2CppObject* clipInfos; // 0x20
		Il2CppObject* nextClipInfos; // 0x28
		Il2CppObject* interruptingClipInfos; // 0x30
		::UnityEngine::AnimatorStateInfo* stateInfo; // 0x38
		::UnityEngine::AnimatorStateInfo* nextStateInfo; // 0x5C
		::UnityEngine::AnimatorStateInfo* interruptingStateInfo; // 0x80
		::System::Single interruptingClipTimeAddition; // 0xA4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPINFOS_.CTOR_OFFSET))(nullptr);
		}

	};

