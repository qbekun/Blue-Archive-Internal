#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class SkillCardInputInfo; }

#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1384730)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_GUIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1384750)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1384770)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_ISIGNORECOOLTIME_OFFSET UNITYSDK_OFFSET(0x1384780)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_ISIGNORECOOLTIME_OFFSET UNITYSDK_OFFSET(0x1384790)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x13847A0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_SELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x13847B0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_AUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x13847C0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_GUIDEDIRECTION_OFFSET UNITYSDK_OFFSET(0x13847D0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_AUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x13847E0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_GUIDEDIRECTION_OFFSET UNITYSDK_OFFSET(0x13847F0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_AUTOTARGETED_OFFSET UNITYSDK_OFFSET(0x1382FC0)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_ISAUTOUSE_OFFSET UNITYSDK_OFFSET(0x1384810)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_SELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x1384820)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_ISAUTOUSE_OFFSET UNITYSDK_OFFSET(0x1384830)
#define MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_GUIDEPOSITION_OFFSET UNITYSDK_OFFSET(0x1384840)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillCardInputInfo_TypeDefinitionIndex = 14395;

	class SkillCardInputInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _InputPosition_k__BackingField; // 0x10
		::UnityEngine::Vector3* _GuidePosition_k__BackingField; // 0x1C
		::UnityEngine::Vector3* _GuideDirection_k__BackingField; // 0x28
		Il2CppObject* _SelectTargets_k__BackingField; // 0x38
		::System::Boolean _AutoTargeting_k__BackingField; // 0x40
		::System::Boolean _IsAutoUse_k__BackingField; // 0x41
		::System::Boolean _IsIgnoreCoolTime_k__BackingField; // 0x42

		::UnityEngine::Vector3* get_InputPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_GuidePosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_GUIDEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_InputPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsIgnoreCoolTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_ISIGNORECOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsIgnoreCoolTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_ISIGNORECOOLTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_SELECTTARGETS_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoTargeting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_AUTOTARGETING_OFFSET))(nullptr);
		}

		::System::Void set_GuideDirection(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_GUIDEDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoTargeting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_AUTOTARGETING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_GuideDirection()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_GUIDEDIRECTION_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::SkillCardInputInfo* get_AutoTargeted()
		{
			return ((::MX::Logic::Battles::SkillCardInputInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_AUTOTARGETED_OFFSET))(nullptr);
		}

		::System::Void set_IsAutoUse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_ISAUTOUSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_SELECTTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAutoUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_GET_ISAUTOUSE_OFFSET))(nullptr);
		}

		::System::Void set_GuidePosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDINPUTINFO_SET_GUIDEPOSITION_OFFSET))(arg, nullptr);
		}

	};
}

