#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }

#define UITUTORIALDELEY_NEXT_OFFSET UNITYSDK_OFFSET(0xB816F0)
#define UITUTORIALDELEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB81790)
#define UITUTORIALDELEY_SETBGOBJACTIVE_OFFSET UNITYSDK_OFFSET(0xB819D0)
#define UITUTORIALDELEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB81A50)

	inline static constexpr unsigned int UITutorialDeley_TypeDefinitionIndex = 8520;

	class UITutorialDeley : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* bgObj; // 0x18
		::System::Single deleyTime; // 0x20
		::UnityEngine::Coroutine* deleyCoroutine; // 0x28

		::System::Collections::IEnumerator* Next(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALDELEY_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALDELEY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetBgObjActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALDELEY_SETBGOBJACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALDELEY_.CTOR_OFFSET))(nullptr);
		}

	};

