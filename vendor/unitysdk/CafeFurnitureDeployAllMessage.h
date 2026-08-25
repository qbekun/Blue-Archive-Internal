#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAFEFURNITUREDEPLOYALLMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F131B0)

	inline static constexpr unsigned int CafeFurnitureDeployAllMessage_TypeDefinitionIndex = 2042;

	class CafeFurnitureDeployAllMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITUREDEPLOYALLMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

