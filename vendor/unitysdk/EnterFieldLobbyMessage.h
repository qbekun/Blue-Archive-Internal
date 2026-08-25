#pragma once
#include "unitysdk.h"

#define ENTERFIELDLOBBYMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x245BCC0)
#define ENTERFIELDLOBBYMESSAGE_GET_FROMEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x245C910)
#define ENTERFIELDLOBBYMESSAGE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x245C920)

	inline static constexpr unsigned int EnterFieldLobbyMessage_TypeDefinitionIndex = 5587;

	class EnterFieldLobbyMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Boolean _FromEventInternal_k__BackingField; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ENTERFIELDLOBBYMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_FromEventInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERFIELDLOBBYMESSAGE_GET_FROMEVENTINTERNAL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERFIELDLOBBYMESSAGE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

