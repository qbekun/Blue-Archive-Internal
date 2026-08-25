#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define CINEMACHINEMIXER_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x281C6E0)
#define CINEMACHINEMIXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x281C6F0)
#define CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x281C700)
#define CINEMACHINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x281C830)
#define CINEMACHINEMIXER_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x281D140)

	inline static constexpr unsigned int CinemachineMixer_TypeDefinitionIndex = 34187;

	class CinemachineMixer : public Il2CppObject
	{
	public:
		MasterDirectorDelegate* GetMasterPlayableDirector; // 0x0
		::Cinemachine::CinemachineBrain* mBrain; // 0x10
		::System::Int32 mBrainOverrideId; // 0x18
		::System::Boolean mPreviewPlay; // 0x1C

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetDeltaTime(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_GETDELTATIME_OFFSET))(arg, nullptr);
		}

	};

