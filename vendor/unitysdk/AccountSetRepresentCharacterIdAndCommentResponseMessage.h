#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F07DF0)

	inline static constexpr unsigned int AccountSetRepresentCharacterIdAndCommentResponseMessage_TypeDefinitionIndex = 1982;

	class AccountSetRepresentCharacterIdAndCommentResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

