#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define NGUITEXTUREBLUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x207DB90)
#define NGUITEXTUREBLUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x207E630)
#define NGUITEXTUREBLUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x207E6F0)
#define NGUITEXTUREBLUR_APPLYBLUR_OFFSET UNITYSDK_OFFSET(0x207DE90)
#define NGUITEXTUREBLUR_RELEASEFINALRT_OFFSET UNITYSDK_OFFSET(0x207DDE0)
#define NGUITEXTUREBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207E770)
#define NGUITEXTUREBLUR_RESTOREORIGINALTEXTURE_OFFSET UNITYSDK_OFFSET(0x207DD30)
#define NGUITEXTUREBLUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x207E900)
#define NGUITEXTUREBLUR_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0x207E640)

	inline static constexpr unsigned int NGUITextureBlur_TypeDefinitionIndex = 155;

	class NGUITextureBlur : public Il2CppObject
	{
	public:
		UITexture* targetUITexture; // 0x18
		::System::Int32 iterations; // 0x20
		::System::Single blurOffset; // 0x24
		::System::String* blurOffsetProp; // 0x28
		::System::String* blurShaderProp; // 0x30
		::UnityEngine::Shader* blurShader; // 0x38
		::UnityEngine::Material* blurMaterial; // 0x40
		::UnityEngine::RenderTexture* finalRT; // 0x48
		::UnityEngine::Texture* originalTexture; // 0x50

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyBlur()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_APPLYBLUR_OFFSET))(nullptr);
		}

		::System::Void ReleaseFinalRT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_RELEASEFINALRT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RestoreOriginalTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_RESTOREORIGINALTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ReleaseResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXTUREBLUR_RELEASERESOURCES_OFFSET))(nullptr);
		}

	};

