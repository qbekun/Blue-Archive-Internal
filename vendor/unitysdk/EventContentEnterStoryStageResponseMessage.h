#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6A040)
#define EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6A050)
#define EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A060)

	inline static constexpr unsigned int EventContentEnterStoryStageResponseMessage_TypeDefinitionIndex = 2465;

	class EventContentEnterStoryStageResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x20

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

