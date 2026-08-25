#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }

#define UPDATESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2865690)
#define UPDATESTATUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2865780)
#define UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x28659C0)
#define UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x28659D0)

	inline static constexpr unsigned int UpdateStatus_TypeDefinitionIndex = 34342;

	class UpdateStatus : public Il2CppObject
	{
	public:
		::System::Int32 kWindowSize; // 0x0
		::System::Int32 windowStart; // 0x10
		::System::Int32 numWindowLateUpdateMoves; // 0x14
		::System::Int32 numWindowFixedUpdateMoves; // 0x18
		::System::Int32 numWindows; // 0x1C
		::System::Int32 lastFrameUpdated; // 0x20
		::UnityEngine::Matrix4x4* lastPos; // 0x24
		UpdateClock* _PreferredUpdate_k__BackingField; // 0x64

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATESTATUS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnUpdate(::System::Int32 arg, UpdateClock* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, UpdateClock*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATESTATUS_ONUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_PreferredUpdate(UpdateClock* arg)
		{
			((::System::Void(*)(UpdateClock*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET))(arg, nullptr);
		}

		UpdateClock* get_PreferredUpdate()
		{
			return (return (UpdateClock*(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET))(nullptr);
		}

	};

