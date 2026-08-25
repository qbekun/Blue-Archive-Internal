#pragma once
#include "unitysdk.h"

class UIBase;

#define UICLOSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2219DB0)

	inline static constexpr unsigned int UICloseMessage_TypeDefinitionIndex = 4399;

	class UICloseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIBase* UIBase; // 0x18

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICLOSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

