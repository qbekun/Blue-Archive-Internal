#pragma once
#include "unitysdk.h"

class UIAcademyMessangerStudentPopulator;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIAcademyMessangerMessageUnit;
namespace MX::Data { class AcademyMessageData; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }

#define UIACADEMYMESSANGERMESSAGELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A47A0)
#define UIACADEMYMESSANGERMESSAGELIST_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x21A4820)
#define UIACADEMYMESSANGERMESSAGELIST_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x21A48C0)
#define UIACADEMYMESSANGERMESSAGELIST_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x21A4C00)
#define UIACADEMYMESSANGERMESSAGELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21A4FE0)
#define UIACADEMYMESSANGERMESSAGELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x21A51A0)
#define UIACADEMYMESSANGERMESSAGELIST_UPDATETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x21A4940)
#define UIACADEMYMESSANGERMESSAGELIST_ONFEEDBACKMESSAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x21A5400)
#define UIACADEMYMESSANGERMESSAGELIST_REFRESH_OFFSET UNITYSDK_OFFSET(0x21A5100)
#define UIACADEMYMESSANGERMESSAGELIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21A5580)
#define UIACADEMYMESSANGERMESSAGELIST_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x21A5780)
#define UIACADEMYMESSANGERMESSAGELIST_HIDEFAVORSCHEDULEBUTTON_OFFSET UNITYSDK_OFFSET(0x21A5790)
#define UIACADEMYMESSANGERMESSAGELIST_INITTABLEVIEW_OFFSET UNITYSDK_OFFSET(0x21A5860)
#define UIACADEMYMESSANGERMESSAGELIST_YIELDREFRESH_OFFSET UNITYSDK_OFFSET(0x21A5510)
#define UIACADEMYMESSANGERMESSAGELIST_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x21A5A60)
#define UIACADEMYMESSANGERMESSAGELIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x21A5C40)
#define UIACADEMYMESSANGERMESSAGELIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21A5C80)
#define UIACADEMYMESSANGERMESSAGELIST_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21A5E00)
#define UIACADEMYMESSANGERMESSAGELIST_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x21A5E60)
#define UIACADEMYMESSANGERMESSAGELIST_GETHEIGHTFORINIT_OFFSET UNITYSDK_OFFSET(0x21A5EC0)
#define UIACADEMYMESSANGERMESSAGELIST_INITTABLEJUMP_OFFSET UNITYSDK_OFFSET(0x21A6050)
#define UIACADEMYMESSANGERMESSAGELIST_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x21A6300)

	inline static constexpr unsigned int UIAcademyMessangerMessageList_TypeDefinitionIndex = 4163;

	class UIAcademyMessangerMessageList : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::GeneratorUtilities
	{
	public:
		UIAcademyMessangerStudentPopulator* StudentPopulator; // 0x58
		::System::Int64 serverId; // 0x60
		::System::Int32 unreadMessageIndex; // 0x68
		::UnityEngine::Coroutine* refreshCoroutine; // 0x70
		::UnityEngine::WaitForEndOfFrame* waitForEndOfFrame; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMomotalkReadSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareListItemWithIndex(UIAcademyMessangerMessageUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIAcademyMessangerMessageUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UpdateTotalCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_UPDATETOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnFeedbackMessageUpdated(::MX::Data::AcademyMessageData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_ONFEEDBACKMESSAGEUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void HideFavorScheduleButton(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_HIDEFAVORSCHEDULEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void InitTableView(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_INITTABLEVIEW_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldRefresh()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_YIELDREFRESH_OFFSET))(nullptr);
		}

		::System::Void SetItemData(UIAcademyMessangerMessageUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIAcademyMessangerMessageUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit(UIAcademyMessangerMessageUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Single(*)(UIAcademyMessangerMessageUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_GETHEIGHTFORINIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitTableJump(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_INITTABLEJUMP_OFFSET))(arg, nullptr);
		}

		::System::Void InitListItemWithIndex(UIAcademyMessangerMessageUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIAcademyMessangerMessageUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGELIST_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

