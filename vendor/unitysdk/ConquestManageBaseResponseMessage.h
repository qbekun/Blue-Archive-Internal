#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ConquestManageBaseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONQUESTMANAGEBASERESPONSEMESSAGE_SET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F331D0)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_GET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F331E0)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F331F0)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_GET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F33200)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F33210)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_SET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F33220)
#define CONQUESTMANAGEBASERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F33230)

	inline static constexpr unsigned int ConquestManageBaseResponseMessage_TypeDefinitionIndex = 2250;

	class ConquestManageBaseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ConquestManageBaseResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _oldLevel_k__BackingField; // 0x28
		::System::Int64 _oldExp_k__BackingField; // 0x30

		::System::Void set_oldLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_SET_OLDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_oldLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_GET_OLDLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ConquestManageBaseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ConquestManageBaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_oldExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_GET_OLDEXP_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ConquestManageBaseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ConquestManageBaseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_oldExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_SET_OLDEXP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ConquestManageBaseResponse* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ConquestManageBaseResponse*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

