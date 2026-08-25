#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_CURRENTVERSION_OFFSET UNITYSDK_OFFSET(0xF4FB30)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FB40)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_MINIMUMVERSION_OFFSET UNITYSDK_OFFSET(0xF4FB50)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_MINIMUMVERSION_OFFSET UNITYSDK_OFFSET(0xF4FB60)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FB70)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_ISDEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xF4FB80)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_ISDEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xF4FB90)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_CURRENTVERSION_OFFSET UNITYSDK_OFFSET(0xF4FBA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SystemVersionResponse_TypeDefinitionIndex = 12155;

	class SystemVersionResponse : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentVersion_k__BackingField; // 0x50
		::System::Int64 _MinimumVersion_k__BackingField; // 0x58
		::System::Boolean _IsDevelopment_k__BackingField; // 0x60

		::System::Void set_CurrentVersion(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_CURRENTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_MinimumVersion()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_MINIMUMVERSION_OFFSET))(nullptr);
		}

		::System::Void set_MinimumVersion(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_MINIMUMVERSION_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_IsDevelopment(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_SET_ISDEVELOPMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDevelopment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_ISDEVELOPMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentVersion()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONRESPONSE_GET_CURRENTVERSION_OFFSET))(nullptr);
		}

	};
}

