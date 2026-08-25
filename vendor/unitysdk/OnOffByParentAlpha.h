#pragma once
#include "unitysdk.h"

class UIRect;

#define ONOFFBYPARENTALPHA_.CTOR_OFFSET UNITYSDK_OFFSET(0x205DAD0)
#define ONOFFBYPARENTALPHA_FINDSYNCPARENT_OFFSET UNITYSDK_OFFSET(0x205DAE0)
#define ONOFFBYPARENTALPHA_AWAKE_OFFSET UNITYSDK_OFFSET(0x205DB30)

	inline static constexpr unsigned int OnOffByParentAlpha_TypeDefinitionIndex = 3368;

	class OnOffByParentAlpha : public Il2CppObject
	{
	public:
		UIRect* parentToSync; // 0x18
		::System::Boolean FirstFrameHide; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFBYPARENTALPHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FindSyncParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFBYPARENTALPHA_FINDSYNCPARENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFBYPARENTALPHA_AWAKE_OFFSET))(nullptr);
		}

	};

