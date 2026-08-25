#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_SET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x1F7A920)
#define FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F7A930)
#define FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F78570)
#define FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x1F7A940)
#define FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F7A950)

	inline static constexpr unsigned int FriendDBsSyncNetworkResponseMessage_TypeDefinitionIndex = 2572;

	class FriendDBsSyncNetworkResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x20
		::System::Boolean _IsBlock_k__BackingField; // 0x28

		::System::Void set_IsBlock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_SET_ISBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_GET_ISBLOCK_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDDBSSYNCNETWORKRESPONSEMESSAGE_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

	};

