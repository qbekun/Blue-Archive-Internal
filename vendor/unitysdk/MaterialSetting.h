#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

	inline static constexpr unsigned int MaterialSetting_TypeDefinitionIndex = 3642;

	class MaterialSetting : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::UnityEngine::Material* Material; // 0x18

	};

