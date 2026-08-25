#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftUpdateNodeLevelResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F56D20)
#define CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F56D30)
#define CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F56D70)

	inline static constexpr unsigned int CraftUpdateNodeQualityResponseMessage_TypeDefinitionIndex = 2330;

	class CraftUpdateNodeQualityResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftUpdateNodeLevelResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftUpdateNodeLevelResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftUpdateNodeLevelResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftUpdateNodeLevelResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftUpdateNodeLevelResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CraftUpdateNodeLevelResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftUpdateNodeLevelResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTUPDATENODEQUALITYRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

