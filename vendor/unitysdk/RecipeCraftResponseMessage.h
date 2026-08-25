#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RecipeCraftResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RECIPECRAFTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F92FC0)
#define RECIPECRAFTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F92FD0)
#define RECIPECRAFTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F92FE0)

	inline static constexpr unsigned int RecipeCraftResponseMessage_TypeDefinitionIndex = 2730;

	class RecipeCraftResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RecipeCraftResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::RecipeCraftResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RecipeCraftResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::RecipeCraftResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RecipeCraftResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RecipeCraftResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RecipeCraftResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RECIPECRAFTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

