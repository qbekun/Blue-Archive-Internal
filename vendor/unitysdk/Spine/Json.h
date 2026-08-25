#pragma once
#include "../unitysdk.h"

#define SPINE_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x95AE310)

namespace Spine
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 35041;

	class Json : public Il2CppObject
	{
	public:
		::System::Object* Deserialize(::System::IO::TextReader* arg)
		{
			return (return (::System::Object*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_JSON_DESERIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

