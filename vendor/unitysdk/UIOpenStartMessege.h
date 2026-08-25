#pragma once
#include "unitysdk.h"

class UIBase;

#define UIOPENSTARTMESSEGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2688940)

	inline static constexpr unsigned int UIOpenStartMessege_TypeDefinitionIndex = 6768;

	class UIOpenStartMessege : public ::TriInspector::TitleAttribute
	{
	public:
		UIBase* UIBase; // 0x18

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENSTARTMESSEGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

