#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2; }

#define LEAN_TOUCH_LEANTRANSLATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB3DF0)
#define LEAN_TOUCH_LEANTRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1EB4040)
#define LEAN_TOUCH_LEANTRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB43B0)
#define LEAN_TOUCH_LEANTRANSLATE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EB43C0)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanTranslate_TypeDefinitionIndex = 21260;

	class LeanTranslate : public Il2CppObject
	{
	public:
		::System::Single SpeedRate; // 0x18
		::System::Boolean IgnoreX; // 0x1C
		::System::Boolean IgnoreY; // 0x1D
		::System::Boolean IgnoreZ; // 0x1E
		::System::Boolean UseMinMaxX; // 0x1F
		::System::Single MinX; // 0x20
		::System::Single MaxX; // 0x24
		::System::Boolean UseMinMaxY; // 0x28
		::System::Single MinY; // 0x2C
		::System::Single MaxY; // 0x30
		::System::Boolean UseMinMaxZ; // 0x34
		::System::Single MinZ; // 0x38
		::System::Single MaxZ; // 0x3C
		::System::Boolean Reverse; // 0x40
		::UnityEngine::Camera* Camera; // 0x48
		::UnityEngine::Vector2* prevScreenPos; // 0x50
		Il2CppObject* IsCameraDrag; // 0x58

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTRANSLATE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Translate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTRANSLATE_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTRANSLATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANTRANSLATE_AWAKE_OFFSET))(nullptr);
		}

	};
}

