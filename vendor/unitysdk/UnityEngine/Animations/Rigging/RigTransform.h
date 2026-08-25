#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E28000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigTransform_TypeDefinitionIndex = 37179;

	class RigTransform : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGTRANSFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

