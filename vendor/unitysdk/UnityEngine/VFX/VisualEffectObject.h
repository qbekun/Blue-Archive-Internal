#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_VFX_VISUALEFFECTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A8630)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectObject_TypeDefinitionIndex = 37925;

	class VisualEffectObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

