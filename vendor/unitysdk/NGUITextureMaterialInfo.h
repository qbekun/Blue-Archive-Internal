#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
class UITexture;

	inline static constexpr unsigned int NGUITextureMaterialInfo_TypeDefinitionIndex = 7657;

	class NGUITextureMaterialInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsMaked; // 0x10
		::UnityEngine::Material* InstanceMaterial; // 0x18
		UITexture* NGUITexture; // 0x20

	};

