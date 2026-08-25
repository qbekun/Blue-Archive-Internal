#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define TEXTURERESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02ABB0)

	inline static constexpr unsigned int TextureResources_TypeDefinitionIndex = 32505;

	class TextureResources : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* blueNoise16LTex; // 0x10
		::Il2CppArray<::System::Object*>* filmGrainTex; // 0x18
		::UnityEngine::Texture2D* smaaAreaTex; // 0x20
		::UnityEngine::Texture2D* smaaSearchTex; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTURERESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};

