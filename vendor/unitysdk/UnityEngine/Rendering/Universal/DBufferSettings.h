#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalSurfaceData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA068290)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DBufferSettings_TypeDefinitionIndex = 32724;

	class DBufferSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalSurfaceData* surfaceData; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

