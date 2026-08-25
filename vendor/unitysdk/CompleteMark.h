#pragma once
#include "unitysdk.h"

class UITexture;
class TweenScale;
class TweenAlpha;

#define COMPLETEMARK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2216320)

	inline static constexpr unsigned int CompleteMark_TypeDefinitionIndex = 4382;

	class CompleteMark : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x10
		TweenScale* TweenScale; // 0x18
		TweenAlpha* TweenAlpha; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEMARK_.CTOR_OFFSET))(nullptr);
		}

	};

