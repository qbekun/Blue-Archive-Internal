#pragma once
#include "unitysdk.h"

class UILabel;

#define UISERVERSELECTGLOBALSTATUSLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD8090)
#define UISERVERSELECTGLOBALSTATUSLABEL_SETTEXT_OFFSET UNITYSDK_OFFSET(0xCD8050)

	inline static constexpr unsigned int UIServerSelectGlobalStatusLabel_TypeDefinitionIndex = 9158;

	class UIServerSelectGlobalStatusLabel : public Il2CppObject
	{
	public:
		UILabel* label; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUSLABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECTGLOBALSTATUSLABEL_SETTEXT_OFFSET))(str, nullptr);
		}

	};

