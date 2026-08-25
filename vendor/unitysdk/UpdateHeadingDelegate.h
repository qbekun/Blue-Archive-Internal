#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace UnityEngine { class Vector3; }

#define UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x284D310)
#define UPDATEHEADINGDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x284D0E0)
#define UPDATEHEADINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x284D3C0)
#define UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x284D400)

	inline static constexpr unsigned int UpdateHeadingDelegate_TypeDefinitionIndex = 34261;

	class UpdateHeadingDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineOrbitalTransposer* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEHEADINGDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEHEADINGDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Invoke(::Cinemachine::CinemachineOrbitalTransposer* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEHEADINGDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEHEADINGDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

