#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
class UIWidget;

#define ANIMATEDCOLOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207F510)
#define ANIMATEDCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x207F6B0)
#define ANIMATEDCOLOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x207F600)

	inline static constexpr unsigned int AnimatedColor_TypeDefinitionIndex = 158;

	class AnimatedColor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* color; // 0x18
		UIWidget* mWidget; // 0x28

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDCOLOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDCOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDCOLOR_LATEUPDATE_OFFSET))(nullptr);
		}

	};

