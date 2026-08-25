#pragma once
#include "unitysdk.h"

class UIAdmissionDisplay;
class MXButton;
class UILabel;

#define UIPOPUP_TIMEATTACKCREATECHECK_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB5CFD0)
#define UIPOPUP_TIMEATTACKCREATECHECK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xB5CFE0)
#define UIPOPUP_TIMEATTACKCREATECHECK_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xB5CFF0)
#define UIPOPUP_TIMEATTACKCREATECHECK_SETDATA_OFFSET UNITYSDK_OFFSET(0xB5D0E0)
#define UIPOPUP_TIMEATTACKCREATECHECK_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB5D350)
#define UIPOPUP_TIMEATTACKCREATECHECK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xB5D360)
#define UIPOPUP_TIMEATTACKCREATECHECK_AWAKE_OFFSET UNITYSDK_OFFSET(0xB5D370)
#define UIPOPUP_TIMEATTACKCREATECHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4A0)

	inline static constexpr unsigned int UIPopup_TimeAttackCreateCheck_TypeDefinitionIndex = 8412;

	class UIPopup_TimeAttackCreateCheck : public Il2CppObject
	{
	public:
		UIAdmissionDisplay* admissionDisplay; // 0xD8
		MXButton* confirmButton; // 0xE0
		UILabel* dungeonLabel; // 0xE8
		UILabel* messageLabel; // 0xF0
		::System::Int64 _DungeonId_k__BackingField; // 0xF8
		::System::Boolean _IsPractice_k__BackingField; // 0x100

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKCREATECHECK_.CTOR_OFFSET))(nullptr);
		}

	};

