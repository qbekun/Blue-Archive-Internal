#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONTENTSAVEGETRESPONSEMESSAGE_SET_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0x1F38030)
#define CONTENTSAVEGETRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F37CF0)
#define CONTENTSAVEGETRESPONSEMESSAGE_GET_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0x1F38040)

	inline static constexpr unsigned int ContentSaveGetResponseMessage_TypeDefinitionIndex = 2280;

	class ContentSaveGetResponseMessage : public Il2CppObject
	{
	public:
		::System::Boolean _HasValidData_k__BackingField; // 0x20

		::System::Void set_HasValidData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETRESPONSEMESSAGE_SET_HASVALIDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_HasValidData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETRESPONSEMESSAGE_GET_HASVALIDDATA_OFFSET))(nullptr);
		}

	};

