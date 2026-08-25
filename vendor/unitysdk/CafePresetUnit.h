#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class ButtonActivator;
class UIPopup_CafeTemplateApply;
namespace MX::GameLogic::DBModel { class CafePresetDB; }
class UIPopup_CafePresetNameEdit;

#define CAFEPRESETUNIT_ONCLICKAPPLY_OFFSET UNITYSDK_OFFSET(0x2264F90)
#define CAFEPRESETUNIT_ONCLICKCHANGENAME_OFFSET UNITYSDK_OFFSET(0x2265110)
#define CAFEPRESETUNIT_CONFIRMRESET_OFFSET UNITYSDK_OFFSET(0x22651F0)
#define CAFEPRESETUNIT_ONCLICKSAVE_OFFSET UNITYSDK_OFFSET(0x22652A0)
#define CAFEPRESETUNIT_ONCLICKRESET_OFFSET UNITYSDK_OFFSET(0x2265510)
#define CAFEPRESETUNIT_SETNAME_OFFSET UNITYSDK_OFFSET(0x2265740)
#define CAFEPRESETUNIT__ONCLICKAPPLY_B__19_0_OFFSET UNITYSDK_OFFSET(0x2265810)
#define CAFEPRESETUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2265850)
#define CAFEPRESETUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2265860)
#define CAFEPRESETUNIT_INIT_OFFSET UNITYSDK_OFFSET(0x2264F50)
#define CAFEPRESETUNIT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2265F70)
#define CAFEPRESETUNIT_ONCLICKFURNITURELIST_OFFSET UNITYSDK_OFFSET(0x22660A0)
#define CAFEPRESETUNIT_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x22661F0)
#define CAFEPRESETUNIT__REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x2266260)
#define CAFEPRESETUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0x2265F30)
#define CAFEPRESETUNIT__ONCLICKCHANGENAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x2266280)
#define CAFEPRESETUNIT_CONFIRMSAVE_OFFSET UNITYSDK_OFFSET(0x22662B0)

	inline static constexpr unsigned int CafePresetUnit_TypeDefinitionIndex = 4592;

	class CafePresetUnit : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		MXButton* ChangeNameButton; // 0x20
		ButtonActivator* ResetButton; // 0x28
		ButtonActivator* FurnitureListButton; // 0x30
		MXButton* SavePresetButton; // 0x38
		ButtonActivator* ApplyPresetButton; // 0x40
		::System::Int32 slotId; // 0x48

		::System::Void OnClickApply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_ONCLICKAPPLY_OFFSET))(nullptr);
		}

		::System::Void OnClickChangeName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_ONCLICKCHANGENAME_OFFSET))(nullptr);
		}

		::System::Void ConfirmReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_CONFIRMRESET_OFFSET))(nullptr);
		}

		::System::Void OnClickSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_ONCLICKSAVE_OFFSET))(nullptr);
		}

		::System::Void OnClickReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_ONCLICKRESET_OFFSET))(nullptr);
		}

		::System::Void SetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_SETNAME_OFFSET))(str, nullptr);
		}

		::System::Void _OnClickApply_b__19_0(UIPopup_CafeTemplateApply* arg)
		{
			((::System::Void(*)(UIPopup_CafeTemplateApply*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT__ONCLICKAPPLY_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickFurnitureList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_ONCLICKFURNITURELIST_OFFSET))(nullptr);
		}

		::System::Void SetButtons(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_SETBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Refresh_b__9_0(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT__REFRESH_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickChangeName_b__13_0(UIPopup_CafePresetNameEdit* arg)
		{
			((::System::Void(*)(UIPopup_CafePresetNameEdit*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT__ONCLICKCHANGENAME_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void ConfirmSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRESETUNIT_CONFIRMSAVE_OFFSET))(nullptr);
		}

	};

