#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_GET_IMAGEBYTES_OFFSET UNITYSDK_OFFSET(0xF46770)
#define MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_SET_IMAGEBYTES_OFFSET UNITYSDK_OFFSET(0xF46780)
#define MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46790)
#define MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF467A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventImageResponse_TypeDefinitionIndex = 11790;

	class EventImageResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _ImageBytes_k__BackingField; // 0x50

		::Il2CppArray<::System::Object*>* get_ImageBytes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_GET_IMAGEBYTES_OFFSET))(nullptr);
		}

		::System::Void set_ImageBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_SET_IMAGEBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

