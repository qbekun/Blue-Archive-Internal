#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANKICKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F27980)
#define CLANKICKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F27990)
#define CLANKICKNETWORKTASK_SET_CLANKICKMEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F27A20)
#define CLANKICKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F27A30)
#define CLANKICKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F27B30)
#define CLANKICKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F27B40)
#define CLANKICKNETWORKTASK_GET_CLANKICKMEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F27B50)

	inline static constexpr unsigned int ClanKickNetworkTask_TypeDefinitionIndex = 2182;

	class ClanKickNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanKickMemberAccountId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ClanKickMemberAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_SET_CLANKICKMEMBERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanKickMemberAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANKICKNETWORKTASK_GET_CLANKICKMEMBERACCOUNTID_OFFSET))(nullptr);
		}

	};

