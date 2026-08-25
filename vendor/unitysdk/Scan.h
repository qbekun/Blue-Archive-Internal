#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }
namespace UnityEngine { class Vector3; }

#define SCAN_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA5360)
#define SCAN_UPDATESKILLAREAGUIDE_OFFSET UNITYSDK_OFFSET(0xDA5420)
#define SCAN_UPDATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xDA5540)
#define SCAN_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xDA5790)
#define SCAN_UPDATETARGETWITHOUTINPUT_OFFSET UNITYSDK_OFFSET(0xDA5C40)
#define SCAN_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA5CD0)

	inline static constexpr unsigned int Scan_TypeDefinitionIndex = 9853;

	class Scan : public Il2CppObject
	{
	public:
		Il2CppObject* prevTargets; // 0x38

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + SCAN_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateSkillAreaGuide(::MXUnderCover::UCEntity* arg, ::System::Boolean arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::System::Boolean, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SCAN_UPDATESKILLAREAGUIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateHighlight(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCAN_UPDATEHIGHLIGHT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCAN_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UpdateTargetWithoutInput(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCAN_UPDATETARGETWITHOUTINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCAN_.CTOR_OFFSET))(nullptr);
		}

	};

