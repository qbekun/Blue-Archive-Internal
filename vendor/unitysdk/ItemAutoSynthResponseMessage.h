#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemAutoSynthResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ITEMAUTOSYNTHRESPONSEMESSAGE_SET_VALIDATEDATAS_OFFSET UNITYSDK_OFFSET(0x1FAA220)
#define ITEMAUTOSYNTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA230)
#define ITEMAUTOSYNTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FAA280)
#define ITEMAUTOSYNTHRESPONSEMESSAGE_GET_VALIDATEDATAS_OFFSET UNITYSDK_OFFSET(0x1FAA290)
#define ITEMAUTOSYNTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FAA2A0)

	inline static constexpr unsigned int ItemAutoSynthResponseMessage_TypeDefinitionIndex = 2854;

	class ItemAutoSynthResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ItemAutoSynthResponse* _Response_k__BackingField; // 0x20
		Il2CppObject* _ValidateDatas_k__BackingField; // 0x28

		::System::Void set_ValidateDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHRESPONSEMESSAGE_SET_VALIDATEDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ItemAutoSynthResponse* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ItemAutoSynthResponse*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ItemAutoSynthResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ItemAutoSynthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ValidateDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHRESPONSEMESSAGE_GET_VALIDATEDATAS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ItemAutoSynthResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ItemAutoSynthResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMAUTOSYNTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

