#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class ButtonActivator;
namespace MX::NetworkProtocol { class CafeUpdateCopyPresetFurnitureResponse; }
namespace MX::GameLogic::DBModel { class CafePresetDB; }
class UIPopup_CafePresetNameEdit;
class UIPopup_CafeTemplateApply;

#define CAFECOPYPRESETUNIT_SETNAME_OFFSET UNITYSDK_OFFSET(0x2262E60)
#define CAFECOPYPRESETUNIT__AWAKE_G__ADDDRAGSCROLLVIEWS|7_0_OFFSET UNITYSDK_OFFSET(0x2262EF0)
#define CAFECOPYPRESETUNIT_ONCLICKAPPLY_OFFSET UNITYSDK_OFFSET(0x2263050)
#define CAFECOPYPRESETUNIT_ONCLICKRESET_OFFSET UNITYSDK_OFFSET(0x22631D0)
#define CAFECOPYPRESETUNIT__CONFIRMSAVE_B__19_0_OFFSET UNITYSDK_OFFSET(0x22633F0)
#define CAFECOPYPRESETUNIT_INIT_OFFSET UNITYSDK_OFFSET(0x2262E10)
#define CAFECOPYPRESETUNIT__ONCLICKCHANGENAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x2263570)
#define CAFECOPYPRESETUNIT_CONFIRMSAVE_OFFSET UNITYSDK_OFFSET(0x22635A0)
#define CAFECOPYPRESETUNIT_REFRESH_OFFSET UNITYSDK_OFFSET(0x22637A0)
#define CAFECOPYPRESETUNIT_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0x22638D0)
#define CAFECOPYPRESETUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x22639A0)
#define CAFECOPYPRESETUNIT__ONCLICKAPPLY_B__17_0_OFFSET UNITYSDK_OFFSET(0x2263EE0)
#define CAFECOPYPRESETUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2263F20)
#define CAFECOPYPRESETUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0x2263530)
#define CAFECOPYPRESETUNIT_ONCLICKCHANGENAME_OFFSET UNITYSDK_OFFSET(0x2263F30)
#define CAFECOPYPRESETUNIT_ONCLICKSAVE_OFFSET UNITYSDK_OFFSET(0x2264010)
#define CAFECOPYPRESETUNIT_ONCLICKFURNITURELIST_OFFSET UNITYSDK_OFFSET(0x2264280)
#define CAFECOPYPRESETUNIT_CONFIRMRESET_OFFSET UNITYSDK_OFFSET(0x22643D0)
#define CAFECOPYPRESETUNIT__REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x2264480)

	inline static constexpr unsigned int CafeCopyPresetUnit_TypeDefinitionIndex = 4586;

	class CafeCopyPresetUnit : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		MXButton* ChangeNameButton; // 0x20
		ButtonActivator* ResetButton; // 0x28
		ButtonActivator* FurnitureListButton; // 0x30
		ButtonActivator* ApplyPresetButton; // 0x38
		MXButton* SavePresetButton; // 0x40
		::System::Int32 slotId; // 0x48

		::System::Void SetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_SETNAME_OFFSET))(str, nullptr);
		}

		::System::Void _Awake_g__AddDragScrollViews|7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT__AWAKE_G__ADDDRAGSCROLLVIEWS|7_0_OFFSET))(nullptr);
		}

		::System::Void OnClickApply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_ONCLICKAPPLY_OFFSET))(nullptr);
		}

		::System::Void OnClickReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_ONCLICKRESET_OFFSET))(nullptr);
		}

		::System::Void _ConfirmSave_b__19_0(::MX::NetworkProtocol::CafeUpdateCopyPresetFurnitureResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CafeUpdateCopyPresetFurnitureResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT__CONFIRMSAVE_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickChangeName_b__13_0(UIPopup_CafePresetNameEdit* arg)
		{
			((::System::Void(*)(UIPopup_CafePresetNameEdit*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT__ONCLICKCHANGENAME_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void ConfirmSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_CONFIRMSAVE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetButtons(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_SETBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickApply_b__17_0(UIPopup_CafeTemplateApply* arg)
		{
			((::System::Void(*)(UIPopup_CafeTemplateApply*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT__ONCLICKAPPLY_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChangeName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_ONCLICKCHANGENAME_OFFSET))(nullptr);
		}

		::System::Void OnClickSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_ONCLICKSAVE_OFFSET))(nullptr);
		}

		::System::Void OnClickFurnitureList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_ONCLICKFURNITURELIST_OFFSET))(nullptr);
		}

		::System::Void ConfirmReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT_CONFIRMRESET_OFFSET))(nullptr);
		}

		::System::Boolean _Refresh_b__9_0(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECOPYPRESETUNIT__REFRESH_B__9_0_OFFSET))(arg, nullptr);
		}

	};

