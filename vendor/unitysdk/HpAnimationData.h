#pragma once
#include "unitysdk.h"

#define HPANIMATIONDATA_GET_ISSTEPCHANGED_OFFSET UNITYSDK_OFFSET(0x25CD940)
#define HPANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CD440)
#define HPANIMATIONDATA_GET_HASTEMPORARYHP_OFFSET UNITYSDK_OFFSET(0x25CDE90)
#define HPANIMATIONDATA_GET_ANIMATIONSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x25CD970)
#define HPANIMATIONDATA_GET_TARGETSTEP_OFFSET UNITYSDK_OFFSET(0x25CD2D0)
#define HPANIMATIONDATA_GET_TARGETHPVALUE_OFFSET UNITYSDK_OFFSET(0x25CDEB0)
#define HPANIMATIONDATA_GET_CURRENTSTEP_OFFSET UNITYSDK_OFFSET(0x25CD1D0)
#define HPANIMATIONDATA_GET_CURRENTANIMATEDVALUE_OFFSET UNITYSDK_OFFSET(0x25CDEA0)
#define HPANIMATIONDATA_GET_HPSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0x25CD9D0)
#define HPANIMATIONDATA_GET_PREVSTEP_OFFSET UNITYSDK_OFFSET(0x25CDDB0)
#define HPANIMATIONDATA_GET_PREVANIMATEDVALUE_OFFSET UNITYSDK_OFFSET(0x25CDEC0)

	inline static constexpr unsigned int HpAnimationData_TypeDefinitionIndex = 6341;

	class HpAnimationData : public Il2CppObject
	{
	public:
		::System::Single ElapsedTime; // 0x10
		::System::Single Delay; // 0x14
		::System::Single TargetHpRate; // 0x18
		::System::Single PrevAnimatedHpRate; // 0x1C
		::System::Single CurrentAnimatedHpRate; // 0x20
		::System::Single Speed; // 0x24
		::System::Single InitialLogX; // 0x28
		::System::Single LogX; // 0x2C
		::System::Single LogRate; // 0x30
		::System::Int32 MaxStep; // 0x34

		::System::Boolean get_IsStepChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_ISSTEPCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_hasTemporaryHp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_HASTEMPORARYHP_OFFSET))(nullptr);
		}

		::System::Single get_AnimationSliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_ANIMATIONSLIDERVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_TARGETSTEP_OFFSET))(nullptr);
		}

		::System::Single get_TargetHpValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_TARGETHPVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_CURRENTSTEP_OFFSET))(nullptr);
		}

		::System::Single get_CurrentAnimatedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_CURRENTANIMATEDVALUE_OFFSET))(nullptr);
		}

		::System::Single get_HpSliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_HPSLIDERVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_PrevStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_PREVSTEP_OFFSET))(nullptr);
		}

		::System::Single get_PrevAnimatedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANIMATIONDATA_GET_PREVANIMATEDVALUE_OFFSET))(nullptr);
		}

	};

