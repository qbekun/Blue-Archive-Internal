#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define WAITFORANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E370)
#define WAITFORANIMATION_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x205E3A0)

	inline static constexpr unsigned int WaitForAnimation_TypeDefinitionIndex = 3380;

	class WaitForAnimation : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* animation; // 0x10

		::System::Void .ctor(::UnityEngine::Animation* arg)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORANIMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORANIMATION_GET_KEEPWAITING_OFFSET))(nullptr);
		}

	};

