#pragma once
#include "unitysdk.h"

class UISpecialOperationCollectionObject;
class MXButton;
namespace MX::GameLogic::DBModel { class ScenarioCollectionDB; }
class UISpecialOperationCollection;

#define UIPOPUP_SPECIALOPERATIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x27745E0)
#define UIPOPUP_SPECIALOPERATIONCOLLECTION_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x27745F0)
#define UIPOPUP_SPECIALOPERATIONCOLLECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2774730)
#define UIPOPUP_SPECIALOPERATIONCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x27747D0)
#define UIPOPUP_SPECIALOPERATIONCOLLECTION_ONBACK_OFFSET UNITYSDK_OFFSET(0x2774AB0)
#define UIPOPUP_SPECIALOPERATIONCOLLECTION__ONCONFIRMBUTTONCLICKED_B__9_0_OFFSET UNITYSDK_OFFSET(0x2774B00)

	inline static constexpr unsigned int UIPopup_SpecialOperationCollection_TypeDefinitionIndex = 7354;

	class UIPopup_SpecialOperationCollection : public Il2CppObject
	{
	public:
		UISpecialOperationCollectionObject* collectionObject; // 0xD8
		MXButton* closeButton; // 0xE0
		MXButton* confirmButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		::System::Action* onConfirmButtonClicked; // 0xF8
		::System::Action* onCancelButtonClicked; // 0x100
		::System::Int64 collectionGroupId; // 0x108

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnConfirmButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION_ONCONFIRMBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ScenarioCollectionDB* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ScenarioCollectionDB*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnConfirmButtonClicked_b__9_0(UISpecialOperationCollection* arg)
		{
			((::System::Void(*)(UISpecialOperationCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SPECIALOPERATIONCOLLECTION__ONCONFIRMBUTTONCLICKED_B__9_0_OFFSET))(arg, nullptr);
		}

	};

