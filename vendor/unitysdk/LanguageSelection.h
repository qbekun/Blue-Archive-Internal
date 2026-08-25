#pragma once
#include "unitysdk.h"

class UIPopupList;

#define LANGUAGESELECTION_START_OFFSET UNITYSDK_OFFSET(0x9F68B0)
#define LANGUAGESELECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F6C40)
#define LANGUAGESELECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F6C50)
#define LANGUAGESELECTION_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F6A10)
#define LANGUAGESELECTION_ONLOCALIZE_OFFSET UNITYSDK_OFFSET(0x9F6CA0)
#define LANGUAGESELECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F6CB0)

	inline static constexpr unsigned int LanguageSelection_TypeDefinitionIndex = 13;

	class LanguageSelection : public Il2CppObject
	{
	public:
		UIPopupList* mList; // 0x18
		::System::Boolean mStarted; // 0x20

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnLocalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_ONLOCALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANGUAGESELECTION_.CTOR_OFFSET))(nullptr);
		}

	};

