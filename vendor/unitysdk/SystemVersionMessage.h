#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SYSTEMVERSIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAACA0)

	inline static constexpr unsigned int SystemVersionMessage_TypeDefinitionIndex = 2859;

	class SystemVersionMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

