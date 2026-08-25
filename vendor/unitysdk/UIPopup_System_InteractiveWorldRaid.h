#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class OkCancelTypeMember;
class UIToggle;
class EventDelegate;

#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_AWAKE_OFFSET UNITYSDK_OFFSET(0x277CA60)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x277D060)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x277D0F0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0x277D5B0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0x277D600)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEOKCANCEL_OFFSET UNITYSDK_OFFSET(0x277D6F0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x277D960)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SETTHISOKCANCELTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x277D370)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SETXBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x277D4A0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x277DAA0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x277DBA0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCHANGNOMOREVIEWINGTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x277DCA0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SAVETOGGLEVALUEONCLOSED_OFFSET UNITYSDK_OFFSET(0x277DCE0)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ACTIVATEUIOBJECTS_OFFSET UNITYSDK_OFFSET(0x277D400)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x277DF30)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x277DF40)
#define UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID___N__0_OFFSET UNITYSDK_OFFSET(0x277DFB0)

	inline static constexpr unsigned int UIPopup_System_InteractiveWorldRaid_TypeDefinitionIndex = 7373;

	class UIPopup_System_InteractiveWorldRaid : public Il2CppObject
	{
	public:
		MXButton* XButton; // 0xD8
		MXButton* BgButton; // 0xE0
		::UnityEngine::GameObject* messageRoot; // 0xE8
		::UnityEngine::GameObject* warningRoot; // 0xF0
		::Il2CppArray<::System::Object*>* systemMessageLabels; // 0xF8
		::Il2CppArray<::System::Object*>* warningMessageLabels; // 0x100
		OkCancelTypeMember* systemTwoButtons; // 0x108
		OkCancelTypeMember* systemOneButton; // 0x110
		OkCancelTypeMember* systemWarning; // 0x118
		::UnityEngine::GameObject* toggleOnRoot; // 0x120
		::UnityEngine::GameObject* toggleOffRoot; // 0x128
		UIToggle* noMoreViewingTodayToggle; // 0x130
		::System::Action* okAction; // 0x138
		::System::Action* cancelAction; // 0x140
		::System::String* encryptedUID; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZE_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void InitializeWithKey(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEWITHKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeWithKey(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEWITHKEY_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void InitializeOkCancel(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Boolean arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEOKCANCEL_OFFSET))(str, str2, str3, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Boolean arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_INITIALIZEOKCANCELWITHKEY_OFFSET))(str, str2, str3, arg, arg2, arg3, nullptr);
		}

		::System::Void SetThisOkCancelTypeMember(OkCancelTypeMember* arg)
		{
			((::System::Void(*)(OkCancelTypeMember*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SETTHISOKCANCELTYPEMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SetXButtonEvent(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SETXBUTTONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnChangNoMoreViewingTodayToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ONCHANGNOMOREVIEWINGTODAYTOGGLE_OFFSET))(nullptr);
		}

		::System::Void SaveToggleValueOnClosed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_SAVETOGGLEVALUEONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateUiObjects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_ACTIVATEUIOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INTERACTIVEWORLDRAID___N__0_OFFSET))(nullptr);
		}

	};

