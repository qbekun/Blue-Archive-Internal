#pragma once
#include "unitysdk.h"

#define SPINELIPSYNCINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCEF0)
#define SPINELIPSYNCINFO_GET_MOUTHSEGMENTKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x20DCF50)

	inline static constexpr unsigned int SpineLipsyncInfo_TypeDefinitionIndex = 3755;

	class SpineLipsyncInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _MouthSegmentKeyframes_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINELIPSYNCINFO_.CTOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_MouthSegmentKeyframes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINELIPSYNCINFO_GET_MOUTHSEGMENTKEYFRAMES_OFFSET))(nullptr);
		}

	};

