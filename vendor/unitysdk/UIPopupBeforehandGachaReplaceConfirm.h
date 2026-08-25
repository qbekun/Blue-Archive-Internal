#pragma once
#include "unitysdk.h"

class MXButton;

#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA6F4B0)
#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA6F4E0)
#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_SETDATA_OFFSET UNITYSDK_OFFSET(0xA6F550)
#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6FA30)
#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6FA40)
#define UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_SETITEMS_OFFSET UNITYSDK_OFFSET(0xA6F750)

	inline static constexpr unsigned int UIPopupBeforehandGachaReplaceConfirm_TypeDefinitionIndex = 7854;

	class UIPopupBeforehandGachaReplaceConfirm : public Il2CppObject
	{
	public:
		MXButton* confirmBtn; // 0x18
		MXButton* cancelBtn; // 0x20
		MXButton* closeBtn; // 0x28
		Il2CppObject* savedItems; // 0x30
		Il2CppObject* currentItems; // 0x38
		::System::Int32 slotIndex; // 0x40
		Il2CppObject* confirm; // 0x48
		::System::Action* closeCallback; // 0x50

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetItems(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPBEFOREHANDGACHAREPLACECONFIRM_SETITEMS_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

