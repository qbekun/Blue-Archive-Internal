#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define COLORSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD6700)

	inline static constexpr unsigned int ColorSet_TypeDefinitionIndex = 8063;

	class ColorSet : public Il2CppObject
	{
	public:
		::UnityEngine::Color* FxFull; // 0x10
		::UnityEngine::Color* FrontGauge; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORSET_.CTOR_OFFSET))(nullptr);
		}

	};

