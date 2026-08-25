#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidSeasonRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDSEASONREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5E170)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5E180)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5E210)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F5E220)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5E230)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5E5E0)
#define ELIMINATERAIDSEASONREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E5F0)

	inline static constexpr unsigned int EliminateRaidSeasonRewardNetworkTask_TypeDefinitionIndex = 2379;

	class EliminateRaidSeasonRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidSeasonRewardRequest* _Request_k__BackingField; // 0x40

		::System::Void set_Request(::MX::NetworkProtocol::EliminateRaidSeasonRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidSeasonRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidSeasonRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::EliminateRaidSeasonRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

