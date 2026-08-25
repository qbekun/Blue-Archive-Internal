#pragma once
#include "../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

namespace FlatData
{
	inline static constexpr unsigned int EchelonExtensionType_TypeDefinitionIndex = 9500;

	class EchelonExtensionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EchelonExtensionType* Base; // 0x0
		::FlatData::EchelonExtensionType* Extension; // 0x0

	};
}

