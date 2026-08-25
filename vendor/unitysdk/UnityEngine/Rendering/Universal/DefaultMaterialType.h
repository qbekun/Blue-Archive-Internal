#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DefaultMaterialType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DefaultMaterialType_TypeDefinitionIndex = 32514;

	class DefaultMaterialType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DefaultMaterialType* Standard; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* Particle; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* Terrain; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* Sprite; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* UnityBuiltinDefault; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* SpriteMask; // 0x0
		::UnityEngine::Rendering::Universal::DefaultMaterialType* Decal; // 0x0

	};
}

