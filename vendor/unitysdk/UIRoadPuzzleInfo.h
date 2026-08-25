#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;

#define UIROADPUZZLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C95F0)
#define UIROADPUZZLEINFO_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x27C7A50)
#define UIROADPUZZLEINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x27C9600)

	inline static constexpr unsigned int UIRoadPuzzleInfo_TypeDefinitionIndex = 7585;

	class UIRoadPuzzleInfo : public Il2CppObject
	{
	public:
		UILabel* RoundLabel; // 0x18
		UISprite* CurrencyIcon; // 0x20
		UILabel* CurrencyAmountLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINFO_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLEINFO_REFRESH_OFFSET))(nullptr);
		}

	};

