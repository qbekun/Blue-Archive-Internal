#pragma once
#include "unitysdk.h"

#define RENDERINGFEATURES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0521B0)
#define RENDERINGFEATURES_GET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0xA0593E0)
#define RENDERINGFEATURES_GET_MSAA_OFFSET UNITYSDK_OFFSET(0xA0593F0)
#define RENDERINGFEATURES_SET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0xA059400)
#define RENDERINGFEATURES_SET_MSAA_OFFSET UNITYSDK_OFFSET(0xA059410)

	inline static constexpr unsigned int RenderingFeatures_TypeDefinitionIndex = 32635;

	class RenderingFeatures : public Il2CppObject
	{
	public:
		::System::Boolean _cameraStacking_k__BackingField; // 0x10
		::System::Boolean _msaa_k__BackingField; // 0x11

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERINGFEATURES_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_cameraStacking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERINGFEATURES_GET_CAMERASTACKING_OFFSET))(nullptr);
		}

		::System::Boolean get_msaa()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERINGFEATURES_GET_MSAA_OFFSET))(nullptr);
		}

		::System::Void set_cameraStacking(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENDERINGFEATURES_SET_CAMERASTACKING_OFFSET))(arg, nullptr);
		}

		::System::Void set_msaa(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENDERINGFEATURES_SET_MSAA_OFFSET))(arg, nullptr);
		}

	};

