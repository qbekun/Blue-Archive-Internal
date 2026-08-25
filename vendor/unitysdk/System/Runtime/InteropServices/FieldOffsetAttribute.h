#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_FIELDOFFSETATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222FB0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int FieldOffsetAttribute_TypeDefinitionIndex = 24708;

	class FieldOffsetAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _val; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_FIELDOFFSETATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

