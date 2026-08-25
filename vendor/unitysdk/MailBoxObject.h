#pragma once
#include "unitysdk.h"

class MailBoxCategory;
class SortingRule;
namespace FlatData { class MailSortingRule; }
namespace UnityEngine { class MonoBehaviour; }
namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }
namespace MX::NetworkProtocol { class MailCheckResponse; }

#define MAILBOXOBJECT_GET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1E54690)
#define MAILBOXOBJECT_SET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1E546E0)
#define MAILBOXOBJECT_GET_CURRENTMAILSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1E54730)
#define MAILBOXOBJECT_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x1E547A0)
#define MAILBOXOBJECT_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0x1E547F0)
#define MAILBOXOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E54840)
#define MAILBOXOBJECT_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E54850)
#define MAILBOXOBJECT_GET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1E54860)
#define MAILBOXOBJECT_SET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1E54870)
#define MAILBOXOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E54880)
#define MAILBOXOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E54890)
#define MAILBOXOBJECT_INITIALIZELASTPIVOTTIME_OFFSET UNITYSDK_OFFSET(0x1E54A50)
#define MAILBOXOBJECT_ENTERSORTPOPUP_OFFSET UNITYSDK_OFFSET(0x1E54B30)
#define MAILBOXOBJECT_TOGGLESORTORDER_OFFSET UNITYSDK_OFFSET(0x1E54C70)
#define MAILBOXOBJECT_GETMAILS_OFFSET UNITYSDK_OFFSET(0x1E54DC0)
#define MAILBOXOBJECT_GETMAILS_OFFSET UNITYSDK_OFFSET(0x1E54DD0)
#define MAILBOXOBJECT_REQUESTMAILLIST_OFFSET UNITYSDK_OFFSET(0x1E54D10)
#define MAILBOXOBJECT_CREATEREQUESTMAILLISTSEMIPERMANENTTASK_OFFSET UNITYSDK_OFFSET(0x1E55130)
#define MAILBOXOBJECT_CREATEREQUESTMAILLISTTASK_OFFSET UNITYSDK_OFFSET(0x1E55240)
#define MAILBOXOBJECT_CHECKMAIL_OFFSET UNITYSDK_OFFSET(0x1E55390)
#define MAILBOXOBJECT_CHECKMAILCOUNTCOMESTOSOFTCAP_OFFSET UNITYSDK_OFFSET(0x1E55520)
#define MAILBOXOBJECT_HANDLEMAILCHECKRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E556D0)
#define MAILBOXOBJECT_HANDLEMAILLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E55740)
#define MAILBOXOBJECT_HANDLEMAILREWARDRESPONSE_OFFSET UNITYSDK_OFFSET(0x1E56120)
#define MAILBOXOBJECT_RECEIVEALL_OFFSET UNITYSDK_OFFSET(0x1E565E0)
#define MAILBOXOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E56BB0)

	inline static constexpr unsigned int MailBoxObject_TypeDefinitionIndex = 1716;

	class MailBoxObject : public Il2CppObject
	{
	public:
		Il2CppObject* sortingList; // 0x10
		Il2CppObject* currentSortingRuleDict; // 0x18
		Il2CppObject* isDescendingDict; // 0x20
		::System::Int64 _Count_k__BackingField; // 0x28
		Il2CppObject* mailListDict; // 0x30
		::System::DateTime* lastPivotTime; // 0x38
		MailBoxCategory* _CurrentCategory_k__BackingField; // 0x40

		SortingRule* get_CurrentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GET_CURRENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_SET_CURRENTSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::FlatData::MailSortingRule* get_CurrentMailSortingRule()
		{
			return ((::FlatData::MailSortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GET_CURRENTMAILSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDescending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GET_ISDESCENDING_OFFSET))(nullptr);
		}

		::System::Void set_IsDescending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_SET_ISDESCENDING_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_SET_COUNT_OFFSET))(arg, nullptr);
		}

		MailBoxCategory* get_CurrentCategory()
		{
			return ((MailBoxCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GET_CURRENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCategory(MailBoxCategory* arg)
		{
			((::System::Void(*)(MailBoxCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_SET_CURRENTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(MailBoxCategory* arg)
		{
			((::System::Void(*)(MailBoxCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeLastPivotTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_INITIALIZELASTPIVOTTIME_OFFSET))(nullptr);
		}

		::System::Void EnterSortPopup(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_ENTERSORTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleSortOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_TOGGLESORTORDER_OFFSET))(nullptr);
		}

		Il2CppObject* GetMails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GETMAILS_OFFSET))(nullptr);
		}

		Il2CppObject* GetMails(MailBoxCategory* arg)
		{
			return ((Il2CppObject*(*)(MailBoxCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_GETMAILS_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMailList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_REQUESTMAILLIST_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionTask* CreateRequestMailListSemiPermanentTask(::System::Boolean arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_CREATEREQUESTMAILLISTSEMIPERMANENTTASK_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionTask* CreateRequestMailListTask(::System::Boolean arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_CREATEREQUESTMAILLISTTASK_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMail(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_CHECKMAIL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMailCountComesToSoftcap(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_CHECKMAILCOUNTCOMESTOSOFTCAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HandleMailCheckResponse(::MX::NetworkProtocol::MailCheckResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailCheckResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_HANDLEMAILCHECKRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleMailListResponse(Il2CppObject* arg, MailBoxCategory* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(Il2CppObject*, MailBoxCategory*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_HANDLEMAILLISTRESPONSE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void HandleMailRewardResponse(Il2CppObject* arg, MailBoxCategory* arg2)
		{
			((::System::Void(*)(Il2CppObject*, MailBoxCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_HANDLEMAILREWARDRESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_RECEIVEALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

