#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANIMATORBINDINGSVERSION_OFFSET UNITYSDK_OFFSET(0xA1D1D00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA1D1D10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0xA1D1E00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D1E70)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationStream_TypeDefinitionIndex = 36505;

	class AnimationStream : public Il2CppObject
	{
	public:
		::System::UInt32 m_AnimatorBindingsVersion; // 0x10
		::System::Int32 constant; // 0x18
		::System::Int32 input; // 0x20
		::System::Int32 output; // 0x28
		::System::Int32 workspace; // 0x30
		::System::Int32 inputStreamAccessor; // 0x38
		::System::Int32 animationHandleBinder; // 0x40

		::System::UInt32 get_animatorBindingsVersion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ANIMATORBINDINGSVERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void CheckIsValid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_CHECKISVALID_OFFSET))(nullptr);
		}

		::System::Single GetDeltaTime_Injected(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAM_GETDELTATIME_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

