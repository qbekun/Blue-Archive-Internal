#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }

#define SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9610450)
#define SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9610460)
#define SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9610470)
#define SKELETONRENDERERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96104A0)

	inline static constexpr unsigned int SkeletonRendererDelegate_TypeDefinitionIndex = 35318;

	class SkeletonRendererDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRenderer* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::SkeletonRenderer*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONRENDERERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

