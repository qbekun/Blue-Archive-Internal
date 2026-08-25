#pragma once
#include "unitysdk.h"

class UILabel;

#define UIACADEMYLOCATIONRANKINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B85B0)
#define UIACADEMYLOCATIONRANKINFOPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21B85C0)

	inline static constexpr unsigned int UIAcademyLocationRankInfoPopup_TypeDefinitionIndex = 4205;

	class UIAcademyLocationRankInfoPopup : public Il2CppObject
	{
	public:
		UILabel* totalRankLabel; // 0xD8
		UILabel* currentCount; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONRANKINFOPOPUP_ONENABLE_OFFSET))(nullptr);
		}

	};

