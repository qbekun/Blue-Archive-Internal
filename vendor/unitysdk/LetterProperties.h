#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define LETTERPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BC5F0)

	inline static constexpr unsigned int LetterProperties_TypeDefinitionIndex = 168;

	class LetterProperties : public Il2CppObject
	{
	public:
		::System::Single start; // 0x10
		::System::Single duration; // 0x14
		::UnityEngine::Vector2* offset; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LETTERPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};

