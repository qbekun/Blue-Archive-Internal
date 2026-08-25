#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class ContentSaveDiscardResponse; }

#define CONTENTSAVEDISCARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F373F0)

	inline static constexpr unsigned int ContentSaveDiscardResponseMessage_TypeDefinitionIndex = 2277;

	class ContentSaveDiscardResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ContentSaveDiscardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ContentSaveDiscardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEDISCARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

