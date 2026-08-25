#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonAnimation; }
class ClipInfo;
class DisableActionType;

#define SPINERAWPLAYCOMMANDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20EA0E0)
#define SPINERAWPLAYCOMMANDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20EA180)
#define SPINERAWPLAYCOMMANDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20EA250)

	inline static constexpr unsigned int SpineRawPlayCommander_TypeDefinitionIndex = 3798;

	class SpineRawPlayCommander : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonAnimation* skeletonAnimation; // 0x18
		::System::Int32 track; // 0x20
		ClipInfo* PlayOnEnable; // 0x28
		DisableActionType* actionOnDisable; // 0x38
		ClipInfo* PlayOnDisable; // 0x40

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINERAWPLAYCOMMANDER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINERAWPLAYCOMMANDER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINERAWPLAYCOMMANDER_.CTOR_OFFSET))(nullptr);
		}

	};

