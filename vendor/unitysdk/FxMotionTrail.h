#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector3; }

#define FXMOTIONTRAIL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x20BAD80)
#define FXMOTIONTRAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20BB7E0)
#define FXMOTIONTRAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BB9E0)
#define FXMOTIONTRAIL_UPDATETRAIL_OFFSET UNITYSDK_OFFSET(0x20BB5B0)
#define FXMOTIONTRAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20BBB40)

	inline static constexpr unsigned int FxMotionTrail_TypeDefinitionIndex = 3623;

	class FxMotionTrail : public Il2CppObject
	{
	public:
		::System::String* TrailName; // 0x0
		::System::Boolean AutoControlOfSourceModel; // 0x18
		::Il2CppArray<::System::Object*>* RendererArray; // 0x20
		::System::Single TrailDelay; // 0x28
		::System::Single TrailLifeTime; // 0x2C
		::System::Single MakeMinRange; // 0x30
		::System::Boolean ShadowCast; // 0x34
		::UnityEngine::Material* TrailMaterial; // 0x38
		::Il2CppArray<::System::Object*>* MaterialPropertyAnimationArray; // 0x40
		::System::Boolean Active; // 0x48
		::UnityEngine::Vector3* LastGeneratePosition; // 0x4C
		::System::Single MakeTimer; // 0x58
		Il2CppObject* TrailList; // 0x60

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMOTIONTRAIL_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMOTIONTRAIL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMOTIONTRAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateTrail(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FXMOTIONTRAIL_UPDATETRAIL_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMOTIONTRAIL_ONENABLE_OFFSET))(nullptr);
		}

	};

