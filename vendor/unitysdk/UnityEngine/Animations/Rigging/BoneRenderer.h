#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_GET_TRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E2D570)
#define UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D580)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int BoneRenderer_TypeDefinitionIndex = 37200;

	class BoneRenderer : public Il2CppObject
	{
	public:
		BoneShape* boneShape; // 0x18
		::System::Boolean drawBones; // 0x1C
		::System::Boolean drawTripods; // 0x1D
		::System::Single boneSize; // 0x20
		::System::Single tripodSize; // 0x24
		::UnityEngine::Color* boneColor; // 0x28
		::Il2CppArray<::System::Object*>* m_Transforms; // 0x38

		::Il2CppArray<::System::Object*>* get_transforms()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_GET_TRANSFORMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_.CTOR_OFFSET))(nullptr);
		}

	};
}

