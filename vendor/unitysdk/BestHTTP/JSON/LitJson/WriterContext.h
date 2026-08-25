#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_WRITERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B2480)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int WriterContext_TypeDefinitionIndex = 23323;

	class WriterContext : public Il2CppObject
	{
	public:
		::System::Int32 Count; // 0x10
		::System::Boolean InArray; // 0x14
		::System::Boolean InObject; // 0x15
		::System::Boolean ExpectingValue; // 0x16
		::System::Int32 Padding; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_WRITERCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

