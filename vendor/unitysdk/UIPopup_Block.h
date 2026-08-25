#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_BLOCK_AWAKE_OFFSET UNITYSDK_OFFSET(0x257A8D0)
#define UIPOPUP_BLOCK_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x257AA00)
#define UIPOPUP_BLOCK_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x257AB00)
#define UIPOPUP_BLOCK_SETDATA_OFFSET UNITYSDK_OFFSET(0x257AB10)
#define UIPOPUP_BLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x257AB40)
#define UIPOPUP_BLOCK_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x257AB50)

	inline static constexpr unsigned int UIPopup_Block_TypeDefinitionIndex = 6184;

	class UIPopup_Block : public Il2CppObject
	{
	public:
		UILabel* userNameLabel; // 0xD8
		MXButton* confirmButton; // 0xE0
		::System::Int64 _AccountId_k__BackingField; // 0xE8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_SETDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BLOCK_GET_ACCOUNTID_OFFSET))(nullptr);
		}

	};

