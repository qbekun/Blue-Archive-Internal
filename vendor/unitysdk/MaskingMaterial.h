#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define MASKINGMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16EC50)

	inline static constexpr unsigned int MaskingMaterial_TypeDefinitionIndex = 33700;

	class MaskingMaterial : public Il2CppObject
	{
	public:
		::UnityEngine::Material* baseMaterial; // 0x10
		::UnityEngine::Material* stencilMaterial; // 0x18
		::System::Int32 count; // 0x20
		::System::Int32 stencilID; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MASKINGMATERIAL_.CTOR_OFFSET))(nullptr);
		}

	};

