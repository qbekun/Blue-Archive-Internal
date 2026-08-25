#pragma once
#include "unitysdk.h"

class OutRimLightType;
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
class MXOutlineRimLight;

#define MXOUTLINERIMLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D3B40)
#define MXOUTLINERIMLIGHT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20D3E00)
#define MXOUTLINERIMLIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D4280)
#define MXOUTLINERIMLIGHT_SETTRANSFORMRANGEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D42A0)
#define MXOUTLINERIMLIGHT_CLEARALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D3C40)
#define MXOUTLINERIMLIGHT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D4460)
#define MXOUTLINERIMLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D45E0)
#define MXOUTLINERIMLIGHT_SETSPOTANGLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D46C0)
#define MXOUTLINERIMLIGHT_UPDATELIGHT_OFFSET UNITYSDK_OFFSET(0x20D3E10)
#define MXOUTLINERIMLIGHT_SETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D4910)
#define MXOUTLINERIMLIGHT_SETCOLORINTENSITYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D4840)
#define MXOUTLINERIMLIGHT_SETTYPEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20D47B0)

	inline static constexpr unsigned int MXOutlineRimLight_TypeDefinitionIndex = 3720;

	class MXOutlineRimLight : public Il2CppObject
	{
	public:
		::System::Int32 DirectionAngleId; // 0x0
		::System::Int32 PositionRangeId; // 0x4
		::System::Int32 SpotAngleId; // 0x8
		::System::Int32 LightColorId; // 0xC
		::System::String* PointLightKeyword; // 0x0
		::System::String* SpotLightKeyword; // 0x0
		OutRimLightType* outRimLightType; // 0x18
		::System::Single outRimIntensity; // 0x1C
		::UnityEngine::Color* outRimColor; // 0x20
		::UnityEngine::Vector2* outRimSpotAngle; // 0x30
		::System::Single outRimRange; // 0x38
		OutRimLightType* prevLightType; // 0x3C
		::System::Single prevIntensity; // 0x40
		::UnityEngine::Color* prevColor; // 0x44
		::UnityEngine::Vector2* prevSpotAngle; // 0x54
		::System::Single prevRange; // 0x5C
		Il2CppObject* lightStack; // 0x10
		::System::Object* stackHandle; // 0x60

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTransformRangeProperties(MXOutlineRimLight* arg)
		{
			((::System::Void(*)(MXOutlineRimLight*, ::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_SETTRANSFORMRANGEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAllProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_CLEARALLPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetSpotAngleProperties(MXOutlineRimLight* arg)
		{
			((::System::Void(*)(MXOutlineRimLight*, ::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_SETSPOTANGLEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_UPDATELIGHT_OFFSET))(nullptr);
		}

		::System::Void SetAllProperties(MXOutlineRimLight* arg)
		{
			((::System::Void(*)(MXOutlineRimLight*, ::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_SETALLPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void SetColorIntensityProperties(MXOutlineRimLight* arg)
		{
			((::System::Void(*)(MXOutlineRimLight*, ::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_SETCOLORINTENSITYPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void SetTypeProperties(MXOutlineRimLight* arg)
		{
			((::System::Void(*)(MXOutlineRimLight*, ::PVOID))((::PBYTE)hIl2Cpp + MXOUTLINERIMLIGHT_SETTYPEPROPERTIES_OFFSET))(arg, nullptr);
		}

	};

