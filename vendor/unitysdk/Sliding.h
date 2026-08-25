#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCPlayer; }
namespace MXUnderCover { class SkillUseParameter; }

#define SLIDING__CO_INTERNALINVOKE_G__END|5_0_OFFSET UNITYSDK_OFFSET(0xDA3B60)
#define SLIDING_UPDATESKILLAREAGUIDE_OFFSET UNITYSDK_OFFSET(0xDA3BE0)
#define SLIDING_GETHITDESTPOS_OFFSET UNITYSDK_OFFSET(0xDA3F10)
#define SLIDING_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA44E0)
#define SLIDING_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xDA4560)
#define SLIDING_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA45C0)
#define SLIDING_UPDATETARGETWITHOUTINPUT_OFFSET UNITYSDK_OFFSET(0xDA4680)

	inline static constexpr unsigned int Sliding_TypeDefinitionIndex = 9849;

	class Sliding : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* movingCurve; // 0x38
		::System::Single movingDuration; // 0x40
		::System::Single inputAvailableFrame; // 0x44
		::Il2CppArray<::System::Object*>* hits; // 0x48

		::System::Void _co_InternalInvoke_g__End|5_0(<>c__DisplayClass5_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass5_0&*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING__CO_INTERNALINVOKE_G__END|5_0_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSkillAreaGuide(::MXUnderCover::UCEntity* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::System::Boolean, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING_UPDATESKILLAREAGUIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector3* GetHitDestPos(::MXUnderCover::UCPlayer* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::MXUnderCover::UCPlayer*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING_GETHITDESTPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLIDING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateTargetWithoutInput(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SLIDING_UPDATETARGETWITHOUTINPUT_OFFSET))(arg, arg2, nullptr);
		}

	};

