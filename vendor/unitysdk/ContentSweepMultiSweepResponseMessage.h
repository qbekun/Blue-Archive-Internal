#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ContentSweepMultiSweepResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F36A50)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F36A60)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F36A70)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F36A80)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F366D0)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F36A90)
#define CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F36AA0)

	inline static constexpr unsigned int ContentSweepMultiSweepResponseMessage_TypeDefinitionIndex = 2271;

	class ContentSweepMultiSweepResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ContentSweepMultiSweepResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _oldLevel_k__BackingField; // 0x28
		::System::Int64 _oldExp_k__BackingField; // 0x30

		::System::Int32 get_oldLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_OLDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_oldExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_OLDEXP_OFFSET))(nullptr);
		}

		::System::Void set_oldLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_OLDLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ContentSweepMultiSweepResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ContentSweepMultiSweepResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ContentSweepMultiSweepResponse* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ContentSweepMultiSweepResponse*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_oldExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_OLDEXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ContentSweepMultiSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepMultiSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

