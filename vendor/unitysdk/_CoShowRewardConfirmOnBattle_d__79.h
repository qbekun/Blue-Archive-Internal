#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class CameraClearFlags; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define <COSHOWREWARDCONFIRMONBATTLE>D__79_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FF8850)
#define <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF8870)
#define <COSHOWREWARDCONFIRMONBATTLE>D__79_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF8880)
#define <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF8E70)
#define <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1FF8E80)
#define <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF8ED0)

	inline static constexpr unsigned int <CoShowRewardConfirmOnBattle>d__79_TypeDefinitionIndex = 3078;

	class <CoShowRewardConfirmOnBattle>d__79 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* rewardConfirmDatas; // 0x20
		::UnityEngine::Camera* _currentCamera_5__2; // 0x28
		::UnityEngine::Camera* _gameCamera_5__3; // 0x30
		::UnityEngine::CameraClearFlags* _gameCameraClearFlags_5__4; // 0x38
		::System::Single _gameCameraNearClipPlane_5__5; // 0x3C
		::System::Int32 _gameCameraCullingMask_5__6; // 0x40
		::System::Single _gameCameraDepth_5__7; // 0x44
		::UnityEngine::Vector3* _camPosition_5__8; // 0x48
		::UnityEngine::Quaternion* _camRotation_5__9; // 0x54
		::UnityEngine::Vector3* _camScale_5__10; // 0x64

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONBATTLE>D__79_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

