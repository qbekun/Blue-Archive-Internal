#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define KEEPINGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xED55A0)

	inline static constexpr unsigned int KeepingObject_TypeDefinitionIndex = 10941;

	class KeepingObject : public Il2CppObject
	{
	public:
		::System::Boolean isActivated; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18

		::System::Void .ctor(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEEPINGOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

