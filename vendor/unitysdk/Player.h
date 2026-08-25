#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Coroutine; }

#define PLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D443B0)

	inline static constexpr unsigned int Player_TypeDefinitionIndex = 20134;

	class Player : public Il2CppObject
	{
	public:
		::UnityEngine::AudioSource* Source; // 0x10
		::UnityEngine::Coroutine* Coroutine; // 0x18
		CoroutineType* CoroutineType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

