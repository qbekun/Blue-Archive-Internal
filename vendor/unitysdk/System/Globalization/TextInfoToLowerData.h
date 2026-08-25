#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92BD300)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToLowerData_TypeDefinitionIndex = 25011;

	class TextInfoToLowerData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* range_00c0_0556; // 0x0
		::Il2CppArray<::System::Object*>* range_10a0_10c5; // 0x8
		::Il2CppArray<::System::Object*>* range_1e00_1ffc; // 0x10
		::Il2CppArray<::System::Object*>* range_2160_216f; // 0x18
		::Il2CppArray<::System::Object*>* range_24b6_24cf; // 0x20
		::Il2CppArray<::System::Object*>* range_2c00_2c2e; // 0x28
		::Il2CppArray<::System::Object*>* range_2c60_2ce2; // 0x30
		::Il2CppArray<::System::Object*>* range_a640_a696; // 0x38
		::Il2CppArray<::System::Object*>* range_a722_a78b; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

