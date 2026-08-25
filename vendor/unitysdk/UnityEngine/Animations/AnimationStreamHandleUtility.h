#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations { class AnimationStream&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_WRITEFLOATS_OFFSET UNITYSDK_OFFSET(0xA1D3710)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_READFLOATS_OFFSET UNITYSDK_OFFSET(0xA1D3870)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_READSTREAMFLOATSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D3970)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_WRITESTREAMFLOATSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D3820)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationStreamHandleUtility_TypeDefinitionIndex = 36511;

	class AnimationStreamHandleUtility : public Il2CppObject
	{
	public:
		::System::Void WriteFloats(::UnityEngine::Animations::AnimationStream* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_WRITEFLOATS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadFloats(::UnityEngine::Animations::AnimationStream* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_READFLOATS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadStreamFloatsInternal(::UnityEngine::Animations::AnimationStream&* arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_READSTREAMFLOATSINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteStreamFloatsInternal(::UnityEngine::Animations::AnimationStream&* arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::System::Object**, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSTREAMHANDLEUTILITY_WRITESTREAMFLOATSINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

