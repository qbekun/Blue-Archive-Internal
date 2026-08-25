#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define FXMATERIALANIMATECOLOR_CACHEVALUE_OFFSET UNITYSDK_OFFSET(0x20BA050)
#define FXMATERIALANIMATECOLOR_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x20BA0F0)
#define FXMATERIALANIMATECOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BA1E0)
#define FXMATERIALANIMATECOLOR_RETURNTOORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA200)
#define FXMATERIALANIMATECOLOR_SAVEORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA2A0)

	inline static constexpr unsigned int FxMaterialAnimateColor_TypeDefinitionIndex = 3613;

	class FxMaterialAnimateColor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* Color; // 0x58
		::UnityEngine::Color* cachedColor; // 0x68
		::UnityEngine::Color* savedOriginColor; // 0x78

		::System::Void CacheValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATECOLOR_CACHEVALUE_OFFSET))(nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATECOLOR_REFRESHVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATECOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReturnToOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATECOLOR_RETURNTOORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void SaveOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATECOLOR_SAVEORIGINVALUE_OFFSET))(nullptr);
		}

	};

