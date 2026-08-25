#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonRootMotionBase; }
namespace UnityEngine { class Vector2; }

#define ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95FA0F0)
#define ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95FA1A0)
#define ROOTMOTIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95FA1B0)
#define ROOTMOTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95FA2C0)

	inline static constexpr unsigned int RootMotionDelegate_TypeDefinitionIndex = 35298;

	class RootMotionDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRootMotionBase* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2*, ::System::Single, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRootMotionBase* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRootMotionBase*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

