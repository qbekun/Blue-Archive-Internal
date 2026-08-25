#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ContentSweepResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONTENTSWEEPRESPONSEMESSAGE_SET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F389F0)
#define CONTENTSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F38A00)
#define CONTENTSWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F38640)
#define CONTENTSWEEPRESPONSEMESSAGE_SET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F38A10)
#define CONTENTSWEEPRESPONSEMESSAGE_GET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F38A20)
#define CONTENTSWEEPRESPONSEMESSAGE_GET_OLDEXP_OFFSET UNITYSDK_OFFSET(0x1F38A30)
#define CONTENTSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F38A40)

	inline static constexpr unsigned int ContentSweepResponseMessage_TypeDefinitionIndex = 2283;

	class ContentSweepResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ContentSweepResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _oldLevel_k__BackingField; // 0x28
		::System::Int64 _oldExp_k__BackingField; // 0x30

		::System::Void set_oldLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_SET_OLDLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ContentSweepResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ContentSweepResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ContentSweepResponse* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ContentSweepResponse*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_oldExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_SET_OLDEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_oldLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_GET_OLDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_oldExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_GET_OLDEXP_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ContentSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

