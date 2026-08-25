#pragma once
#include "unitysdk.h"

class UIGrid;
class MXButton;
class UILabel;
class UITable;

#define UIPOPUP_ASSISTNOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x253FD00)
#define UIPOPUP_ASSISTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x254F8F0)
#define UIPOPUP_ASSISTNOTICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x254F900)
#define UIPOPUP_ASSISTNOTICE_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x254FCE0)
#define UIPOPUP_ASSISTNOTICE_ONBACK_OFFSET UNITYSDK_OFFSET(0x254FF20)
#define UIPOPUP_ASSISTNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x254FF50)

	inline static constexpr unsigned int UIPopup_AssistNotice_TypeDefinitionIndex = 6094;

	class UIPopup_AssistNotice : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* characterCards; // 0xD8
		UIGrid* grid; // 0xE0
		MXButton* okButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		UILabel* assistRentalFeeAmount; // 0xF8
		UITable* table; // 0x100
		::Il2CppArray<::System::Object*>* noneZeroCostObjects; // 0x108
		::Il2CppArray<::System::Object*>* zeroCostObjects; // 0x110
		::Il2CppArray<::System::Object*>* strangerObjects; // 0x118
		::System::Action* onConfirm; // 0x120
		::System::Int64 costGold; // 0x128
		Il2CppObject* localizedLabels; // 0x130

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

