#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_ISALREADYCLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_GETCONTENTNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace _MX::Program::Scripts::Bridge
{
	inline static constexpr unsigned int IContentConditionChecker_TypeDefinitionIndex = 11140;

	class IContentConditionChecker : public Il2CppObject
	{
	public:
		::System::Boolean IsAlreadyClear(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_ISALREADYCLEAR_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* GetContentName(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + _MX_PROGRAM_SCRIPTS_BRIDGE_ICONTENTCONDITIONCHECKER_GETCONTENTNAME_OFFSET))(arg, nullptr);
		}

	};
}

