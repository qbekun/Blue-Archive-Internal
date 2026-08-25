#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF502C0)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_ACTUALCALLNAME_OFFSET UNITYSDK_OFFSET(0xF502D0)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xF502E0)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF502F0)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xF50300)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_ACTUALCALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF50310)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF50320)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_ACTUALCALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xF50330)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50340)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50350)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xF50360)
#define MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_ACTUALCALLNAME_OFFSET UNITYSDK_OFFSET(0xF50370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TTSGetKanaResponse_TypeDefinitionIndex = 12175;

	class TTSGetKanaResponse : public Il2CppObject
	{
	public:
		::System::String* _CallName_k__BackingField; // 0x50
		::System::String* _ActualCallName_k__BackingField; // 0x58
		::System::String* _CallNameKatakana_k__BackingField; // 0x60
		::System::String* _CallNameKorean_k__BackingField; // 0x68
		::System::String* _ActualCallNameKorean_k__BackingField; // 0x70

		::System::String* get_CallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Void set_ActualCallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_ACTUALCALLNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_CallNameKatakana(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAMEKATAKANA_OFFSET))(str, nullptr);
		}

		::System::String* get_CallNameKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAMEKOREAN_OFFSET))(nullptr);
		}

		::System::Void set_CallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_ActualCallNameKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_ACTUALCALLNAMEKOREAN_OFFSET))(nullptr);
		}

		::System::Void set_CallNameKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_CALLNAMEKOREAN_OFFSET))(str, nullptr);
		}

		::System::Void set_ActualCallNameKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_SET_ACTUALCALLNAMEKOREAN_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_CallNameKatakana()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_CALLNAMEKATAKANA_OFFSET))(nullptr);
		}

		::System::String* get_ActualCallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETKANARESPONSE_GET_ACTUALCALLNAME_OFFSET))(nullptr);
		}

	};
}

