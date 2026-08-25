#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
class TimeState;
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCSkillLogic; }
class ComparerRaycastHitDistanceDescending;
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class SkillUseParameter; }

#define MXUNDERCOVER_UCSTAGETIMEHANDLER_PROCESSSKILLRANGEGUIDE_OFFSET UNITYSDK_OFFSET(0xDBD9C0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDBDA00)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB8EA0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_CO_BULLETTIME_OFFSET UNITYSDK_OFFSET(0xDBDA20)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_STARTPAUSE_OFFSET UNITYSDK_OFFSET(0xDB6260)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_CHECKCANPAUSE_OFFSET UNITYSDK_OFFSET(0xDBDAC0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_ISOVERUI_OFFSET UNITYSDK_OFFSET(0xDBDAF0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_CONVERTINPUTTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDBDDB0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDBE920)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_ISBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDBE930)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_ENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDBE940)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_GETINPUTSTATUS_OFFSET UNITYSDK_OFFSET(0xDBEDC0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xDB5D40)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_FORCEENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDB2CE0)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_PROCESSSKILLAREAGUIDE_OFFSET UNITYSDK_OFFSET(0xDBEC00)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_ENDPAUSE_OFFSET UNITYSDK_OFFSET(0xDB6360)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_ENTERBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDBF380)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_CANUSEINPUT_OFFSET UNITYSDK_OFFSET(0xDBF600)
#define MXUNDERCOVER_UCSTAGETIMEHANDLER_FINDTOUCHINDEX_OFFSET UNITYSDK_OFFSET(0xDBF290)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCStageTimeHandler_TypeDefinitionIndex = 10007;

	class UCStageTimeHandler : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		TimeState* timeState; // 0x18
		CoroutineAsyncOperation* coBulletTime; // 0x20
		::MXUnderCover::UCSkillLogic* skillLogic; // 0x28
		::System::Int32 pressTouchId; // 0x30
		Il2CppObject* Targets; // 0x38
		::Il2CppArray<::System::Object*>* raycastHits; // 0x40
		ComparerRaycastHitDistanceDescending* comparerRaycastHitDistanceDescending; // 0x48
		::System::Object* BulletTimeSender; // 0x50

		::System::Void ProcessSkillRangeGuide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_PROCESSSKILLRANGEGUIDE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_BulletTime(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_CO_BULLETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void StartPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_STARTPAUSE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCanPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_CHECKCANPAUSE_OFFSET))(nullptr);
		}

		::System::Boolean IsOverUI(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_ISOVERUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean ConvertInputToWorldPos(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_CONVERTINPUTTOWORLDPOS_OFFSET))(arg, arg2, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBulletTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_ISBULLETTIME_OFFSET))(nullptr);
		}

		::System::Void EndBulletTime(::System::Boolean arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_ENDBULLETTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GetInputStatus(::UnityEngine::Vector3&* arg, bool&* arg2, bool&* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_GETINPUTSTATUS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_GET_ISPAUSE_OFFSET))(nullptr);
		}

		::System::Void ForceEndBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_FORCEENDBULLETTIME_OFFSET))(nullptr);
		}

		::System::Void ProcessSkillAreaGuide(::System::Boolean arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_PROCESSSKILLAREAGUIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_ENDPAUSE_OFFSET))(nullptr);
		}

		::System::Void EnterBulletTime(::System::Object* arg, ::System::Boolean arg2, ::MXUnderCover::UCSkillLogic* arg3, ::System::String* str, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::MXUnderCover::UCSkillLogic*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_ENTERBULLETTIME_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

		::System::Boolean CanUseInput(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_CANUSEINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 FindTouchIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGETIMEHANDLER_FINDTOUCHINDEX_OFFSET))(nullptr);
		}

	};
}

