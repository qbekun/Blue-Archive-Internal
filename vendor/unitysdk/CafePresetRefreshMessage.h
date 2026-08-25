#pragma once
#include "unitysdk.h"

#define CAFEPRESETREFRESHMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F1C0)

	inline static constexpr unsigned int CafePresetRefreshMessage_TypeDefinitionIndex = 2048;

	class CafePresetRefreshMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETREFRESHMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

