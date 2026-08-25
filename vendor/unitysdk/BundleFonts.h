#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Font; }

#define BUNDLEFONTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xC86440)

	inline static constexpr unsigned int BundleFonts_TypeDefinitionIndex = 9076;

	class BundleFonts : public Il2CppObject
	{
	public:
		::UnityEngine::Font* Normal; // 0x18
		::UnityEngine::Font* Bold; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEFONTS_.CTOR_OFFSET))(nullptr);
		}

	};

