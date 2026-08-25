#pragma once
#include "../unitysdk.h"

#define SPINE_IUPDATABLE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int IUpdatable_TypeDefinitionIndex = 35040;

	class IUpdatable : public Il2CppObject
	{
	public:
		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IUPDATABLE_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IUPDATABLE_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

