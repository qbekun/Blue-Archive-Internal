#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITFORSECONDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236DB0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForSeconds_TypeDefinitionIndex = 31184;

	class WaitForSeconds : public Il2CppObject
	{
	public:
		::System::Single m_Seconds; // 0x10

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

