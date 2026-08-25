#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define UIGRAYSCALE_SETFACTOR_OFFSET UNITYSDK_OFFSET(0x23023D0)
#define UIGRAYSCALE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2302400)
#define UIGRAYSCALE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x2302460)
#define UIGRAYSCALE_SETCHILDRENMATERIAL_OFFSET UNITYSDK_OFFSET(0x2302510)
#define UIGRAYSCALE_INACTIVATE_OFFSET UNITYSDK_OFFSET(0x23026B0)
#define UIGRAYSCALE_SETINTENSITY_OFFSET UNITYSDK_OFFSET(0x23026F0)
#define UIGRAYSCALE_SETCHILDMATERIAL_OFFSET UNITYSDK_OFFSET(0x2302600)
#define UIGRAYSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2302720)
#define UIGRAYSCALE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2302740)
#define UIGRAYSCALE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2302780)
#define UIGRAYSCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23027D0)

	inline static constexpr unsigned int UIGrayScale_TypeDefinitionIndex = 225;

	class UIGrayScale : public Il2CppObject
	{
	public:
		::UnityEngine::Material* Mat; // 0x18
		::System::Boolean IncludeChildren; // 0x20
		::System::Single grayScaleFactor; // 0x24
		::System::Single intensity; // 0x28
		::System::Int32 grayscaleFactorID; // 0x2C
		::System::Int32 intensityID; // 0x30

		::System::Void SetFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_SETFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_ACTIVATE_OFFSET))(nullptr);
		}

		::System::Void SetChildrenMaterial(::UnityEngine::Transform* arg, ::UnityEngine::Material* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_SETCHILDRENMATERIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Inactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_INACTIVATE_OFFSET))(nullptr);
		}

		::System::Void SetIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_SETINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetChildMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_SETCHILDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGRAYSCALE_ONENABLE_OFFSET))(nullptr);
		}

	};

