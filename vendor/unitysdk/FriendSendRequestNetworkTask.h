#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDSENDREQUESTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7AF40)
#define FRIENDSENDREQUESTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AF50)
#define FRIENDSENDREQUESTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7AF60)
#define FRIENDSENDREQUESTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7AF70)
#define FRIENDSENDREQUESTNETWORKTASK_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7B1D0)
#define FRIENDSENDREQUESTNETWORKTASK_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1F7B1E0)
#define FRIENDSENDREQUESTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7B1F0)

	inline static constexpr unsigned int FriendSendRequestNetworkTask_TypeDefinitionIndex = 2577;

	class FriendSendRequestNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _TargetId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_TargetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSENDREQUESTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

