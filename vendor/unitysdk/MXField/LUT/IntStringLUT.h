#pragma once
#include "../../unitysdk.h"

#define MXFIELD_LUT_INTSTRINGLUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC2A20)

namespace MXField::LUT
{
	inline static constexpr unsigned int IntStringLUT_TypeDefinitionIndex = 10856;

	class IntStringLUT : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* pairs; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LUT_INTSTRINGLUT_.CTOR_OFFSET))(nullptr);
		}

	};
}

