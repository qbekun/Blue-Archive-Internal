#pragma once
#include "unitysdk.h"

class UIBase;

#define UIENDOPENANIMATIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2219DE0)

	inline static constexpr unsigned int UIEndOpenAnimationMessage_TypeDefinitionIndex = 4400;

	class UIEndOpenAnimationMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIBase* UIBase; // 0x18

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIENDOPENANIMATIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

