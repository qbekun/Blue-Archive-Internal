#pragma once
#include "unitysdk.h"

#define UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2241070)
#define UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22410B0)

	inline static constexpr unsigned int UIBattlePassBuyLevelRewardScrollViewController_TypeDefinitionIndex = 4484;

	class UIBattlePassBuyLevelRewardScrollViewController : public ::System::Xml::XmlNamedNodeMap
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSBUYLEVELREWARDSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

