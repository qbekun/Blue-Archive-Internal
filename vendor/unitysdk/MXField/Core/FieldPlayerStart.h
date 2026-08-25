#pragma once
#include "../../unitysdk.h"

#define MXFIELD_CORE_FIELDPLAYERSTART_HASSCENEGROUPID_OFFSET UNITYSDK_OFFSET(0xED7380)
#define MXFIELD_CORE_FIELDPLAYERSTART_HASSKIPQUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xED73E0)
#define MXFIELD_CORE_FIELDPLAYERSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0xED7440)
#define MXFIELD_CORE_FIELDPLAYERSTART_PLAYAUDIO_OFFSET UNITYSDK_OFFSET(0xED7450)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldPlayerStart_TypeDefinitionIndex = 10953;

	class FieldPlayerStart : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* PreviousSceneGroupIds; // 0x18
		::Il2CppArray<::System::Object*>* PreviousSkipQuestGroupIds; // 0x20

		::System::Boolean HasSceneGroupId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERSTART_HASSCENEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSkipQuestGroupId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERSTART_HASSKIPQUESTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERSTART_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERSTART_PLAYAUDIO_OFFSET))(nullptr);
		}

	};
}

