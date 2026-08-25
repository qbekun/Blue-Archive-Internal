#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_RANGEINT_GET_END_OFFSET UNITYSDK_OFFSET(0xA231D50)
#define UNITYENGINE_RANGEINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231D60)

namespace UnityEngine
{
	inline static constexpr unsigned int RangeInt_TypeDefinitionIndex = 31159;

	class RangeInt : public Il2CppObject
	{
	public:
		::System::Int32 start; // 0x10
		::System::Int32 length; // 0x14

		::System::Int32 get_end()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEINT_GET_END_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

