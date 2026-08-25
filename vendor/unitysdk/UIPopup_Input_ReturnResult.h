#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;

#define UIPOPUP_INPUT_RETURNRESULT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2784C80)
#define UIPOPUP_INPUT_RETURNRESULT_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2784CF0)
#define UIPOPUP_INPUT_RETURNRESULT_SETPREVINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x2784F70)
#define UIPOPUP_INPUT_RETURNRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2785010)
#define UIPOPUP_INPUT_RETURNRESULT_ONCHANGEINPUT_OFFSET UNITYSDK_OFFSET(0x2785080)
#define UIPOPUP_INPUT_RETURNRESULT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2785150)
#define UIPOPUP_INPUT_RETURNRESULT_SETINPUTLIMIT_OFFSET UNITYSDK_OFFSET(0x27852D0)
#define UIPOPUP_INPUT_RETURNRESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27852F0)
#define UIPOPUP_INPUT_RETURNRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27854A0)

	inline static constexpr unsigned int UIPopup_Input_ReturnResult_TypeDefinitionIndex = 7392;

	class UIPopup_Input_ReturnResult : public Il2CppObject
	{
	public:
		UIInput* input; // 0x18
		MXButton* confirmButton; // 0x20
		UILabel* inputLabel; // 0x28
		UILabel* input_Info; // 0x30
		Il2CppObject* returnResultCallback; // 0x38
		::System::String* wrongFormMessageKey; // 0x40
		::System::Int32 inputLengthLimit; // 0x48
		::System::String* prevInputText; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetPrevInputText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_SETPREVINPUTTEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnChangeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_ONCHANGEINPUT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetInputLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_SETINPUTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Int32 arg2, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_INITIALIZE_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_RETURNRESULT_AWAKE_OFFSET))(nullptr);
		}

	};

