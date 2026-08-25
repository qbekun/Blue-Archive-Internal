#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MOMOTALKREADSYNCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F87740)
#define MOMOTALKREADSYNCMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F87770)
#define MOMOTALKREADSYNCMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F87780)

	inline static constexpr unsigned int MomotalkReadSyncMessage_TypeDefinitionIndex = 2651;

	class MomotalkReadSyncMessage : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADSYNCMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADSYNCMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKREADSYNCMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

	};

