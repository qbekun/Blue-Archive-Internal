#pragma once
#include "unitysdk.h"

class MXButton;
class UIEchelonInfo;
class UIFormationInfo;

#define UIFORMATIONLEADERPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2542C60)
#define UIFORMATIONLEADERPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2542C80)
#define UIFORMATIONLEADERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2542D00)
#define UIFORMATIONLEADERPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2542D10)
#define UIFORMATIONLEADERPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2542D60)
#define UIFORMATIONLEADERPOPUP_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x2543000)
#define UIFORMATIONLEADERPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0x25430D0)
#define UIFORMATIONLEADERPOPUP_SELECTLEADER_OFFSET UNITYSDK_OFFSET(0x2543080)

	inline static constexpr unsigned int UIFormationLeaderPopup_TypeDefinitionIndex = 6066;

	class UIFormationLeaderPopup : public Il2CppObject
	{
	public:
		MXButton* OkButton; // 0x18
		MXButton* CancelButton; // 0x20
		::Il2CppArray<::System::Object*>* UIFormationInfos; // 0x28
		UIEchelonInfo* uiEchelonInfo; // 0x30
		::System::Int64 curSelectServerId; // 0x38
		::System::Action* closeCallback; // 0x40

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIEchelonInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(UIEchelonInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCard(UIFormationInfo* arg)
		{
			((::System::Void(*)(UIFormationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_ONCLICKCARD_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPopup(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_OPENPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SelectLeader(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLEADERPOPUP_SELECTLEADER_OFFSET))(arg, nullptr);
		}

	};

