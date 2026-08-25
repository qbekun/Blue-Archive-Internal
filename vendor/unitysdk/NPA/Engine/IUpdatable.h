#pragma once
#include "../../unitysdk.h"

#define NPA_ENGINE_IUPDATABLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Engine
{
	inline static constexpr unsigned int IUpdatable_TypeDefinitionIndex = 27452;

	class IUpdatable : public Il2CppObject
	{
	public:
		::System::Void OnUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_IUPDATABLE_ONUPDATE_OFFSET))(arg, nullptr);
		}

	};
}

