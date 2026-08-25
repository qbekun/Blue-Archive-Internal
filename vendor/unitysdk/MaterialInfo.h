#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
class ShadowControlMode;
namespace UnityEngine::Rendering { class ShadowCastingMode; }

	inline static constexpr unsigned int MaterialInfo_TypeDefinitionIndex = 3722;

	class MaterialInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::Boolean ApplyToAllMaterials; // 0x18
		::Il2CppArray<::System::Object*>* MaterialIndexes; // 0x20
		ShadowControlMode* SetShadow; // 0x28
		::System::Single SetShadowDelay; // 0x2C
		::UnityEngine::Rendering::ShadowCastingMode* OriginalShadowMode; // 0x30

	};

