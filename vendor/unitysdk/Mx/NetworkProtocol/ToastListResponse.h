#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50150)
#define MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_SET_TOASTDBS_OFFSET UNITYSDK_OFFSET(0xF50160)
#define MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_GET_TOASTDBS_OFFSET UNITYSDK_OFFSET(0xF50170)
#define MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50180)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ToastListResponse_TypeDefinitionIndex = 12171;

	class ToastListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ToastDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ToastDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_SET_TOASTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ToastDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_GET_TOASTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TOASTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

