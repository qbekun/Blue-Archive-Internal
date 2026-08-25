#pragma once
#include "unitysdk.h"

#define FXMATERIALANIMATEFLOAT_SAVEORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA340)
#define FXMATERIALANIMATEFLOAT_RETURNTOORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA3D0)
#define FXMATERIALANIMATEFLOAT_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x20BA470)
#define FXMATERIALANIMATEFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BA510)
#define FXMATERIALANIMATEFLOAT_CACHEVALUE_OFFSET UNITYSDK_OFFSET(0x20BA520)

	inline static constexpr unsigned int FxMaterialAnimateFloat_TypeDefinitionIndex = 3614;

	class FxMaterialAnimateFloat : public Il2CppObject
	{
	public:
		::System::Single Float; // 0x58
		::System::Boolean isInt; // 0x5C
		::System::Single cachedFloat; // 0x60
		::System::Single savedOriginFloat; // 0x64

		::System::Void SaveOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEFLOAT_SAVEORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void ReturnToOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEFLOAT_RETURNTOORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEFLOAT_REFRESHVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEFLOAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CacheValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEFLOAT_CACHEVALUE_OFFSET))(nullptr);
		}

	};

