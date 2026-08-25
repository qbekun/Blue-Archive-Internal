#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_SCENEOBJECTSONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF3D0)

namespace TriInspector
{
	inline static constexpr unsigned int SceneObjectsOnlyAttribute_TypeDefinitionIndex = 37851;

	class SceneObjectsOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SCENEOBJECTSONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

