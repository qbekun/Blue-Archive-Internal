#pragma once
#include "unitysdk.h"

namespace UnityEngine { class LineRenderer; }

#define LINERENDERERSINWAVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x26E33E0)
#define LINERENDERERSINWAVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x26E3430)
#define LINERENDERERSINWAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E35A0)
#define LINERENDERERSINWAVE_PLAY_OFFSET UNITYSDK_OFFSET(0x26E3440)

	inline static constexpr unsigned int LineRendererSinWave_TypeDefinitionIndex = 389;

	class LineRendererSinWave : public Il2CppObject
	{
	public:
		::System::Single start; // 0x18
		::System::Single end; // 0x1C
		::System::Int32 points; // 0x20
		::System::Single amplitude; // 0x24
		::System::Single frequency; // 0x28
		::UnityEngine::LineRenderer* lineRenderer; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINERENDERERSINWAVE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINERENDERERSINWAVE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINERENDERERSINWAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINERENDERERSINWAVE_PLAY_OFFSET))(nullptr);
		}

	};

