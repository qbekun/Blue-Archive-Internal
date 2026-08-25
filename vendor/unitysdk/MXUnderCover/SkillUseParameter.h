#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXUNDERCOVER_SKILLUSEPARAMETER_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xDBFC00)
#define MXUNDERCOVER_SKILLUSEPARAMETER_SET_INPUTWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDBFC10)
#define MXUNDERCOVER_SKILLUSEPARAMETER_GET_INPUTWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDBFC20)
#define MXUNDERCOVER_SKILLUSEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBEBC0)
#define MXUNDERCOVER_SKILLUSEPARAMETER_SET_TARGETS_OFFSET UNITYSDK_OFFSET(0xDBFC40)

namespace MXUnderCover
{
	inline static constexpr unsigned int SkillUseParameter_TypeDefinitionIndex = 10008;

	class SkillUseParameter : public Il2CppObject
	{
	public:
		Il2CppObject* _Targets_k__BackingField; // 0x10
		::UnityEngine::Vector3* _InputWorldPos_k__BackingField; // 0x18

		Il2CppObject* get_Targets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLUSEPARAMETER_GET_TARGETS_OFFSET))(nullptr);
		}

		::System::Void set_InputWorldPos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLUSEPARAMETER_SET_INPUTWORLDPOS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_InputWorldPos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLUSEPARAMETER_GET_INPUTWORLDPOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLUSEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Targets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_SKILLUSEPARAMETER_SET_TARGETS_OFFSET))(arg, nullptr);
		}

	};
}

