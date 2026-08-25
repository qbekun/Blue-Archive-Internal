#pragma once
#include "unitysdk.h"

class UILabel;

#define BOSSLEVELWIDGET_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x25D0320)
#define BOSSLEVELWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D0340)

	inline static constexpr unsigned int BossLevelWidget_TypeDefinitionIndex = 6351;

	class BossLevelWidget : public Il2CppObject
	{
	public:
		UILabel* levelLabel; // 0x18

		::System::Void SetLevel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BOSSLEVELWIDGET_SETLEVEL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOSSLEVELWIDGET_.CTOR_OFFSET))(nullptr);
		}

	};

