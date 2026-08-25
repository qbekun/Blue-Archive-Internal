#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MeshRenderer; }
class UITexture;
namespace UnityEngine { class Material; }

#define GLITCHRGB_UPDATE_OFFSET UNITYSDK_OFFSET(0xC10930)
#define GLITCHRGB_AWAKE_OFFSET UNITYSDK_OFFSET(0xC10A50)
#define GLITCHRGB__INITTEXTURE_B__13_0_OFFSET UNITYSDK_OFFSET(0xC10CE0)
#define GLITCHRGB_.CTOR_OFFSET UNITYSDK_OFFSET(0xC10D30)
#define GLITCHRGB_INITTEXTURE_OFFSET UNITYSDK_OFFSET(0xC10AB0)
#define GLITCHRGB_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC10D40)
#define GLITCHRGB_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xC10D50)

	inline static constexpr unsigned int GlitchRGB_TypeDefinitionIndex = 8836;

	class GlitchRGB : public Il2CppObject
	{
	public:
		::UnityEngine::MeshRenderer* plane; // 0x18
		UITexture* texture; // 0x20
		::System::Single intensity; // 0x28
		::System::Single interval; // 0x2C
		::System::Boolean drawBackground; // 0x30
		::System::Int32 intensityId; // 0x34
		::System::Int32 timeId; // 0x38
		::System::Single elapsedTime; // 0x3C
		::System::Single intensityValue; // 0x40

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _InitTexture_b__13_0(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB__INITTEXTURE_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_INITTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLITCHRGB_ONVALIDATE_OFFSET))(nullptr);
		}

	};

