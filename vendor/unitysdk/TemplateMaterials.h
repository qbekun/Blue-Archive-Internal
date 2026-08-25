#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define TEMPLATEMATERIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EA2C0)

	inline static constexpr unsigned int TemplateMaterials_TypeDefinitionIndex = 35269;

	class TemplateMaterials : public Il2CppObject
	{
	public:
		::UnityEngine::Material* additiveTemplate; // 0x10
		::UnityEngine::Material* multiplyTemplate; // 0x18
		::UnityEngine::Material* screenTemplate; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPLATEMATERIALS_.CTOR_OFFSET))(nullptr);
		}

	};

