#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::NetworkProtocol { class FieldSceneChangedRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEC1AD0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC1CB0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC1CC0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xEC1CD0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xEC1CE0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xEC1CF0)
#define MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEC1D80)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldSceneChangedNetworkTask_TypeDefinitionIndex = 10847;

	class FieldSceneChangedNetworkTask : public Il2CppObject
	{
	public:
		::MXField::Shared::NetworkProtocol::FieldSceneChangedRequest* _Request_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MXField::Shared::NetworkProtocol::FieldSceneChangedRequest* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldSceneChangedRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldSceneChangedRequest* get_Request()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldSceneChangedRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSCENECHANGEDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

	};
}

