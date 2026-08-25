#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MissionRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MISSIONREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F85BC0)
#define MISSIONREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F85BD0)
#define MISSIONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F85BE0)
#define MISSIONREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F861C0)
#define MISSIONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F861D0)
#define MISSIONREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F861E0)
#define MISSIONREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F86250)

	inline static constexpr unsigned int MissionRewardNetworkTask_TypeDefinitionIndex = 2644;

	class MissionRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MissionRewardRequest* _Request_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::MissionRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MissionRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::NetworkProtocol::MissionRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::MissionRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

