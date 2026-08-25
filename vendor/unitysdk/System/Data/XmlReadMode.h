#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int XmlReadMode_TypeDefinitionIndex = 32311;

	class XmlReadMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::XmlReadMode* Auto; // 0x0
		::System::Data::XmlReadMode* ReadSchema; // 0x0
		::System::Data::XmlReadMode* IgnoreSchema; // 0x0
		::System::Data::XmlReadMode* InferSchema; // 0x0
		::System::Data::XmlReadMode* DiffGram; // 0x0
		::System::Data::XmlReadMode* Fragment; // 0x0
		::System::Data::XmlReadMode* InferTypedSchema; // 0x0

	};
}

