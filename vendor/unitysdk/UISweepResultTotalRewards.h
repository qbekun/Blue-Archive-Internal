#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UIGrid;

#define UISWEEPRESULTTOTALREWARDS_SETDATA_OFFSET UNITYSDK_OFFSET(0xB2B2A0)
#define UISWEEPRESULTTOTALREWARDS_ONCLICKOPENPOPUP_OFFSET UNITYSDK_OFFSET(0xB30270)
#define UISWEEPRESULTTOTALREWARDS_GET_GRID_OFFSET UNITYSDK_OFFSET(0xB30200)
#define UISWEEPRESULTTOTALREWARDS_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0xB30190)
#define UISWEEPRESULTTOTALREWARDS_AWAKE_OFFSET UNITYSDK_OFFSET(0xB30410)
#define UISWEEPRESULTTOTALREWARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xB30530)

	inline static constexpr unsigned int UISweepResultTotalRewards_TypeDefinitionIndex = 8283;

	class UISweepResultTotalRewards : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* sellAllObj; // 0x18
		MXButton* openPopupButton; // 0x20
		Il2CppObject* rewardParcels; // 0x28
		::Il2CppArray<::System::Object*>* _parcelCards; // 0x30
		UIGrid* _grid; // 0x38

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_ONCLICKOPENPOPUP_OFFSET))(nullptr);
		}

		UIGrid* get_grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_GET_GRID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parcelCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTTOTALREWARDS_.CTOR_OFFSET))(nullptr);
		}

	};

