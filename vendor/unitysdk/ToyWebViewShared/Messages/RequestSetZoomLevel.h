#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7250)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA8C0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA940)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSetZoomLevel_TypeDefinitionIndex = 25481;

	class RequestSetZoomLevel : public Il2CppObject
	{
	public:
		::System::Double percentage; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETZOOMLEVEL_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

