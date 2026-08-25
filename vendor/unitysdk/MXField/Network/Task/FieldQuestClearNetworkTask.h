#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::NetworkProtocol { class FieldQuestClearRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC14E0)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xEC14F0)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC1580)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xEC1590)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEC15A0)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC1850)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xEC1860)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldQuestClearNetworkTask_TypeDefinitionIndex = 10844;

	class FieldQuestClearNetworkTask : public Il2CppObject
	{
	public:
		::MXField::Shared::NetworkProtocol::FieldQuestClearRequest* _Request_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MXField::Shared::NetworkProtocol::FieldQuestClearRequest* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldQuestClearRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldQuestClearRequest* get_Request()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldQuestClearRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};
}

