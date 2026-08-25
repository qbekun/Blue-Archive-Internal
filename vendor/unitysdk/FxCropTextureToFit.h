#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Texture; }

#define FXCROPTEXTURETOFIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B76B0)
#define FXCROPTEXTURETOFIT_REFRESH_OFFSET UNITYSDK_OFFSET(0x20B7770)
#define FXCROPTEXTURETOFIT_RESETTOORIGINALST_OFFSET UNITYSDK_OFFSET(0x20B76C0)
#define FXCROPTEXTURETOFIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B79B0)
#define FXCROPTEXTURETOFIT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B7A70)
#define FXCROPTEXTURETOFIT_CACHEORIGINALST_OFFSET UNITYSDK_OFFSET(0x20B7B00)
#define FXCROPTEXTURETOFIT_SETASPECTFROMTRANSFORMSCALE_OFFSET UNITYSDK_OFFSET(0x20B7BB0)
#define FXCROPTEXTURETOFIT_UPDATE_OFFSET UNITYSDK_OFFSET(0x20B7C20)

	inline static constexpr unsigned int FxCropTextureToFit_TypeDefinitionIndex = 3603;

	class FxCropTextureToFit : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x18
		::System::String* texName; // 0x20
		::System::Single aspect; // 0x28
		::System::Boolean aspectFromTransform; // 0x2C
		::System::Int32 texId; // 0x30
		::UnityEngine::Vector2* originalScale; // 0x34
		::UnityEngine::Vector2* originalOffset; // 0x3C
		::UnityEngine::Texture* previousTexture; // 0x48
		::System::Single previousAspect; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void ResetToOriginalST()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_RESETTOORIGINALST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CacheOriginalST()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_CACHEORIGINALST_OFFSET))(nullptr);
		}

		::System::Void SetAspectFromTransformScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_SETASPECTFROMTRANSFORMSCALE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCROPTEXTURETOFIT_UPDATE_OFFSET))(nullptr);
		}

	};

