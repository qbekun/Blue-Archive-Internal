#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UITexture;
class UICafeStudentInviteList;
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class CafeSummonCharacterTicketUseResponse; }
class UICafe;

#define UICAFESTUDENTINVITEPOPUP_SET_STUDENTINVITED_OFFSET UNITYSDK_OFFSET(0x228B4E0)
#define UICAFESTUDENTINVITEPOPUP_ONSUMMONRESPONSE_OFFSET UNITYSDK_OFFSET(0x228B4F0)
#define UICAFESTUDENTINVITEPOPUP_PLAYINVITEANI_OFFSET UNITYSDK_OFFSET(0x228B5A0)
#define UICAFESTUDENTINVITEPOPUP_ONBACK_OFFSET UNITYSDK_OFFSET(0x228B630)
#define UICAFESTUDENTINVITEPOPUP__ONSELECTSTUDENT_B__13_0_OFFSET UNITYSDK_OFFSET(0x228B720)
#define UICAFESTUDENTINVITEPOPUP_GET_ISTICKETINVITE_OFFSET UNITYSDK_OFFSET(0x228B8F0)
#define UICAFESTUDENTINVITEPOPUP_ONSELECTSTUDENT_OFFSET UNITYSDK_OFFSET(0x22879F0)
#define UICAFESTUDENTINVITEPOPUP_SETTICKETINVITE_OFFSET UNITYSDK_OFFSET(0x228B900)
#define UICAFESTUDENTINVITEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x228B910)
#define UICAFESTUDENTINVITEPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x228B920)
#define UICAFESTUDENTINVITEPOPUP_SET_ISTICKETINVITE_OFFSET UNITYSDK_OFFSET(0x228BBB0)
#define UICAFESTUDENTINVITEPOPUP__ONBACK_B__16_0_OFFSET UNITYSDK_OFFSET(0x228BBC0)
#define UICAFESTUDENTINVITEPOPUP_GET_STUDENTINVITED_OFFSET UNITYSDK_OFFSET(0x228BBF0)

	inline static constexpr unsigned int UICafeStudentInvitePopup_TypeDefinitionIndex = 4690;

	class UICafeStudentInvitePopup : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* inviteAnimation; // 0xD8
		UITexture* characterThumb; // 0xE0
		UICafeStudentInviteList* studentList; // 0xE8
		::MX::NetworkProtocol::WebAPIErrorCode* receivedErrorCode; // 0xF0
		::System::Boolean _StudentInvited_k__BackingField; // 0xF4
		::System::Boolean _isTicketInvite_k__BackingField; // 0xF5

		::System::Void set_StudentInvited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_SET_STUDENTINVITED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSummonResponse(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_ONSUMMONRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayInviteAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_PLAYINVITEANI_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnSelectStudent_b__13_0(::MX::NetworkProtocol::CafeSummonCharacterTicketUseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CafeSummonCharacterTicketUseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP__ONSELECTSTUDENT_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTicketInvite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_GET_ISTICKETINVITE_OFFSET))(nullptr);
		}

		::System::Void OnSelectStudent(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_ONSELECTSTUDENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTicketInvite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_SETTICKETINVITE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void set_isTicketInvite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_SET_ISTICKETINVITE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnBack_b__16_0(UICafe* arg)
		{
			((::System::Void(*)(UICafe*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP__ONBACK_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StudentInvited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITEPOPUP_GET_STUDENTINVITED_OFFSET))(nullptr);
		}

	};

