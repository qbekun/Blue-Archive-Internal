#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UITOGGLEDOBJECTS_SET_OFFSET UNITYSDK_OFFSET(0xA41F10)
#define UITOGGLEDOBJECTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41FA0)
#define UITOGGLEDOBJECTS_AWAKE_OFFSET UNITYSDK_OFFSET(0xA41FB0)
#define UITOGGLEDOBJECTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA42200)

	inline static constexpr unsigned int UIToggledObjects_TypeDefinitionIndex = 86;

	class UIToggledObjects : public Il2CppObject
	{
	public:
		Il2CppObject* activate; // 0x18
		Il2CppObject* deactivate; // 0x20
		::UnityEngine::GameObject* target; // 0x28
		::System::Boolean inverse; // 0x30

		::System::Void Set(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDOBJECTS_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDOBJECTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDOBJECTS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Toggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLEDOBJECTS_TOGGLE_OFFSET))(nullptr);
		}

	};

