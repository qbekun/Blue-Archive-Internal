#pragma once
#include "unitysdk.h"

class UIIdCardBackgroundListController;
class MXButton;

#define UIPOPUP_IDCARDBACKGROUND_SETDATA_OFFSET UNITYSDK_OFFSET(0x2577D90)
#define UIPOPUP_IDCARDBACKGROUND_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2577DD0)
#define UIPOPUP_IDCARDBACKGROUND_AWAKE_OFFSET UNITYSDK_OFFSET(0x2577E20)
#define UIPOPUP_IDCARDBACKGROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x2577F50)

	inline static constexpr unsigned int UIPopup_IdCardBackground_TypeDefinitionIndex = 6177;

	class UIPopup_IdCardBackground : public Il2CppObject
	{
	public:
		UIIdCardBackgroundListController* listController; // 0xD8
		MXButton* confirmButton; // 0xE0
		Il2CppObject* action; // 0xE8

		::System::Void SetData(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDBACKGROUND_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDBACKGROUND_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDBACKGROUND_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDBACKGROUND_.CTOR_OFFSET))(nullptr);
		}

	};

