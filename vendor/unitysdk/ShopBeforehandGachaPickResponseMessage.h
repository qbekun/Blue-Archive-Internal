#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class ShopBeforehandGachaPickResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_RESULTDB_OFFSET UNITYSDK_OFFSET(0x1F9F260)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_NEWCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1F9F270)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_RESULTDB_OFFSET UNITYSDK_OFFSET(0x1F9F280)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_NEWCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1F9F290)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F2A0)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F9F310)
#define SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F9F320)

	inline static constexpr unsigned int ShopBeforehandGachaPickResponseMessage_TypeDefinitionIndex = 2804;

	class ShopBeforehandGachaPickResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _NewCharacterList_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ResultDB_k__BackingField; // 0x28
		::MX::NetworkProtocol::ShopBeforehandGachaPickResponse* _Response_k__BackingField; // 0x30

		::MX::GameLogic::Parcel::ParcelResultDB* get_ResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_RESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_NewCharacterList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_NEWCHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_ResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_RESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NewCharacterList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_NEWCHARACTERLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopBeforehandGachaPickResponse* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopBeforehandGachaPickResponse*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::NetworkProtocol::ShopBeforehandGachaPickResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopBeforehandGachaPickResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ShopBeforehandGachaPickResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBeforehandGachaPickResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

