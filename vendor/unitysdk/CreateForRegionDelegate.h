#pragma once
#include "unitysdk.h"

namespace Spine { class AtlasRegion; }
namespace UnityEngine { class Material; }
namespace Spine::Unity { class SkeletonDataAsset; }

#define CREATEFORREGIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95EA2D0)
#define CREATEFORREGIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E88A0)
#define CREATEFORREGIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95EA390)
#define CREATEFORREGIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95EA3D0)

	inline static constexpr unsigned int CreateForRegionDelegate_TypeDefinitionIndex = 35270;

	class CreateForRegionDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(Il2CppObject&* arg, bool&* arg, ::Spine::AtlasRegion* arg, ::UnityEngine::Material* arg, ::System::String* str, ::Spine::Unity::SkeletonDataAsset* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject&*, bool&*, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEFORREGIONDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATEFORREGIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(Il2CppObject&* arg, bool&* arg, ::Spine::AtlasRegion* arg, ::UnityEngine::Material* arg, ::System::String* str, ::Spine::Unity::SkeletonDataAsset* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, bool&*, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEFORREGIONDELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean EndInvoke(Il2CppObject&* arg, bool&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, bool&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEFORREGIONDELEGATE_ENDINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

