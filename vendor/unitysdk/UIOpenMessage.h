#pragma once
#include "unitysdk.h"

class UIBase;

#define UIOPENMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2219D80)

	inline static constexpr unsigned int UIOpenMessage_TypeDefinitionIndex = 4398;

	class UIOpenMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIBase* UIBase; // 0x18

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

