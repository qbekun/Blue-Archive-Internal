#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::NetworkProtocol { class FieldEndDateRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC0900)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC0920)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xEC0930)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC09C0)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEC09D0)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xEC0BA0)
#define MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xEC0BB0)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldEndDateNetworkTask_TypeDefinitionIndex = 10838;

	class FieldEndDateNetworkTask : public Il2CppObject
	{
	public:
		::MXField::Shared::NetworkProtocol::FieldEndDateRequest* _Request_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldEndDateRequest* get_Request()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldEndDateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MXField::Shared::NetworkProtocol::FieldEndDateRequest* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldEndDateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};
}

