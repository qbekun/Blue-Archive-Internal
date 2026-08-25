#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92BD010)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToUpperData_TypeDefinitionIndex = 25010;

	class TextInfoToUpperData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* range_00e0_0586; // 0x0
		::Il2CppArray<::System::Object*>* range_1e01_1ff3; // 0x8
		::Il2CppArray<::System::Object*>* range_2170_2184; // 0x10
		::Il2CppArray<::System::Object*>* range_24d0_24e9; // 0x18
		::Il2CppArray<::System::Object*>* range_2c30_2ce3; // 0x20
		::Il2CppArray<::System::Object*>* range_2d00_2d25; // 0x28
		::Il2CppArray<::System::Object*>* range_a641_a697; // 0x30
		::Il2CppArray<::System::Object*>* range_a723_a78c; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

