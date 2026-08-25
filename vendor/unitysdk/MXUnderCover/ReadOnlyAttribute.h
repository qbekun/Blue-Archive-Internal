#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_READONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD9A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 10002;

	class ReadOnlyAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_READONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

