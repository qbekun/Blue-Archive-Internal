#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_CATEGORY_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x954C7D0)
#define NEXON_PUB_CATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C7E0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int Category_TypeDefinitionIndex = 37552;

	class Category : public Il2CppObject
	{
	public:
		Il2CppObject* group; // 0x10

		Il2CppObject* get_Group()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_CATEGORY_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_CATEGORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

