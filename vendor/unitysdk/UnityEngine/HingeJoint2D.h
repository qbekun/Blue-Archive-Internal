#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HINGEJOINT2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA29E150)

namespace UnityEngine
{
	inline static constexpr unsigned int HingeJoint2D_TypeDefinitionIndex = 37717;

	class HingeJoint2D : public ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HINGEJOINT2D_.CTOR_OFFSET))(nullptr);
		}

	};
}

