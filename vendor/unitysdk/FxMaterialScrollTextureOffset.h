#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define FXMATERIALSCROLLTEXTUREOFFSET_CYCLEVALUEWITHINLIMIT_OFFSET UNITYSDK_OFFSET(0x20BA890)
#define FXMATERIALSCROLLTEXTUREOFFSET_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x20BA920)
#define FXMATERIALSCROLLTEXTUREOFFSET_RETURNTOORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BAB90)
#define FXMATERIALSCROLLTEXTUREOFFSET_SAVEORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BAC20)
#define FXMATERIALSCROLLTEXTUREOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BACB0)

	inline static constexpr unsigned int FxMaterialScrollTextureOffset_TypeDefinitionIndex = 3616;

	class FxMaterialScrollTextureOffset : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* ScrollOffsetPerSec; // 0x58
		::UnityEngine::Vector2* OffsetMin; // 0x60
		::UnityEngine::Vector2* OffsetMax; // 0x68
		::UnityEngine::Vector2* savedBasicOffset; // 0x70

		::System::Single CycleValueWithinLimit(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALSCROLLTEXTUREOFFSET_CYCLEVALUEWITHINLIMIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALSCROLLTEXTUREOFFSET_REFRESHVALUE_OFFSET))(nullptr);
		}

		::System::Void ReturnToOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALSCROLLTEXTUREOFFSET_RETURNTOORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void SaveOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALSCROLLTEXTUREOFFSET_SAVEORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALSCROLLTEXTUREOFFSET_.CTOR_OFFSET))(nullptr);
		}

	};

