#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DLOOKUPTEXTURE_CREATEPOINTLIGHTLOOKUPTEXTURE_OFFSET UNITYSDK_OFFSET(0xA01E240)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DLOOKUPTEXTURE_GETLIGHTLOOKUPTEXTURE_OFFSET UNITYSDK_OFFSET(0xA01E7C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Light2DLookupTexture_TypeDefinitionIndex = 32486;

	class Light2DLookupTexture : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* s_PointLightLookupTexture; // 0x0

		::UnityEngine::Texture2D* CreatePointLightLookupTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DLOOKUPTEXTURE_CREATEPOINTLIGHTLOOKUPTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* GetLightLookupTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DLOOKUPTEXTURE_GETLIGHTLOOKUPTEXTURE_OFFSET))(nullptr);
		}

	};
}

