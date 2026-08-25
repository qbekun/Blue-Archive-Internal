#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define BGTEXTUREENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF5640)

	inline static constexpr unsigned int BgTextureEntry_TypeDefinitionIndex = 10181;

	class BgTextureEntry : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* Texture; // 0x10
		::System::Int32 RefCount; // 0x18
		::System::Boolean PendingDestroy; // 0x1C

		::System::Void .ctor(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + BGTEXTUREENTRY_.CTOR_OFFSET))(arg, nullptr);
		}

	};

