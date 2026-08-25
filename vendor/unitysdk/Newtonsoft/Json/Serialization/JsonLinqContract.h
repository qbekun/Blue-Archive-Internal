#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_JSONLINQCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C3E40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonLinqContract_TypeDefinitionIndex = 31946;

	class JsonLinqContract : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONLINQCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

