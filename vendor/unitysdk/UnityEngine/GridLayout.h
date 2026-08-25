#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET UNITYSDK_OFFSET(0xA273B30)

namespace UnityEngine
{
	inline static constexpr unsigned int GridLayout_TypeDefinitionIndex = 38058;

	class GridLayout : public Il2CppObject
	{
	public:
		::System::Void DoNothing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_DONOTHING_OFFSET))(nullptr);
		}

	};
}

