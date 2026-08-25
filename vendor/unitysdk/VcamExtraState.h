#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class VolumeProfile; }

#define VCAMEXTRASTATE_CREATEPROFILECOPY_OFFSET UNITYSDK_OFFSET(0x28830C0)
#define VCAMEXTRASTATE_DESTROYPROFILECOPY_OFFSET UNITYSDK_OFFSET(0x2882A90)
#define VCAMEXTRASTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2883650)

	inline static constexpr unsigned int VcamExtraState_TypeDefinitionIndex = 34402;

	class VcamExtraState : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::VolumeProfile* mProfileCopy; // 0x10

		::System::Void CreateProfileCopy(::UnityEngine::Rendering::VolumeProfile* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeProfile*, ::PVOID))((::PBYTE)hIl2Cpp + VCAMEXTRASTATE_CREATEPROFILECOPY_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyProfileCopy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VCAMEXTRASTATE_DESTROYPROFILECOPY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VCAMEXTRASTATE_.CTOR_OFFSET))(nullptr);
		}

	};

