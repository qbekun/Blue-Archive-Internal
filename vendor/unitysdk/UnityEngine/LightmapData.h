#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_LIGHTMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F46D0)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapData_TypeDefinitionIndex = 30999;

	class LightmapData : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* m_Light; // 0x10
		::UnityEngine::Texture2D* m_Dir; // 0x18
		::UnityEngine::Texture2D* m_ShadowMask; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

