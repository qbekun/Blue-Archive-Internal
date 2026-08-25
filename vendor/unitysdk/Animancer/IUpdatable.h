#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IUpdatable_TypeDefinitionIndex = 35156;

	class IUpdatable : public Il2CppObject
	{
	public:
		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IUPDATABLE_UPDATE_OFFSET))(nullptr);
		}

	};
}

