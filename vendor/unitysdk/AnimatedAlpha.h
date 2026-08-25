#pragma once
#include "unitysdk.h"

class UIWidget;
class UIPanel;

#define ANIMATEDALPHA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x207F3B0)
#define ANIMATEDALPHA_.CTOR_OFFSET UNITYSDK_OFFSET(0x207F480)
#define ANIMATEDALPHA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207F490)

	inline static constexpr unsigned int AnimatedAlpha_TypeDefinitionIndex = 157;

	class AnimatedAlpha : public Il2CppObject
	{
	public:
		::System::Single alpha; // 0x18
		UIWidget* mWidget; // 0x20
		UIPanel* mPanel; // 0x28

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDALPHA_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDALPHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDALPHA_ONENABLE_OFFSET))(nullptr);
		}

	};

