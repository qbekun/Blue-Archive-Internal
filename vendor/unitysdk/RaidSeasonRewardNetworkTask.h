#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidSeasonRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDSEASONREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F921C0)
#define RAIDSEASONREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F921D0)
#define RAIDSEASONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F921E0)
#define RAIDSEASONREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F921F0)
#define RAIDSEASONREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F92200)
#define RAIDSEASONREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F92290)
#define RAIDSEASONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F922A0)

	inline static constexpr unsigned int RaidSeasonRewardNetworkTask_TypeDefinitionIndex = 2726;

	class RaidSeasonRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidSeasonRewardRequest* _Request_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidSeasonRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidSeasonRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidSeasonRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidSeasonRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

