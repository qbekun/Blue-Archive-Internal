#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class RenderScaleMultiplier; }

#define RENDERSCALE_GETRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x1D29D50)
#define RENDERSCALE_SET_OFFSET UNITYSDK_OFFSET(0x1D29D80)
#define RENDERSCALE_CONVERTOPTION_OFFSET UNITYSDK_OFFSET(0x1D29D90)
#define RENDERSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29DF0)

	inline static constexpr unsigned int RenderScale_TypeDefinitionIndex = 20048;

	class RenderScale : public Il2CppObject
	{
	public:
		::MX::SaveData::RenderScaleMultiplier* scale; // 0x10

		::System::Single GetRenderScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERSCALE_GETRENDERSCALE_OFFSET))(nullptr);
		}

		::System::Void Set(::MX::SaveData::RenderScaleMultiplier* arg)
		{
			((::System::Void(*)(::MX::SaveData::RenderScaleMultiplier*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERSCALE_SET_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::RenderScaleMultiplier* ConvertOption(::System::Single arg)
		{
			return (return (::MX::SaveData::RenderScaleMultiplier*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RENDERSCALE_CONVERTOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::SaveData::RenderScaleMultiplier* arg)
		{
			((::System::Void(*)(::MX::SaveData::RenderScaleMultiplier*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERSCALE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

