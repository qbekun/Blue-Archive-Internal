#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::NetworkProtocol { class FieldInteractionRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xEC0E10)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC0EA0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xEC0EB0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEC0EC0)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC1230)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC1240)
#define MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xEC1250)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldInteractionNetworkTask_TypeDefinitionIndex = 10841;

	class FieldInteractionNetworkTask : public Il2CppObject
	{
	public:
		::MXField::Shared::NetworkProtocol::FieldInteractionRequest* _Request_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldInteractionRequest* get_Request()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldInteractionRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_Request(::MXField::Shared::NetworkProtocol::FieldInteractionRequest* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldInteractionRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDINTERACTIONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};
}

