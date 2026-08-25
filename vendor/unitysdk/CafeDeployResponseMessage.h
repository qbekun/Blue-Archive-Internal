#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAFEDEPLOYRESPONSEMESSAGE_GET_NEWSERVERID_OFFSET UNITYSDK_OFFSET(0x1F0F540)
#define CAFEDEPLOYRESPONSEMESSAGE_SET_NEWSERVERID_OFFSET UNITYSDK_OFFSET(0x1F0F550)
#define CAFEDEPLOYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F560)

	inline static constexpr unsigned int CafeDeployResponseMessage_TypeDefinitionIndex = 2024;

	class CafeDeployResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _NewServerId_k__BackingField; // 0x20

		::System::Int64 get_NewServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYRESPONSEMESSAGE_GET_NEWSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_NewServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYRESPONSEMESSAGE_SET_NEWSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::NetworkProtocol::WebAPIErrorCode* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEDEPLOYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

