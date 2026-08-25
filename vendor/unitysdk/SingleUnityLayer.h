#pragma once
#include "unitysdk.h"

#define SINGLEUNITYLAYER_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1FB2430)
#define SINGLEUNITYLAYER_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1FB2440)
#define SINGLEUNITYLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2450)
#define SINGLEUNITYLAYER_SET_OFFSET UNITYSDK_OFFSET(0x1FB2460)

	inline static constexpr unsigned int SingleUnityLayer_TypeDefinitionIndex = 2903;

	class SingleUnityLayer : public Il2CppObject
	{
	public:
		::System::Int32 m_LayerIndex; // 0x10

		::System::Int32 get_Mask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEUNITYLAYER_GET_MASK_OFFSET))(nullptr);
		}

		::System::Int32 get_LayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEUNITYLAYER_GET_LAYERINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEUNITYLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SINGLEUNITYLAYER_SET_OFFSET))(arg, nullptr);
		}

	};

