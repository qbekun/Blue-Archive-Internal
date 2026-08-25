#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::NetworkProtocol { class FieldSyncRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEC2290)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xEC25E0)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC25F0)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC2600)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xEC2610)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC26A0)
#define MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xEC26B0)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldSyncNetworkTask_TypeDefinitionIndex = 10853;

	class FieldSyncNetworkTask : public Il2CppObject
	{
	public:
		::MXField::Shared::NetworkProtocol::FieldSyncRequest* _Request_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MXField::Shared::NetworkProtocol::FieldSyncRequest* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldSyncRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldSyncRequest* get_Request()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldSyncRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};
}

