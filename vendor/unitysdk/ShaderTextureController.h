#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }

#define SHADERTEXTURECONTROLLER_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x20C46B0)
#define SHADERTEXTURECONTROLLER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x20C47C0)
#define SHADERTEXTURECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20C48C0)
#define SHADERTEXTURECONTROLLER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x20C48F0)
#define SHADERTEXTURECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C4900)
#define SHADERTEXTURECONTROLLER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x20C46C0)

	inline static constexpr unsigned int ShaderTextureController_TypeDefinitionIndex = 3659;

	class ShaderTextureController : public Il2CppObject
	{
	public:
		::System::String* texturePropertyName; // 0xD0
		::System::Int32 propertyID; // 0xD8

		::System::Void set_Texture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_SET_TEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* GetTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_GETTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_Texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERTEXTURECONTROLLER_SETTEXTURE_OFFSET))(arg, nullptr);
		}

	};

