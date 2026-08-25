#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCPlayer; }
namespace UnityEngine { class Quaternion; }
namespace MXUnderCover::Animation { class UCPlayerAniController; }

#define <ROTATELERP>D__53_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA68E0)
#define <ROTATELERP>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA6900)
#define <ROTATELERP>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA6910)
#define <ROTATELERP>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA6CD0)
#define <ROTATELERP>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA6CE0)
#define <ROTATELERP>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA6D30)

	inline static constexpr unsigned int <RotateLerp>d__53_TypeDefinitionIndex = 9860;

	class <RotateLerp>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Vector3* targetPos; // 0x20
		::MXUnderCover::UCPlayer* player; // 0x30
		::UnityEngine::Vector3* _forward_5__2; // 0x38
		::UnityEngine::Quaternion* _rot_5__3; // 0x44
		::System::Single _angle_5__4; // 0x54
		::System::Single _rotSpeedBackup_5__5; // 0x58
		::MXUnderCover::Animation::UCPlayerAniController* _aniController_5__6; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELERP>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

