#pragma once
#include "unitysdk.h"

namespace Spine { class AtlasRegion; }

#define INTANDATLASREGIONKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9627190)
#define INTANDATLASREGIONKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9626750)

	inline static constexpr unsigned int IntAndAtlasRegionKey_TypeDefinitionIndex = 35386;

	class IntAndAtlasRegionKey : public Il2CppObject
	{
	public:
		::System::Int32 i; // 0x10
		::Spine::AtlasRegion* region; // 0x18

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTANDATLASREGIONKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Spine::AtlasRegion* arg)
		{
			((::System::Void(*)(::System::Int32, ::Spine::AtlasRegion*, ::PVOID))((::PBYTE)hIl2Cpp + INTANDATLASREGIONKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

