#pragma once
#include "unitysdk.h"

class UIInput;
class ButtonActivator;
class MXButton;
namespace FlatData { class CafePresetType; }
namespace MX::GameLogic::DBModel { class CafePresetDB; }

#define UIPOPUP_CAFEPRESETNAMEEDIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x226A4E0)
#define UIPOPUP_CAFEPRESETNAMEEDIT__GETPRESETDB_B__11_1_OFFSET UNITYSDK_OFFSET(0x226A840)
#define UIPOPUP_CAFEPRESETNAMEEDIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x226A860)
#define UIPOPUP_CAFEPRESETNAMEEDIT_ONINPUTCHANGE_OFFSET UNITYSDK_OFFSET(0x226A8C0)
#define UIPOPUP_CAFEPRESETNAMEEDIT__GETPRESETDB_B__11_0_OFFSET UNITYSDK_OFFSET(0x226AA40)
#define UIPOPUP_CAFEPRESETNAMEEDIT_GETPRESETDB_OFFSET UNITYSDK_OFFSET(0x226A650)
#define UIPOPUP_CAFEPRESETNAMEEDIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x226AA60)
#define UIPOPUP_CAFEPRESETNAMEEDIT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x226AD50)
#define UIPOPUP_CAFEPRESETNAMEEDIT_CHECKOK_OFFSET UNITYSDK_OFFSET(0x226AE50)

	inline static constexpr unsigned int UIPopup_CafePresetNameEdit_TypeDefinitionIndex = 4610;

	class UIPopup_CafePresetNameEdit : public Il2CppObject
	{
	public:
		UIInput* presetNameInput; // 0xD8
		ButtonActivator* confirmButton; // 0xE0
		MXButton* cancelButton; // 0xE8
		::FlatData::CafePresetType* presetType; // 0xF0
		::System::Int32 slotId; // 0xF4
		::System::String* defaultName; // 0xF8

		::System::Void SetData(::FlatData::CafePresetType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _GetPresetDB_b__11_1(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT__GETPRESETDB_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnInputChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_ONINPUTCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean _GetPresetDB_b__11_0(::MX::GameLogic::DBModel::CafePresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafePresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT__GETPRESETDB_B__11_0_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafePresetDB* GetPresetDB()
		{
			return ((::MX::GameLogic::DBModel::CafePresetDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_GETPRESETDB_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Boolean CheckOk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFEPRESETNAMEEDIT_CHECKOK_OFFSET))(nullptr);
		}

	};

