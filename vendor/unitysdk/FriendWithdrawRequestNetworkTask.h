#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDWITHDRAWREQUESTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7BBC0)
#define FRIENDWITHDRAWREQUESTNETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7BE20)
#define FRIENDWITHDRAWREQUESTNETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7BE30)
#define FRIENDWITHDRAWREQUESTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7BE40)
#define FRIENDWITHDRAWREQUESTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7BE50)
#define FRIENDWITHDRAWREQUESTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7BEE0)
#define FRIENDWITHDRAWREQUESTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7BEF0)

	inline static constexpr unsigned int FriendWithdrawRequestNetworkTask_TypeDefinitionIndex = 2581;

	class FriendWithdrawRequestNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDWITHDRAWREQUESTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

