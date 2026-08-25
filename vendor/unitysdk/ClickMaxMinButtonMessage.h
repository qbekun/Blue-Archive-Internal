#pragma once
#include "unitysdk.h"

#define CLICKMAXMINBUTTONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC20020)

	inline static constexpr unsigned int ClickMaxMinButtonMessage_TypeDefinitionIndex = 8872;

	class ClickMaxMinButtonMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKMAXMINBUTTONMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

