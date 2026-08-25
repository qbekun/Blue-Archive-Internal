#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_NETWORK_TASK_FIELDSESSIONTASK_HANDLEWEBAPIERROR_OFFSET UNITYSDK_OFFSET(0xEC1FF0)
#define MXFIELD_NETWORK_TASK_FIELDSESSIONTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC0910)
#define MXFIELD_NETWORK_TASK_FIELDSESSIONTASK___N__0_OFFSET UNITYSDK_OFFSET(0xEC21B0)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldSessionTask_TypeDefinitionIndex = 10850;

	class FieldSessionTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WebAPIErrorCode* HandleWebAPIError(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::System::Boolean arg2)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSESSIONTASK_HANDLEWEBAPIERROR_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSESSIONTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* __n__0(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::System::Boolean arg2)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSESSIONTASK___N__0_OFFSET))(arg, str, arg2, nullptr);
		}

	};
}

