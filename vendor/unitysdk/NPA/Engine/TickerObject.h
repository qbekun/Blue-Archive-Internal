#pragma once
#include "../../unitysdk.h"

#define NPA_ENGINE_TICKEROBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CD4C60)
#define NPA_ENGINE_TICKEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD5040)

namespace NPA::Engine
{
	inline static constexpr unsigned int TickerObject_TypeDefinitionIndex = 27453;

	class TickerObject : public Il2CppObject
	{
	public:
		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKEROBJECT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKEROBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

