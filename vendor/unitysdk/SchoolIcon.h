#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;

#define SCHOOLICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2370B10)

	inline static constexpr unsigned int SchoolIcon_TypeDefinitionIndex = 5077;

	class SchoolIcon : public Il2CppObject
	{
	public:
		UITexture* SchoolIconTexture; // 0x10
		UISprite* NoneIconSprite; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLICON_.CTOR_OFFSET))(nullptr);
		}

	};

