#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TileSize; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TILESIZEEXTENSIONS_ISVALID_OFFSET UNITYSDK_OFFSET(0xA076110)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TileSizeExtensions_TypeDefinitionIndex = 32765;

	class TileSizeExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(::UnityEngine::Rendering::Universal::TileSize* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TileSize*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TILESIZEEXTENSIONS_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

