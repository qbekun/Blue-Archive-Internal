#pragma once
#include "unitysdk.h"

class AAQuality;
class DepthBit;
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class TextureWrapMode; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define CAMERAOUTPUTTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D0450)
#define CAMERAOUTPUTTEXTURE_RELEASERT_OFFSET UNITYSDK_OFFSET(0x20D0480)
#define CAMERAOUTPUTTEXTURE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x20D0610)
#define CAMERAOUTPUTTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20D0620)
#define CAMERAOUTPUTTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D0630)
#define CAMERAOUTPUTTEXTURE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20D0640)
#define CAMERAOUTPUTTEXTURE_SETTEXTURETOMATERIALINFOS_OFFSET UNITYSDK_OFFSET(0x20D0C00)
#define CAMERAOUTPUTTEXTURE_SETTEXTURETORENDERERINFOS_OFFSET UNITYSDK_OFFSET(0x20D0A60)

	inline static constexpr unsigned int CameraOutputTexture_TypeDefinitionIndex = 3703;

	class CameraOutputTexture : public Il2CppObject
	{
	public:
		::System::String* RenderTextureName; // 0x0
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		AAQuality* antiAliasing; // 0x20
		DepthBit* depthBits; // 0x24
		::UnityEngine::RenderTextureFormat* format; // 0x28
		::UnityEngine::TextureWrapMode* wrapMode; // 0x2C
		::UnityEngine::FilterMode* filterMode; // 0x30
		::Il2CppArray<::System::Object*>* outputRendererInfos; // 0x38
		::Il2CppArray<::System::Object*>* outputMaterialInfos; // 0x40
		::UnityEngine::Camera* cam; // 0x48
		::UnityEngine::RenderTexture* rt; // 0x50
		::System::Int32 texId; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseRT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_RELEASERT_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetTextureToMaterialInfos(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_SETTEXTURETOMATERIALINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTextureToRendererInfos(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAOUTPUTTEXTURE_SETTEXTURETORENDERERINFOS_OFFSET))(arg, nullptr);
		}

	};

