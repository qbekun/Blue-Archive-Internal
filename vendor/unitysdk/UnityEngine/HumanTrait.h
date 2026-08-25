#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET UNITYSDK_OFFSET(0xA1C8EC0)

namespace UnityEngine
{
	inline static constexpr unsigned int HumanTrait_TypeDefinitionIndex = 36479;

	class HumanTrait : public Il2CppObject
	{
	public:
		::System::Int32 GetBoneIndexFromMono(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET))(arg, nullptr);
		}

	};
}

