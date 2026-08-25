#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define FALLBACKMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA170AB0)

	inline static constexpr unsigned int FallbackMaterial_TypeDefinitionIndex = 33699;

	class FallbackMaterial : public Il2CppObject
	{
	public:
		::System::Int64 fallbackID; // 0x10
		::UnityEngine::Material* sourceMaterial; // 0x18
		::System::Int32 sourceMaterialCRC; // 0x20
		::UnityEngine::Material* fallbackMaterial; // 0x28
		::System::Int32 count; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALLBACKMATERIAL_.CTOR_OFFSET))(nullptr);
		}

	};

