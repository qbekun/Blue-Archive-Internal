#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSTRINGCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E35C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonStringContract_TypeDefinitionIndex = 31960;

	class JsonStringContract : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSTRINGCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

