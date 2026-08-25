#pragma once
#include "unitysdk.h"

#define SHADOWRESOLUTIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0B4640)

	inline static constexpr unsigned int ShadowResolutionRequest_TypeDefinitionIndex = 32859;

	class ShadowResolutionRequest : public Il2CppObject
	{
	public:
		::System::Int32 visibleLightIndex; // 0x10
		::System::Int32 perLightShadowSliceIndex; // 0x14
		::System::Int32 requestedResolution; // 0x18
		::System::Boolean softShadow; // 0x1C
		::System::Boolean pointLightShadow; // 0x1D
		::System::Int32 offsetX; // 0x20
		::System::Int32 offsetY; // 0x24
		::System::Int32 allocatedResolution; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHADOWRESOLUTIONREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

