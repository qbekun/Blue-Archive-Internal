#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAFEINFOSYNCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C28A0)
#define CAFEINFOSYNCMESSAGE_SET_ONCAFERANKUP_OFFSET UNITYSDK_OFFSET(0x19C2B80)
#define CAFEINFOSYNCMESSAGE_GET_ONCAFERANKUP_OFFSET UNITYSDK_OFFSET(0x19C2B90)

	inline static constexpr unsigned int CafeInfoSyncMessage_TypeDefinitionIndex = 1383;

	class CafeInfoSyncMessage : public Il2CppObject
	{
	public:
		::System::Boolean _OnCafeRankUp_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOSYNCMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_OnCafeRankUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOSYNCMESSAGE_SET_ONCAFERANKUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OnCafeRankUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOSYNCMESSAGE_GET_ONCAFERANKUP_OFFSET))(nullptr);
		}

	};

