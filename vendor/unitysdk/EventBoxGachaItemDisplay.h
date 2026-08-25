#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
class EventBoxGachaInfo;

#define EVENTBOXGACHAITEMDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x247B780)
#define EVENTBOXGACHAITEMDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x247B9D0)
#define EVENTBOXGACHAITEMDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x247BB10)

	inline static constexpr unsigned int EventBoxGachaItemDisplay_TypeDefinitionIndex = 5666;

	class EventBoxGachaItemDisplay : public Il2CppObject
	{
	public:
		UILabel* amountCount; // 0x18
		UITexture* parcelTexture; // 0x20
		UISprite* parcelRarity; // 0x28

		::System::Void SetData(EventBoxGachaInfo* arg)
		{
			((::System::Void(*)(EventBoxGachaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHAITEMDISPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHAITEMDISPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHAITEMDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

