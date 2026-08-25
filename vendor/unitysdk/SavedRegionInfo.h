#pragma once
#include "unitysdk.h"

namespace UnityEngine { class SpritePackingRotation; }

#define SAVEDREGIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EEDB0)

	inline static constexpr unsigned int SavedRegionInfo_TypeDefinitionIndex = 35287;

	class SavedRegionInfo : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single width; // 0x18
		::System::Single height; // 0x1C
		::UnityEngine::SpritePackingRotation* packingRotation; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDREGIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};

