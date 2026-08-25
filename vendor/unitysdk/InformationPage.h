#pragma once
#include "unitysdk.h"

class UITexture;
class UIScrollView;

#define INFORMATIONPAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26021A0)
#define INFORMATIONPAGE_SCROLLRESETPOSITION_OFFSET UNITYSDK_OFFSET(0x26021B0)
#define INFORMATIONPAGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2602230)

	inline static constexpr unsigned int InformationPage_TypeDefinitionIndex = 6466;

	class InformationPage : public Il2CppObject
	{
	public:
		UITexture* imageTexture; // 0x18
		::System::String* imageTexturePath; // 0x20
		UIScrollView* scrollView; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONPAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ScrollResetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONPAGE_SCROLLRESETPOSITION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONPAGE_INITIALIZE_OFFSET))(nullptr);
		}

	};

