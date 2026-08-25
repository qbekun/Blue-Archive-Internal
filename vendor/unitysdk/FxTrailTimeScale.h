#pragma once
#include "unitysdk.h"

namespace UnityEngine { class TrailRenderer; }

#define FXTRAILTIMESCALE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20BF260)
#define FXTRAILTIMESCALE_STEPPARKINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x20BF2B0)
#define FXTRAILTIMESCALE_FINISHPARKINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x20BF350)
#define FXTRAILTIMESCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0x20BF3C0)
#define FXTRAILTIMESCALE_ISPARKINGSEQUENCEFINISHED_OFFSET UNITYSDK_OFFSET(0x20BF640)
#define FXTRAILTIMESCALE_INITNORMALMODE_OFFSET UNITYSDK_OFFSET(0x20BF440)
#define FXTRAILTIMESCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BF670)
#define FXTRAILTIMESCALE_INITPARKINGMODE_OFFSET UNITYSDK_OFFSET(0x20BF4B0)

	inline static constexpr unsigned int FxTrailTimeScale_TypeDefinitionIndex = 3630;

	class FxTrailTimeScale : public Il2CppObject
	{
	public:
		::System::Single killUnderTimeScale; // 0x18
		::UnityEngine::TrailRenderer* trail; // 0x20
		::System::Boolean isParkingMode; // 0x28
		Il2CppObject* parkingPosList; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void StepParkingSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_STEPPARKINGSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void FinishParkingSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_FINISHPARKINGSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsParkingSequenceFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_ISPARKINGSEQUENCEFINISHED_OFFSET))(nullptr);
		}

		::System::Void InitNormalMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_INITNORMALMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitParkingMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTRAILTIMESCALE_INITPARKINGMODE_OFFSET))(nullptr);
		}

	};

