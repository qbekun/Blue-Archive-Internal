#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaDamageReportDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIARENAHISTORYCONTROLLER_SET_CANREQUEST_OFFSET UNITYSDK_OFFSET(0x21F43B0)
#define UIARENAHISTORYCONTROLLER_COREQUESTHISTORYLIST_OFFSET UNITYSDK_OFFSET(0x21F43C0)
#define UIARENAHISTORYCONTROLLER_GET_CANREQUEST_OFFSET UNITYSDK_OFFSET(0x21F4450)
#define UIARENAHISTORYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F4460)
#define UIARENAHISTORYCONTROLLER__HANDLEARENAHISTORYRESPONSEMESSAGE_G__CHECKCANREQUEST|7_0_OFFSET UNITYSDK_OFFSET(0x21F44B0)
#define UIARENAHISTORYCONTROLLER_HANDLEARENAHISTORYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21F4620)
#define UIARENAHISTORYCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F4720)
#define UIARENAHISTORYCONTROLLER_REQUESTADDITIONALHISTORY_OFFSET UNITYSDK_OFFSET(0x21F47C0)

	inline static constexpr unsigned int UIArenaHistoryController_TypeDefinitionIndex = 4260;

	class UIArenaHistoryController : public Item
	{
	public:
		::System::Boolean _CanRequest_k__BackingField; // 0x90

		::System::Void set_CanRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_SET_CANREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRequestHistoryList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_COREQUESTHISTORYLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_GET_CANREQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HandleArenaHistoryResponseMessage_g__CheckCanRequest|7_0(::MX::GameLogic::DBModel::ArenaDamageReportDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ArenaDamageReportDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER__HANDLEARENAHISTORYRESPONSEMESSAGE_G__CHECKCANREQUEST|7_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleArenaHistoryResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_HANDLEARENAHISTORYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RequestAdditionalHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAHISTORYCONTROLLER_REQUESTADDITIONALHISTORY_OFFSET))(nullptr);
		}

	};

