#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_RESPONSEDESCRIPTION_GET_POSITIVEINTERMEDIATE_OFFSET UNITYSDK_OFFSET(0x9B960C0)
#define SYSTEM_NET_RESPONSEDESCRIPTION_GET_POSITIVECOMPLETION_OFFSET UNITYSDK_OFFSET(0x9B960E0)
#define SYSTEM_NET_RESPONSEDESCRIPTION_GET_TRANSIENTFAILURE_OFFSET UNITYSDK_OFFSET(0x9B96100)
#define SYSTEM_NET_RESPONSEDESCRIPTION_GET_PERMANENTFAILURE_OFFSET UNITYSDK_OFFSET(0x9B96120)
#define SYSTEM_NET_RESPONSEDESCRIPTION_GET_INVALIDSTATUSCODE_OFFSET UNITYSDK_OFFSET(0x9B96140)
#define SYSTEM_NET_RESPONSEDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B96160)

namespace System::Net
{
	inline static constexpr unsigned int ResponseDescription_TypeDefinitionIndex = 29653;

	class ResponseDescription : public Il2CppObject
	{
	public:
		::System::Boolean Multiline; // 0x10
		::System::Int32 Status; // 0x14
		::System::String* StatusDescription; // 0x18
		::System::Text::StringBuilder* StatusBuffer; // 0x20
		::System::String* StatusCodeString; // 0x28

		::System::Boolean get_PositiveIntermediate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_GET_POSITIVEINTERMEDIATE_OFFSET))(nullptr);
		}

		::System::Boolean get_PositiveCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_GET_POSITIVECOMPLETION_OFFSET))(nullptr);
		}

		::System::Boolean get_TransientFailure()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_GET_TRANSIENTFAILURE_OFFSET))(nullptr);
		}

		::System::Boolean get_PermanentFailure()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_GET_PERMANENTFAILURE_OFFSET))(nullptr);
		}

		::System::Boolean get_InvalidStatusCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_GET_INVALIDSTATUSCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_RESPONSEDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

