#pragma once
#include "unitysdk.h"

class UIWidget;

#define ANIMATEDWIDGET_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x207F6D0)
#define ANIMATEDWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207F930)
#define ANIMATEDWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x207F980)

	inline static constexpr unsigned int AnimatedWidget_TypeDefinitionIndex = 159;

	class AnimatedWidget : public Il2CppObject
	{
	public:
		::System::Single width; // 0x18
		::System::Single height; // 0x1C
		UIWidget* mWidget; // 0x20

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDWIDGET_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDWIDGET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATEDWIDGET_.CTOR_OFFSET))(nullptr);
		}

	};

