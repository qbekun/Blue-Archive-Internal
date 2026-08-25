#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SCROLLVIEWSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA28A140)

namespace UnityEngine
{
	inline static constexpr unsigned int ScrollViewState_TypeDefinitionIndex = 36556;

	class ScrollViewState : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCROLLVIEWSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

