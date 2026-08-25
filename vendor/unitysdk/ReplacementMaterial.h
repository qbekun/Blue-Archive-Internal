#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define REPLACEMENTMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E96F0)

	inline static constexpr unsigned int ReplacementMaterial_TypeDefinitionIndex = 35268;

	class ReplacementMaterial : public Il2CppObject
	{
	public:
		::System::String* pageName; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLACEMENTMATERIAL_.CTOR_OFFSET))(nullptr);
		}

	};

