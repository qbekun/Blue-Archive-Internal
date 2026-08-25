#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xF14150)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_USEOTHERCAFEFURNITURE_OFFSET UNITYSDK_OFFSET(0xF14160)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xF14170)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14180)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_USEOTHERCAFEFURNITURE_OFFSET UNITYSDK_OFFSET(0xF14190)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF141A0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF141B0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF141C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeApplyTemplateRequest_TypeDefinitionIndex = 11396;

	class CafeApplyTemplateRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TemplateId_k__BackingField; // 0x40
		::System::Int64 _CafeDBId_k__BackingField; // 0x48
		::System::Boolean _UseOtherCafeFurniture_k__BackingField; // 0x50

		::System::Void set_TemplateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_TEMPLATEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseOtherCafeFurniture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_USEOTHERCAFEFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TemplateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_UseOtherCafeFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_USEOTHERCAFEFURNITURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATEREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

	};
}

