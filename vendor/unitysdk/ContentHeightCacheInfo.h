#pragma once
#include "unitysdk.h"

#define CONTENTHEIGHTCACHEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ContentHeightCacheInfo_TypeDefinitionIndex = 30284;

	class ContentHeightCacheInfo : public Il2CppObject
	{
	public:
		::System::Single sum; // 0x0
		::System::Int32 count; // 0x0

		::System::Void .ctor(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTHEIGHTCACHEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

