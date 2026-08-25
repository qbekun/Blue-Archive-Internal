#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class Pivot;

#define NGUIEXTENSION_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x2057460)
#define NGUIEXTENSION_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x2056FA0)

	inline static constexpr unsigned int NGUIExtension_TypeDefinitionIndex = 3348;

	class NGUIExtension : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* ToVector2(Pivot* arg)
		{
			return ((::UnityEngine::Vector2*(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIEXTENSION_TOVECTOR2_OFFSET))(arg, nullptr);
		}

		Pivot* MoveLeft(Pivot* arg)
		{
			return ((Pivot*(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIEXTENSION_MOVELEFT_OFFSET))(arg, nullptr);
		}

	};

