#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_U2D_LIGHT2DBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA244520)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int Light2DBase_TypeDefinitionIndex = 31226;

	class Light2DBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_LIGHT2DBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

