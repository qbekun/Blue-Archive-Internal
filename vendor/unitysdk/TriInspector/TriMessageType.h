#pragma once
#include "../unitysdk.h"

namespace TriInspector { class TriMessageType; }

namespace TriInspector
{
	inline static constexpr unsigned int TriMessageType_TypeDefinitionIndex = 37868;

	class TriMessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TriInspector::TriMessageType* None; // 0x0
		::TriInspector::TriMessageType* Info; // 0x0
		::TriInspector::TriMessageType* Warning; // 0x0
		::TriInspector::TriMessageType* Error; // 0x0

	};
}

