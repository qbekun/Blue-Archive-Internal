#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define APPEARANCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C4A0)

	inline static constexpr unsigned int Appearance_TypeDefinitionIndex = 34299;

	class Appearance : public Il2CppObject
	{
	public:
		::UnityEngine::Color* pathColor; // 0x10
		::UnityEngine::Color* inactivePathColor; // 0x20
		::System::Single width; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APPEARANCE_.CTOR_OFFSET))(nullptr);
		}

	};

