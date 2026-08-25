#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Animations { class AnimationStream&; }

#define TRANSFORMSYNCER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E228F0)
#define TRANSFORMSYNCER_BINDAT_OFFSET UNITYSDK_OFFSET(0x9E22980)
#define TRANSFORMSYNCER_CREATE_OFFSET UNITYSDK_OFFSET(0x9E229F0)
#define TRANSFORMSYNCER_SYNC_OFFSET UNITYSDK_OFFSET(0x9E22540)

	inline static constexpr unsigned int TransformSyncer_TypeDefinitionIndex = 37156;

	class TransformSyncer : public Il2CppObject
	{
	public:
		Il2CppObject* sceneHandles; // 0x10
		Il2CppObject* streamHandles; // 0x20

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMSYNCER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void BindAt(::System::Int32 arg, ::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animator*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMSYNCER_BINDAT_OFFSET))(arg, arg, arg, nullptr);
		}

		TransformSyncer* Create(::System::Int32 arg)
		{
			return (return (TransformSyncer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMSYNCER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMSYNCER_SYNC_OFFSET))(arg, nullptr);
		}

	};

