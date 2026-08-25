#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skeleton; }

#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95E3A00)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET UNITYSDK_OFFSET(0x95E3A30)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95E3AC0)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E3AE0)
#define SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x95E3AF0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SkeletonGraphicPlayableHandle_TypeDefinitionIndex = 37933;

	class SkeletonGraphicPlayableHandle : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x20

		::Spine::SkeletonData* get_SkeletonData()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET))(nullptr);
		}

		::System::Void InitializeReference()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_GET_SKELETON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONGRAPHICPLAYABLEHANDLE_AWAKE_OFFSET))(nullptr);
		}

	};
}

