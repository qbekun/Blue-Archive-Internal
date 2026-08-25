#pragma once
#include "unitysdk.h"

class MXButton;

#define UINORMALCRAFTREWARDDETAIL_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x239D5A0)
#define UINORMALCRAFTREWARDDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x239D5D0)
#define UINORMALCRAFTREWARDDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x239D5E0)
#define UINORMALCRAFTREWARDDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x239D920)

	inline static constexpr unsigned int UINormalCraftRewardDetail_TypeDefinitionIndex = 5179;

	class UINormalCraftRewardDetail : public Il2CppObject
	{
	public:
		Il2CppObject* nodeInfos; // 0x18
		MXButton* closePopupBtn; // 0x20

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTREWARDDETAIL_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTREWARDDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTREWARDDETAIL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTREWARDDETAIL_AWAKE_OFFSET))(nullptr);
		}

	};

