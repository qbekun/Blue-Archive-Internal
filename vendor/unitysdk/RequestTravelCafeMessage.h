#pragma once
#include "unitysdk.h"

#define REQUESTTRAVELCAFEMESSAGE_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2281780)
#define REQUESTTRAVELCAFEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x226D050)

	inline static constexpr unsigned int RequestTravelCafeMessage_TypeDefinitionIndex = 4663;

	class RequestTravelCafeMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x18

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTTRAVELCAFEMESSAGE_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTTRAVELCAFEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

