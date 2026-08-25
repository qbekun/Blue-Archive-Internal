#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonPartsRenderer; }

#define SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9612340)
#define SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9612350)
#define SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9612360)
#define SKELETONPARTSRENDERERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9612390)

	inline static constexpr unsigned int SkeletonPartsRendererDelegate_TypeDefinitionIndex = 35327;

	class SkeletonPartsRendererDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::Spine::Unity::SkeletonPartsRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonPartsRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONPARTSRENDERERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONPARTSRENDERERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonPartsRenderer* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Unity::SkeletonPartsRenderer*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONPARTSRENDERERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONPARTSRENDERERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

