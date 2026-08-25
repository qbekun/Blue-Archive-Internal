#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }
class TBGUnitFxVisual;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
class TBGUnitVisual;
class TBGTileMapVisual;

#define TBGUNITVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2094F40)
#define TBGUNITVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2094F90)
#define TBGUNITVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x2095040)
#define TBGUNITVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x2095150)
#define TBGUNITVISUAL_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0x2095000)
#define TBGUNITVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x208D7A0)
#define TBGUNITVISUAL_WAITFORANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x2095250)
#define TBGUNITVISUAL_INITIALIZEHEXAUNIT_OFFSET UNITYSDK_OFFSET(0x2092D40)
#define TBGUNITVISUAL_COMOVE_OFFSET UNITYSDK_OFFSET(0x2095310)
#define TBGUNITVISUAL_COMOVETONEXTTILE_OFFSET UNITYSDK_OFFSET(0x2095400)
#define TBGUNITVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20954D0)

	inline static constexpr unsigned int TBGUnitVisual_TypeDefinitionIndex = 3506;

	class TBGUnitVisual : public Il2CppObject
	{
	public:
		::System::String* MODEL_PATH; // 0x0
		::System::Single MOVE_DURATION_PER_TILE; // 0x0
		::System::String* fxPath; // 0x18
		::MX::Campaign::HexLocation* Location; // 0x20
		TBGUnitFxVisual* FxVisual; // 0x30
		::UnityEngine::Animator* ani; // 0x38
		::System::Action* onEnable; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_SETLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_PLAYIDLE_OFFSET))(nullptr);
		}

		::System::Action* PlayAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Action*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_PLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitForAnimationEnd(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_WAITFORANIMATIONEND_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeHexaUnit(TBGUnitVisual* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(TBGUnitVisual*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_INITIALIZEHEXAUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoMove(TBGTileMapVisual* arg, ::MX::Campaign::HexLocation* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(TBGTileMapVisual*, ::MX::Campaign::HexLocation*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_COMOVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToNextTile(TBGTileMapVisual* arg, ::MX::Campaign::HexLocation* arg2, ::MX::Campaign::HexLocation* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(TBGTileMapVisual*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_COMOVETONEXTTILE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGUNITVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

