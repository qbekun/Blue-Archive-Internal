#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define COLORREPLACEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2614770)

	inline static constexpr unsigned int ColorReplacePair_TypeDefinitionIndex = 6507;

	class ColorReplacePair : public Il2CppObject
	{
	public:
		::UnityEngine::Color* target; // 0x10
		::UnityEngine::Color* overrideTo; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORREPLACEPAIR_.CTOR_OFFSET))(nullptr);
		}

	};

