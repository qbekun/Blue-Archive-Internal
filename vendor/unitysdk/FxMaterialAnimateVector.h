#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

#define FXMATERIALANIMATEVECTOR_RETURNTOORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA5B0)
#define FXMATERIALANIMATEVECTOR_CACHEVALUE_OFFSET UNITYSDK_OFFSET(0x20BA650)
#define FXMATERIALANIMATEVECTOR_SAVEORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA6F0)
#define FXMATERIALANIMATEVECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BA790)
#define FXMATERIALANIMATEVECTOR_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x20BA7A0)

	inline static constexpr unsigned int FxMaterialAnimateVector_TypeDefinitionIndex = 3615;

	class FxMaterialAnimateVector : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* Vector; // 0x58
		::UnityEngine::Vector4* cachedVector; // 0x68
		::UnityEngine::Vector4* savedOriginVector; // 0x78

		::System::Void ReturnToOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEVECTOR_RETURNTOORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void CacheValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEVECTOR_CACHEVALUE_OFFSET))(nullptr);
		}

		::System::Void SaveOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEVECTOR_SAVEORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEVECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEVECTOR_REFRESHVALUE_OFFSET))(nullptr);
		}

	};

