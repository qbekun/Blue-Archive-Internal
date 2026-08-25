#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONBinaryTag; }

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 27416;

	class JSONBinaryTag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::SimpleJSON::JSONBinaryTag* Array; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* Class; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* Value; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* IntValue; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* DoubleValue; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* BoolValue; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* FloatValue; // 0x0
		::NPA::SimpleJSON::JSONBinaryTag* LongValue; // 0x0

	};
}

