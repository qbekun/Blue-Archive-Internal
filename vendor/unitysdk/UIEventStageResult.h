#pragma once
#include "unitysdk.h"

class UITexture;
class UIScrollView;
class UIGrid;
class MXButton;
namespace MX::Data { class EventContentStageInfo; }
class UIEventStageResultRewardSlot;

#define UIEVENTSTAGERESULT___N__0_OFFSET UNITYSDK_OFFSET(0x24C2890)
#define UIEVENTSTAGERESULT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x24C28A0)
#define UIEVENTSTAGERESULT_ONDETAILBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24C2910)
#define UIEVENTSTAGERESULT_ONBACK_OFFSET UNITYSDK_OFFSET(0x24C2DD0)
#define UIEVENTSTAGERESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24C2ED0)
#define UIEVENTSTAGERESULT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24C31E0)
#define UIEVENTSTAGERESULT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24C3200)
#define UIEVENTSTAGERESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C3290)
#define UIEVENTSTAGERESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24C4420)
#define UIEVENTSTAGERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C44C0)

	inline static constexpr unsigned int UIEventStageResult_TypeDefinitionIndex = 5903;

	class UIEventStageResult : public Il2CppObject
	{
	public:
		UITexture* eventBannerTexture; // 0xD8
		UIScrollView* rewardSlotListScrollView; // 0xE0
		UIGrid* rewardSlotListGrid; // 0xE8
		::Il2CppArray<::System::Object*>* rewardSlots; // 0xF0
		MXButton* okButton; // 0xF8
		::Il2CppArray<::System::Object*>* rewardDetailPopups; // 0x100
		::MX::Data::EventContentStageInfo* stageInfo; // 0x108
		::System::Action* okAction; // 0x110

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDetailButtonClicked(UIEventStageResultRewardSlot* arg)
		{
			((::System::Void(*)(UIEventStageResultRewardSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_ONDETAILBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::MX::Data::EventContentStageInfo* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Action* arg6)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULT_.CTOR_OFFSET))(nullptr);
		}

	};

