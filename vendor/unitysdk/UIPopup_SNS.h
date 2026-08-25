#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
class FeedScrollManager;
class UIWidget;
namespace MX::Data::Excel { class SNSInfoExcel; }
namespace Cysharp::Threading::Tasks { class UniTask; }
class FeedItemData;

#define UIPOPUP_SNS_GET_FEEDSCROLLMANAGER_OFFSET UNITYSDK_OFFSET(0xADBC80)
#define UIPOPUP_SNS_ONOPENED_OFFSET UNITYSDK_OFFSET(0xADBC90)
#define UIPOPUP_SNS_SET_ISPOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0xADCF00)
#define UIPOPUP_SNS_ONBACK_FIELD_OFFSET UNITYSDK_OFFSET(0xADCF10)
#define UIPOPUP_SNS_ONBACK_OFFSET UNITYSDK_OFFSET(0xADD070)
#define UIPOPUP_SNS_GET_INSTANCEOPERATINGOBJECT_OFFSET UNITYSDK_OFFSET(0xADD0B0)
#define UIPOPUP_SNS_GET_SNSINFOID_OFFSET UNITYSDK_OFFSET(0xADD0C0)
#define UIPOPUP_SNS_SET_OPENEDDATETIME_OFFSET UNITYSDK_OFFSET(0xADD100)
#define UIPOPUP_SNS_GETCURRENTSNSINFOWITHOPENSTATE_OFFSET UNITYSDK_OFFSET(0xADD110)
#define UIPOPUP_SNS_ONOPENED_FIELD_OFFSET UNITYSDK_OFFSET(0xADBD40)
#define UIPOPUP_SNS_.CTOR_OFFSET UNITYSDK_OFFSET(0xADE2A0)
#define UIPOPUP_SNS_SETFIELDMODE_OFFSET UNITYSDK_OFFSET(0xADE340)
#define UIPOPUP_SNS_GET_ISPOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0xADE380)
#define UIPOPUP_SNS_UIOPENANIMATIONPLAYEDEVENT_OFFSET UNITYSDK_OFFSET(0xADE390)
#define UIPOPUP_SNS_REORDERELEMENTS_OFFSET UNITYSDK_OFFSET(0xADE3A0)
#define UIPOPUP_SNS_PLAYPOSTDIRECTING_OFFSET UNITYSDK_OFFSET(0xADF670)
#define UIPOPUP_SNS_WAITOPENANIEVENT_OFFSET UNITYSDK_OFFSET(0xADE120)
#define UIPOPUP_SNS_GET_INSTANCENOTOPERATINGOBJECT_OFFSET UNITYSDK_OFFSET(0xADF820)
#define UIPOPUP_SNS_MOVESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xADF830)
#define UIPOPUP_SNS_SETUI_OFFSET UNITYSDK_OFFSET(0xADBE60)
#define UIPOPUP_SNS_AWAKE_OFFSET UNITYSDK_OFFSET(0xADFA30)
#define UIPOPUP_SNS_SETSNSINFO_OFFSET UNITYSDK_OFFSET(0xADD6A0)
#define UIPOPUP_SNS_PREPARESNSPOSTS_OFFSET UNITYSDK_OFFSET(0xADD8E0)
#define UIPOPUP_SNS_PLAYSNSDIRECTINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0xAE0750)
#define UIPOPUP_SNS_GET_INSTANCEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xAE08D0)
#define UIPOPUP_SNS_GET_INSTANCETITLE_OFFSET UNITYSDK_OFFSET(0xAE08E0)
#define UIPOPUP_SNS_GET_OPENEDDATETIME_OFFSET UNITYSDK_OFFSET(0xAE08F0)
#define UIPOPUP_SNS_REORDERELEMENTSONFIELD_OFFSET UNITYSDK_OFFSET(0xADFB60)
#define UIPOPUP_SNS_ISINFIELD_OFFSET UNITYSDK_OFFSET(0xAE0BB0)
#define UIPOPUP_SNS_SETDATA_OFFSET UNITYSDK_OFFSET(0xAE0BC0)

	inline static constexpr unsigned int UIPopup_SNS_TypeDefinitionIndex = 8088;

	class UIPopup_SNS : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _playGuideButtonObject; // 0xD8
		::System::Single _moveScrollDuration; // 0xE0
		::System::Single _moveScrollExtendDuration; // 0xE4
		::System::Single _replyAniTerm; // 0xE8
		::System::Boolean _fieldMode; // 0xEC
		::System::Int64 _interactionGroupId; // 0xF0
		::System::Action* _endCallback; // 0xF8
		::System::Int32 _firstSequenceIndex; // 0x100
		Il2CppObject* _replyPostCache; // 0x108
		MXButton* closeButton; // 0x110
		::UnityEngine::GameObject* instanceOperatingObject; // 0x118
		::UnityEngine::GameObject* instanceNotOperatingObject; // 0x120
		UILabel* instanceTitle; // 0x128
		UILabel* instanceDescription; // 0x130
		FeedScrollManager* feedScrollManager; // 0x138
		UIWidget* recentMarker; // 0x140
		::MX::Data::Excel::SNSInfoExcel* _snsInfo; // 0x148
		::System::Boolean _IsPostVisible_k__BackingField; // 0x158
		Il2CppObject* _postDBs; // 0x160
		::System::Action* _refreshButtonObjectAction; // 0x168
		::System::DateTime* _OpenedDateTime_k__BackingField; // 0x170
		Il2CppObject* _postDataCache; // 0x178

		FeedScrollManager* get_FeedScrollManager()
		{
			return ((FeedScrollManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_FEEDSCROLLMANAGER_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPostVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SET_ISPOSTVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack_Field()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_ONBACK_FIELD_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_ONBACK_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_InstanceOperatingObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_INSTANCEOPERATINGOBJECT_OFFSET))(nullptr);
		}

		::System::Int64 get_SnsInfoId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_SNSINFOID_OFFSET))(nullptr);
		}

		::System::Void set_OpenedDateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SET_OPENEDDATETIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCurrentSNSInfoWithOpenState()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GETCURRENTSNSINFOWITHOPENSTATE_OFFSET))(nullptr);
		}

		::System::Void OnOpened_Field(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_ONOPENED_FIELD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetFieldMode(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SETFIELDMODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsPostVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_ISPOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Void UIOpenAnimationPlayedEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_UIOPENANIMATIONPLAYEDEVENT_OFFSET))(nullptr);
		}

		Il2CppObject* ReorderElements(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_REORDERELEMENTS_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayPostDirecting(FeedItemData* arg, ::System::Boolean arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(FeedItemData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_PLAYPOSTDIRECTING_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitOpenAniEvent()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_WAITOPENANIEVENT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_InstanceNotOperatingObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_INSTANCENOTOPERATINGOBJECT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* MoveScrollView(::System::Single arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Single, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_MOVESCROLLVIEW_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SETUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSNSInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SETSNSINFO_OFFSET))(nullptr);
		}

		::System::Void PrepareSNSPosts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_PREPARESNSPOSTS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlaySNSDirectingSequence()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_PLAYSNSDIRECTINGSEQUENCE_OFFSET))(nullptr);
		}

		UILabel* get_InstanceDescription()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_INSTANCEDESCRIPTION_OFFSET))(nullptr);
		}

		UILabel* get_InstanceTitle()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_INSTANCETITLE_OFFSET))(nullptr);
		}

		::System::DateTime* get_OpenedDateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_GET_OPENEDDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* ReorderElementsOnField(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_REORDERELEMENTSONFIELD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_ISINFIELD_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SNS_SETDATA_OFFSET))(arg, nullptr);
		}

	};

