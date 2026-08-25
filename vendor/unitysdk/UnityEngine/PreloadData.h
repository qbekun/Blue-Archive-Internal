#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET UNITYSDK_OFFSET(0xA2392F0)

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadData_TypeDefinitionIndex = 31197;

	class PreloadData : public Il2CppObject
	{
	public:
		::System::Void PreloadDataDontStripMe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA_PRELOADDATADONTSTRIPME_OFFSET))(nullptr);
		}

	};
}

