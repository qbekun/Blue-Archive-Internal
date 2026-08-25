#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define PARTICLEINTERRUPT_SETPARTICLEFINISHED_OFFSET UNITYSDK_OFFSET(0x20CD1D0)
#define PARTICLEINTERRUPT_GET_TRANSFORMPARENTREMOVED_OFFSET UNITYSDK_OFFSET(0x20CD1E0)
#define PARTICLEINTERRUPT_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x20CD1F0)
#define PARTICLEINTERRUPT_SET_REMOVED_OFFSET UNITYSDK_OFFSET(0x20CD200)
#define PARTICLEINTERRUPT_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x20CD210)
#define PARTICLEINTERRUPT_GET_INTERRUPTED_OFFSET UNITYSDK_OFFSET(0x20CD220)
#define PARTICLEINTERRUPT_SET_FINISHED_OFFSET UNITYSDK_OFFSET(0x20CD230)
#define PARTICLEINTERRUPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20CD240)
#define PARTICLEINTERRUPT_INTERRUPTWITHREMOVED_OFFSET UNITYSDK_OFFSET(0x20CD250)
#define PARTICLEINTERRUPT_SET_EFFECT_OFFSET UNITYSDK_OFFSET(0x20CD260)
#define PARTICLEINTERRUPT_SETTRANSFORMPARENTREMOVED_OFFSET UNITYSDK_OFFSET(0x20CD270)
#define PARTICLEINTERRUPT_SET_TRANSFORMPARENTREMOVED_OFFSET UNITYSDK_OFFSET(0x20CD280)
#define PARTICLEINTERRUPT_GET_REMOVED_OFFSET UNITYSDK_OFFSET(0x20CD290)
#define PARTICLEINTERRUPT_SET_INTERRUPTED_OFFSET UNITYSDK_OFFSET(0x20CD2A0)
#define PARTICLEINTERRUPT_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x20CD2B0)

	inline static constexpr unsigned int ParticleInterrupt_TypeDefinitionIndex = 3677;

	class ParticleInterrupt : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _Effect_k__BackingField; // 0x10
		::System::Boolean _Interrupted_k__BackingField; // 0x18
		::System::Boolean _Removed_k__BackingField; // 0x19
		::System::Boolean _Finished_k__BackingField; // 0x1A
		::System::Boolean _TransformParentRemoved_k__BackingField; // 0x1B

		::System::Void SetParticleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SETPARTICLEFINISHED_OFFSET))(nullptr);
		}

		::System::Boolean get_TransformParentRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_GET_TRANSFORMPARENTREMOVED_OFFSET))(nullptr);
		}

		::System::Boolean get_Finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_GET_FINISHED_OFFSET))(nullptr);
		}

		::System::Void set_Removed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SET_REMOVED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_Effect()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_GET_EFFECT_OFFSET))(nullptr);
		}

		::System::Boolean get_Interrupted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_GET_INTERRUPTED_OFFSET))(nullptr);
		}

		::System::Void set_Finished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SET_FINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InterruptWithRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_INTERRUPTWITHREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_Effect(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SET_EFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransformParentRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SETTRANSFORMPARENTREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_TransformParentRemoved(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SET_TRANSFORMPARENTREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Removed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_GET_REMOVED_OFFSET))(nullptr);
		}

		::System::Void set_Interrupted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_SET_INTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINTERRUPT_INTERRUPT_OFFSET))(nullptr);
		}

	};

