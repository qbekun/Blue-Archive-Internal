#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainer;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIMISSIONSPINECHARACTER_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x269BE50)
#define UIMISSIONSPINECHARACTER_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x269BEA0)
#define UIMISSIONSPINECHARACTER_GET_SPINECONTAINER_OFFSET UNITYSDK_OFFSET(0x26992B0)
#define UIMISSIONSPINECHARACTER_START_OFFSET UNITYSDK_OFFSET(0x269BF20)
#define UIMISSIONSPINECHARACTER_COHANDLECOMPLETEDAILYFIXEDMISSION_OFFSET UNITYSDK_OFFSET(0x2698C30)
#define UIMISSIONSPINECHARACTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2699260)
#define UIMISSIONSPINECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x269C060)
#define UIMISSIONSPINECHARACTER_HANDLECOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0x2698CC0)

	inline static constexpr unsigned int UIMissionSpineCharacter_TypeDefinitionIndex = 6822;

	class UIMissionSpineCharacter : public Il2CppObject
	{
	public:
		MXButton* skipButton; // 0x18
		SpineChatDialogContainer* _spineContainer; // 0x20

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void ShowRewardUI(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_SHOWREWARDUI_OFFSET))(arg, nullptr);
		}

		SpineChatDialogContainer* get_SpineContainer()
		{
			return ((SpineChatDialogContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_GET_SPINECONTAINER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHandleCompleteDailyFixedMission(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_COHANDLECOMPLETEDAILYFIXEDMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleCompleteMission(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSPINECHARACTER_HANDLECOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

	};

