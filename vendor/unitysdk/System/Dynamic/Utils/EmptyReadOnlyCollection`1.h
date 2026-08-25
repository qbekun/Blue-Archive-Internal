#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_EMPTYREADONLYCOLLECTION`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int EmptyReadOnlyCollection`1_TypeDefinitionIndex = 33574;

	class EmptyReadOnlyCollection`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EMPTYREADONLYCOLLECTION`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

