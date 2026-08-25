#pragma once
#include "../../unitysdk.h"

#define MX_DATA_DATAPROGRESSMESSAGE_GET_PROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x17FD310)
#define MX_DATA_DATAPROGRESSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x17FD320)
#define MX_DATA_DATAPROGRESSMESSAGE_SET_PROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x17FD350)

namespace MX::Data
{
	inline static constexpr unsigned int DataProgressMessage_TypeDefinitionIndex = 15675;

	class DataProgressMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::String* _ProgressMessage_k__BackingField; // 0x18

		::System::String* get_ProgressMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAPROGRESSMESSAGE_GET_PROGRESSMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAPROGRESSMESSAGE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_ProgressMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAPROGRESSMESSAGE_SET_PROGRESSMESSAGE_OFFSET))(str, nullptr);
		}

	};
}

