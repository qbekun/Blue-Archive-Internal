#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ANIMATORSTATEINFO_ISNAME_OFFSET UNITYSDK_OFFSET(0xA1C66B0)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_FULLPATHHASH_OFFSET UNITYSDK_OFFSET(0xA1C6740)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0xA1C6750)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xA1C6760)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA1C6770)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA1C6780)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_SPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA1C6790)
#define UNITYENGINE_ANIMATORSTATEINFO_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA1C67A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorStateInfo_TypeDefinitionIndex = 36463;

	class AnimatorStateInfo : public Il2CppObject
	{
	public:
		::System::Int32 m_Name; // 0x10
		::System::Int32 m_Path; // 0x14
		::System::Int32 m_FullPath; // 0x18
		::System::Single m_NormalizedTime; // 0x1C
		::System::Single m_Length; // 0x20
		::System::Single m_Speed; // 0x24
		::System::Single m_SpeedMultiplier; // 0x28
		::System::Int32 m_Tag; // 0x2C
		::System::Int32 m_Loop; // 0x30

		::System::Boolean IsName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_ISNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_fullPathHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_FULLPATHHASH_OFFSET))(nullptr);
		}

		::System::Int32 get_shortNameHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SHORTNAMEHASH_OFFSET))(nullptr);
		}

		::System::Single get_normalizedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Single get_length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Single get_speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Single get_speedMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_SPEEDMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORSTATEINFO_GET_LOOP_OFFSET))(nullptr);
		}

	};
}

