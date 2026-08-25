#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6330)
#define SHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA6380)
#define SHOPLISTRESPONSEMESSAGE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1FA6390)
#define SHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA63A0)
#define SHOPLISTRESPONSEMESSAGE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1FA63B0)

	inline static constexpr unsigned int ShopListResponseMessage_TypeDefinitionIndex = 2832;

	class ShopListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopListResponse* _Response_k__BackingField; // 0x20
		Il2CppObject* _Category_k__BackingField; // 0x28

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopListResponse* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopListResponse*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ShopListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Category(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTRESPONSEMESSAGE_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ShopListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Category()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTRESPONSEMESSAGE_GET_CATEGORY_OFFSET))(nullptr);
		}

	};

