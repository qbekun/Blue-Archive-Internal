#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Shader; }

#define DEBUGSHADERRESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA072180)

	inline static constexpr unsigned int DebugShaderResources_TypeDefinitionIndex = 32745;

	class DebugShaderResources : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* debugReplacementPS; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGSHADERRESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};

