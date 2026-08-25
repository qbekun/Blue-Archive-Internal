#pragma once
#include "unitysdk.h"

class MXToggle;

#define UITUTORIALTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB820C0)
#define UITUTORIALTOGGLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB820D0)
#define UITUTORIALTOGGLE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB821C0)

	inline static constexpr unsigned int UITutorialToggle_TypeDefinitionIndex = 8522;

	class UITutorialToggle : public Il2CppObject
	{
	public:
		MXToggle* mxToggle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALTOGGLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALTOGGLE_ONCLICK_OFFSET))(nullptr);
		}

	};

