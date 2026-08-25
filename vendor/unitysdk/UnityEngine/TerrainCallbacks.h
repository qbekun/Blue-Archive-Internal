#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class RectInt; }

#define UNITYENGINE_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2A7A10)
#define UNITYENGINE_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2A7B40)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainCallbacks_TypeDefinitionIndex = 37796;

	class TerrainCallbacks : public Il2CppObject
	{
	public:
		HeightmapChangedCallback* heightmapChanged; // 0x0
		TextureChangedCallback* textureChanged; // 0x8

		::System::Void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* arg, ::UnityEngine::RectInt* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCALLBACKS_INVOKEHEIGHTMAPCHANGEDCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InvokeTextureChangedCallback(::UnityEngine::TerrainData* arg, ::System::String* str, ::UnityEngine::RectInt* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::TerrainData*, ::System::String*, ::UnityEngine::RectInt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCALLBACKS_INVOKETEXTURECHANGEDCALLBACK_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

