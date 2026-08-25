#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class SkillUseParameter; }

#define WIRECUTTER_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xDA1CA0)
#define WIRECUTTER_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA24B0)
#define WIRECUTTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA2570)

	inline static constexpr unsigned int WireCutter_TypeDefinitionIndex = 9843;

	class WireCutter : public Il2CppObject
	{
	public:
		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WIRECUTTER_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + WIRECUTTER_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIRECUTTER_.CTOR_OFFSET))(nullptr);
		}

	};

