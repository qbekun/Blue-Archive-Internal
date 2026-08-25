#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class ReadType; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ReadType_TypeDefinitionIndex = 31750;

	class ReadType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::ReadType* Read; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsInt32; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsInt64; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsBytes; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsString; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsDecimal; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsDateTime; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsDateTimeOffset; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsDouble; // 0x0
		::Newtonsoft::Json::ReadType* ReadAsBoolean; // 0x0

	};
}

