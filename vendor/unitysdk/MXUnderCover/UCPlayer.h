#pragma once
#include "../unitysdk.h"

class UCPlayerDescription;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCCountingBool; }
namespace MXUnderCover::Animation { class UCPlayerAniController; }
namespace MXUnderCover { class UCEntityModel; }
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }
namespace MXUnderCover { class UCPlayerController; }
namespace MXUnderCover { class UCEntityTypes; }
namespace MXUnderCover { class UCPlayerModel; }
namespace UnityEngine { class MonoBehaviour; }

#define MXUNDERCOVER_UCPLAYER_GET_PLAYERANICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD89980)
#define MXUNDERCOVER_UCPLAYER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xD899C0)
#define MXUNDERCOVER_UCPLAYER_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0xD89A40)
#define MXUNDERCOVER_UCPLAYER_EXTRACTMODEL_OFFSET UNITYSDK_OFFSET(0xD89A50)
#define MXUNDERCOVER_UCPLAYER_SET_LASTMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xD89A60)
#define MXUNDERCOVER_UCPLAYER_ONINPUTLEFTSTICK_OFFSET UNITYSDK_OFFSET(0xD89A80)
#define MXUNDERCOVER_UCPLAYER_BINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD89FF0)
#define MXUNDERCOVER_UCPLAYER_GET_LASTMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xD8A070)
#define MXUNDERCOVER_UCPLAYER_UNBINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD8A090)
#define MXUNDERCOVER_UCPLAYER_SET_ISWALKING_OFFSET UNITYSDK_OFFSET(0xD8A0E0)
#define MXUNDERCOVER_UCPLAYER_GET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xD89F40)
#define MXUNDERCOVER_UCPLAYER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD8A100)
#define MXUNDERCOVER_UCPLAYER_SET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xD8A110)
#define MXUNDERCOVER_UCPLAYER_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD8A130)
#define MXUNDERCOVER_UCPLAYER_ONBULLETTIMEDRAG_OFFSET UNITYSDK_OFFSET(0xD8A7B0)
#define MXUNDERCOVER_UCPLAYER__CREATEVISUAL_G__CO_CREATEVISUAL|34_1_OFFSET UNITYSDK_OFFSET(0xD8A7C0)
#define MXUNDERCOVER_UCPLAYER_SET_ISHIDDENBOX_OFFSET UNITYSDK_OFFSET(0xD8A870)
#define MXUNDERCOVER_UCPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8A890)
#define MXUNDERCOVER_UCPLAYER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD8A9F0)
#define MXUNDERCOVER_UCPLAYER_GET_CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xD8AA20)
#define MXUNDERCOVER_UCPLAYER_CREATEVISUAL_OFFSET UNITYSDK_OFFSET(0xD8AA30)
#define MXUNDERCOVER_UCPLAYER_GET_ISWALKING_OFFSET UNITYSDK_OFFSET(0xD8AB30)
#define MXUNDERCOVER_UCPLAYER_ONCHANGEDPLAYER_OFFSET UNITYSDK_OFFSET(0xD8AB40)
#define MXUNDERCOVER_UCPLAYER_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0xD8AB50)
#define MXUNDERCOVER_UCPLAYER_GET_ISHIDDENBOX_OFFSET UNITYSDK_OFFSET(0xD8AB70)
#define MXUNDERCOVER_UCPLAYER_GET_ISMOVINGBLOCK_OFFSET UNITYSDK_OFFSET(0xD8AB80)
#define MXUNDERCOVER_UCPLAYER_SET_ISMOVINGBLOCK_OFFSET UNITYSDK_OFFSET(0xD8AB90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlayer_TypeDefinitionIndex = 9699;

	class UCPlayer : public Il2CppObject
	{
	public:
		::System::Single DetectionRadius; // 0x90
		UCPlayerDescription* Description; // 0x98
		::UnityEngine::Transform* _cameraTransform_k__BackingField; // 0xA0
		::UnityEngine::Vector3* _LastMoveInput_k__BackingField; // 0xA8
		::MXUnderCover::UCCountingBool* _IsMovingBlock_k__BackingField; // 0xB8
		::MXUnderCover::UCCountingBool* _IsHidden_k__BackingField; // 0xC0
		::MXUnderCover::UCCountingBool* _IsHiddenBox_k__BackingField; // 0xC8
		::MXUnderCover::UCCountingBool* _IsWalking_k__BackingField; // 0xD0

		::MXUnderCover::Animation::UCPlayerAniController* get_PlayerAniController()
		{
			return ((::MXUnderCover::Animation::UCPlayerAniController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_PLAYERANICONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		::MXUnderCover::UCCountingBool* get_IsHidden()
		{
			return ((::MXUnderCover::UCCountingBool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_ISHIDDEN_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityModel* ExtractModel(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2)
		{
			return ((::MXUnderCover::UCEntityModel*(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_EXTRACTMODEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_LastMoveInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_LASTMOVEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnInputLeftStick(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_ONINPUTLEFTSTICK_OFFSET))(arg, nullptr);
		}

		::System::Void BindController(::MXUnderCover::UCPlayerController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_BINDCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_LastMoveInput()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_LASTMOVEINPUT_OFFSET))(nullptr);
		}

		::System::Void UnbindController(::MXUnderCover::UCPlayerController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_UNBINDCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWalking(::MXUnderCover::UCCountingBool* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCCountingBool*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_ISWALKING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_CAMERATRANSFORM_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_cameraTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_CAMERATRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SyncToModel(::MXUnderCover::UCEntityModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SYNCTOMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnBulletTimeDrag(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_ONBULLETTIMEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _CreateVisual_g__co_CreateVisual|34_1(::MXUnderCover::UCPlayerModel* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCPlayerModel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER__CREATEVISUAL_G__CO_CREATEVISUAL|34_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsHiddenBox(::MXUnderCover::UCCountingBool* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCCountingBool*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_ISHIDDENBOX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_ONINITIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_cameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_CAMERATRANSFORM_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVisual(::UnityEngine::MonoBehaviour* arg, ::MXUnderCover::UCPlayerModel* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::MonoBehaviour*, ::MXUnderCover::UCPlayerModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_CREATEVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::MXUnderCover::UCCountingBool* get_IsWalking()
		{
			return ((::MXUnderCover::UCCountingBool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_ISWALKING_OFFSET))(nullptr);
		}

		::System::Void OnChangedPlayer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_ONCHANGEDPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsHidden(::MXUnderCover::UCCountingBool* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCCountingBool*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_ISHIDDEN_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCCountingBool* get_IsHiddenBox()
		{
			return ((::MXUnderCover::UCCountingBool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_ISHIDDENBOX_OFFSET))(nullptr);
		}

		::MXUnderCover::UCCountingBool* get_IsMovingBlock()
		{
			return ((::MXUnderCover::UCCountingBool*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_GET_ISMOVINGBLOCK_OFFSET))(nullptr);
		}

		::System::Void set_IsMovingBlock(::MXUnderCover::UCCountingBool* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCCountingBool*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYER_SET_ISMOVINGBLOCK_OFFSET))(arg, nullptr);
		}

	};
}

