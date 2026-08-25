#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F7280)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int BinaryCompatibility_TypeDefinitionIndex = 24568;

	class BinaryCompatibility : public Il2CppObject
	{
	public:
		::System::Boolean TargetsAtLeast_Desktop_V4_5; // 0x0
		::System::Boolean TargetsAtLeast_Desktop_V4_5_1; // 0x1

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_BINARYCOMPATIBILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

